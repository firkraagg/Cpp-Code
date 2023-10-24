#include "Vypis.h"

#include <iostream>

Vypis::Vypis(Generator& gen) : generator(gen) {};

void Vypis::vypisCisla()
{
	const std::vector<int>& cisla = generator.getCisla();

	for (int i = 0; i < cisla.size(); ++i)
	{
		std::cout << i + 1 << ".\t" << cisla[i] << '\n';
	}
}
