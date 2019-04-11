#include "ApplicationController.h"

ApplicationController::ApplicationController()
	: console{ ConsoleManager::get_console_manager() }, approximator{ ApproximationController::get_approximation_controller() }
{
}

ApplicationController& ApplicationController::get_application_controller()
{
	static ApplicationController app_controller;
	return app_controller;
}

void ApplicationController::run_app() const
{
	int option{ console.show_menu() };
	while (option > 0)
	{
		const int n{ console.get_accuracy() };
		if (option > approximator.implemented_algorithms_count())
		{
			console.print_error("Niepoprawny wybor");
			return;
		}
		const double result{ approximator.approximate_pi(n, static_cast<ApproximationController::ApproximatingAlgorithm>(option-1)) };
		console.print_result(result);
		option = console.show_menu();
	}
}