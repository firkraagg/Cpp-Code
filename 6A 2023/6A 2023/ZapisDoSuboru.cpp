#include "ZapisDoSuboru.h"

#include <fstream>

void ZapisDoSuboru::zapis(Generator& generator, const std::string& nazovSuboru)
{
	const std::vector<int> cisla = generator.getCisla();
	std::ofstream subor(nazovSuboru);
	if (subor.is_open())
	{
		for (int cislo : cisla)
		{
			if(cislo < 50)
			{
				subor << cislo << std::endl;
			}
		}
		subor.close();
	}
}
