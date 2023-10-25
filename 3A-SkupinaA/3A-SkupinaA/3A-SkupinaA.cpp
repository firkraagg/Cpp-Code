#define _CRTDBG_MAP_ALLOC 
#include <stdlib.h> 
#include <crtdbg.h>

#include "Generator.h"
#include "Vypis.h"

int main(int argc, char* argv[])
{
    int pocetPrvkov = atoi(argv[1]);
    int rozsah = atoi(argv[2]);

    Generator* generator = new Generator(pocetPrvkov, rozsah);
    generator->vygenerujCisla();

    Vypis vypis;
    vypis.vypis(generator, pocetPrvkov);

    delete generator;
    _CrtDumpMemoryLeaks();
}
