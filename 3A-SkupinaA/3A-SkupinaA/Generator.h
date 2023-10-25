#pragma once
#include <vector>

class Generator
{
private:
	int rozsah;
	int pocetCisel;
	std::vector<unsigned int> poleKladnychCisel;
	int indexPola;
public:
	Generator(const int parPocetCisel, const int parRozsah);
	void vygenerujCisla();
	std::vector<unsigned> getPoleKladnychCisel();
	int getIndexPola();
	~Generator();
};

