#pragma once
#include "IApproximatingAlgorithm.h"
/**
	Klasa wyznaczaj�ca przybli�on� warto�� liczby pi poprzez obliczenie pola p�okr�gu i wyznaczenie z niego liczby pi.
	Pole p�okr�gu jest realizowane jako warto�� ca�ki z funkcji sqrt(1-x^2) na przedziale [-1,1].
	Klasa korzysta z IntegralUtilities.
*/
class HalfCircleAreaIntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Numeryczne obliczenie pola polkola (jako wykresu funkcji sqrt(1-x^2) i wyznaczenie liczby pi"; }
	virtual double approximate_pi(int accuracy_level) const;
};