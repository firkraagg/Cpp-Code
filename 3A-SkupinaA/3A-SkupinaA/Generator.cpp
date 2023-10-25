#include "Generator.h"

#include <random>

Generator::Generator(int parPocetCisel, const int parRozsah)
	:rozsah(parRozsah), pocetCisel(parPocetCisel), poleKladnychCisel(pocetCisel), indexPola()
{
}

void Generator::vygenerujCisla()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<unsigned int> distribution(0, rozsah);

	indexPola = distribution(gen);

	for (int i = 0; i < pocetCisel; ++i)
	{
		poleKladnychCisel[i] = distribution(gen);
	}
}

std::vector<unsigned> Generator::getPoleKladnychCisel()
{
	return poleKladnychCisel;
}

int Generator::getIndexPola()
{
	return indexPola;
}

Generator::~Generator()
{
	poleKladnychCisel.clear();
}
