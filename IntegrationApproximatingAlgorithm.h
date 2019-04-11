#pragma once
#include "IApproximatingAlgorithm.h"

/**
	Klasa obliczaj�ca warto�� liczby pi poprzez ca�k� z 4/(1+x^2) na przedziale [0,1], tj. korzystaj�ca
	z to�samo�ci arctg(1) = pi/4 i wykorzystuj�ca numeryczn� warto�� tej ca�ki.
	Klasa korzysta z IntegralUtilities.
*/
class IntegrationApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Przyblizenie liczby pi poprzez tozsamosc pi/4 = arctg(1) = calka z 1/(1+x^2) na przedziale [0,1] poprzez numeryczne obliczenie calki"; }
	virtual double approximate_pi(int accuracy_level) const;
};

