#include <iostream>
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>

#include "CitacSuboru.h"
#include "Vypis.h"


int main(int argc, char* argv[])
{
    const char* nazovSuboru = argv[1];

    CitacSuboru* citac = new CitacSuboru(nazovSuboru);
    citac->nacitajCisla();

    Vypis vypis;
    vypis.vypisNajvacsieCislo(citac);

    delete citac;

    _CrtDumpMemoryLeaks();
    return 0;
}