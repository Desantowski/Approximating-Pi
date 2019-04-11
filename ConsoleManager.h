#pragma once
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <vector>

/**
	Klasa zarz�daj�ca konsol�.
*/
class ConsoleManager
{
private:
	ConsoleManager() = default;
	ConsoleManager(const ConsoleManager&) = delete;
	ConsoleManager(ConsoleManager&&) = delete;

public:
	static ConsoleManager& get_console_manager();
	int show_menu(std::vector<std::string> algorithm_names) const; // Funkcja pokazuj�ca menu, zwraca wybran� przez u�ytkownika opcj�.
	int get_accuracy() const; // Funkcja wy�wietlaj�ca monit o ustalenie dok�adno�ci oblicze�, zwraca liczb� naturaln� - stopie� dok�adno�ci, np. ilo�� wyraz�w szeregu do zsumowania.
	void print_error(const std::string & error_info) const; // Wy�wietla komunikat b��du.
	void print_result(const double & result) const; // Wy�wietla wynik oblicze�.
};