#include "ApplicationController.h"

int main()
{
	// Pobranie singletonu apliakcji i uruchomienie g��wnej procedury
	ApplicationController::get_application_controller().run_app();
}