#include "ApplicationController.h"

int main()
{
	// Pobranie singletonu apliakcji i uruchomienie g��wnej procedury. W pliku nag��wkowym klasy ApplicationController dalsze komentarze
	ApplicationController::get_application_controller().run_app();
}