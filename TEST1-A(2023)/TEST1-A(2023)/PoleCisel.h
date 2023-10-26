#pragma once
#include <utility>

class PoleCisel
{
private:
	int* _poleCisel = nullptr;
	int _pocetCisel;
	int _rozsah;

public:
	PoleCisel(const int pocetCisel, const int rozsah);
	void vygenerujCisla();
	std::pair<int, int> getNajmensieANajvacsie();
	int* getPoleCisel();
	int getRozsah();
	int getPocetCisel();
	~PoleCisel();
};

