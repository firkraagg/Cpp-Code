#include "Vypis.h"

void Vypis::vypisCisla(PoleCisel* poleCisel)
{
	std::cout<<"Najvacsie cislo:\t" << poleCisel->getNajmensieANajvacsie().first << '\n';
	std::cout<<"Najmensie cislo:\t" << poleCisel->getNajmensieANajvacsie().second << '\n';
}
