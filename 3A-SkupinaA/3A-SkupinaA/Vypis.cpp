#include "Vypis.h"

#include <iostream>

void Vypis::vypis(Generator& generator, int pocetCisel)
{
	std::vector<unsigned> poleKladnychCisel = generator.getPoleKladnychCisel();
	int cislo = 1;
	for (int i = generator.getIndexPola(); i < pocetCisel; ++i)
	{
		std::cout << cislo << ".\t" << poleKladnychCisel[i] << '\n';
		cislo++;
	}
}
