#pragma once
#include "ConsoleManager.h"
#include "ApproximationController.h"

/**
	Klasa g��wna, steruj�ca programem. Implementuje wzorzec projektowy singleton.
*/
class ApplicationController
{
	ApplicationController();
	ApplicationController(ApplicationController&&) = delete;
	ApplicationController(const ApplicationController&) = delete;

	ConsoleManager& console; // Manager wyj�cia
	ApproximationController& approximator; // Manager algorytm�w aproksymuj�cych
public:
	static ApplicationController& get_application_controller();
	void run_app() const; // Metoda kontroluj�ca przebieg programu
};