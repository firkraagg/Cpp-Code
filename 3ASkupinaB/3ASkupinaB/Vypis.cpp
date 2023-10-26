#include "Vypis.h"

#include <iostream>

void Vypis::vypisNajvacsieCislo(CitacSuboru* citac)
{
	std::cout << citac->vratNajvacsieCislo() << '\n';
}
