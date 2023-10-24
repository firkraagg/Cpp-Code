#include <iostream>

#include "Generator.h"
#include "Vypis.h"
#include "ZapisDoSuboru.h"

int main(int argc, char* argv[])
{
    int pocetCisel = std::atoi(argv[1]);

    Generator generator(1,100);
    generator.vygenerujCisla(pocetCisel);

    Vypis vypis(generator);
    vypis.vypisCisla();

    ZapisDoSuboru zapis;
    zapis.zapis(generator, "min50.txt");
    return 0;
}
