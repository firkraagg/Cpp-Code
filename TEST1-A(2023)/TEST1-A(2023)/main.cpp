#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>

#include <iostream>

#include "PoleCisel.h"
#include "Vypis.h"
#include "ZapisDoSuboru.h"

int main(int argc, char* argv[])
{
	const int pocetCisel = atoi(argv[1]);
	const int rozsah = atoi(argv[2]);

	PoleCisel* poleCisel = new PoleCisel(pocetCisel, rozsah);
	poleCisel->vygenerujCisla();

	Vypis vypis;
	vypis.vypisCisla(poleCisel);

	ZapisDoSuboru zapisDoSuboru("cisla.txt");
	zapisDoSuboru.zapis(poleCisel);

	delete poleCisel;
	_CrtDumpMemoryLeaks();
	return 0;
}
