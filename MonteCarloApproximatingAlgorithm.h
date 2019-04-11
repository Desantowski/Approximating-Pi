#pragma once
#include "IApproximatingAlgorithm.h"
#include <random>

/**
	Klasa obliczaj�ca przybli�on� warto�� liczby pi poprzez wylosowanie pewnej ilo�ci punkt�w z kwadratu
	i sprawdzenie ile z tych punkt�w nale�y do okr�gu wpisanego w �w kwadrat.
*/
class MonteCarloApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizone obliczenie liczby pi poprzez zastosowanie metody Monte-Carlo"; }
	virtual double approximate_pi(int accuracy_level) const; // ilo�� punkt�w = accuracy_level * 150
};