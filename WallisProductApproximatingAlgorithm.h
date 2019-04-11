#pragma once
#include "IApproximatingAlgorithm.h"

/**
	Klasa wykorzystuj�ca wz�r Wallisa do oszacowania warto�ci liczby pi.
*/
class WallisProductApproximatingAlgorithm :
	public IApproximatingAlgorithm
{
public:
	inline virtual std::string get_name() const { return "Wykorzystanie wzoru Wallisa do oszacowania wartosci pi"; }
	virtual double approximate_pi(int accuracy_level) const;
};