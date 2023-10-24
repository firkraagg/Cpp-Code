#include "Generator.h"

#include <random>

Generator::Generator(int pMin, int pMax)
{
	min = pMin;
	max = pMax;
}

void Generator::vygenerujCisla(int pocetCisel)
{

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(min, max);

	for (int i = 0; i < pocetCisel; ++i)
	{
		int nahodneCislo = distribution(gen);
		poleCisel.push_back(nahodneCislo);
	}
}

const std::vector<int>& Generator::getCisla()
{
	return poleCisel;
}
