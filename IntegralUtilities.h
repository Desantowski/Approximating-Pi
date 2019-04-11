#pragma once
#include <functional>

/**
	Klasa (cho� r�wnie dobrze mog�aby by� to przestrze� nazw, w praktyce ni� w�a�nie jest)
	zawieraj�ca	metody ca�kowania. Aktualny projekt wymaga tylko jakiejkolwiek ca�ki,
	ale niewykluczone jest, �e w przysz�o�ci zostanie rozszerzona o pe�en wachlarz
	mo�liwo�ci ca�kowania, np. funkcj� licz�c� sum� g�rn�/doln� dla zadanego podzia�u,
	czy po prostu funkcj� realizuj�c� np. metod� Simpsona z zadanymi parametrami.
*/
class IntegralUtilities
{
public:
	/**
		Jako, �e obecny projekt nie skupia si� na ca�kowaniu i potrzebuje jakiegokolwiek ca�kowania, to
		funkcja ca�kuj�ca po prostu ma ca�kowa�.
	*/
	template<typename FunctionValueType, typename FunctionArgumentType>
	static double just_integrate(const FunctionArgumentType& a, const FunctionArgumentType& b, int accuracy_level, const std::function<FunctionValueType(FunctionArgumentType)>& f)
	{
		double sum{ 0.0 };
		double dx{ (b - a) / static_cast<double>(accuracy_level) };
		FunctionArgumentType x{ a };
		for (int i{ 0 }; i < accuracy_level; i++)
		{
			sum += dx * static_cast<double>(f(x));
			x += dx;
		}
		return sum;
	}
};