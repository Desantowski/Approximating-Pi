#pragma once
#include <vector>
#include <memory>
#include "IApproximatingAlgorithm.h"

/**
	Manager algorytm�w aproksymuj�cych, wywo�uje odpowiednie algorytmy szacuj�ce warto�� liczby pi i zwraca wynik.
	Klasa jest ca�kowicie niezale�na od wyj�cia.
*/
class ApproximationController
{
	using ApproxAlgoPtr = std::unique_ptr<IApproximatingAlgorithm>;

	std::vector<ApproxAlgoPtr> algorithms; // Wektor zawieraj�cy wska�niki na odpowiednie algorytmy
	ApproximationController();
	ApproximationController(ApproximationController&&) = delete;
	ApproximationController(const ApproximationController&) = delete;

public:
	double approximate_pi(int accuracy_level, int algorithm = 1) const;
	int implemented_algorithms_count() const; // Funkcja zwracaj�ca ilo�� aktualnie zaimplementowanych algorytm�w, tj. rozmiar wektora algorithms
	std::vector<std::string> get_names(); // Funkcja zwracaj�ca nazwy wszystkich algorytm�w, wykorzystywana do poprawnego wy�wietlania menu
	static ApproximationController& get_approximation_controller(); // Implementacja wzorca projektowego singleton
};