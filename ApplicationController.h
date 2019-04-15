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

	ConsoleManager& console; // Obiekt klasy zarz�dzaj�cej konsol� (wyj�ciem)
	ApproximationController& approximator; // Obiekt klasy dysponuj�cej zbiorem algorytm�w przybli�aj�cych liczb� pi
public:
	static ApplicationController& get_application_controller();
	void run_app() const; // Metoda kontroluj�ca przebieg programu
};