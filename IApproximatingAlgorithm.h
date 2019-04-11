#pragma once
#include <string>

/**
	Interfejs ujednolicaj�cy wszystkie algorytmy.
*/
class IApproximatingAlgorithm
{
public:
	virtual ~IApproximatingAlgorithm() = default; // Polimorfizm itp

	virtual double approximate_pi(int accuracy_level) const = 0; // W�a�ciwa metoda s�u��ca do obliczania warto�ci liczby pi
	inline virtual std::string get_name() const = 0; // Metoda zwracaj�ca nazw� danego algorytmu
	virtual double operator()(int accuracy_level) const
	{ 
		return approximate_pi(accuracy_level); 
	}
};