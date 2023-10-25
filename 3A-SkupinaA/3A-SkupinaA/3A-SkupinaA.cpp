#include <iostream>

#include "Generator.h"
#include "Vypis.h"
#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>

int main(int argc, char* argv[])
{
    int pocetPrvkov = atoi(argv[1]);
    int rozsah = atoi(argv[2]);

    Generator generator(pocetPrvkov, rozsah);
    generator.vygenerujCisla();

    Vypis vypis;
    vypis.vypis(generator, pocetPrvkov);

    _CrtDumpMemoryLeaks();
}
