#include "Generator.h"

#include <random>

Generator::Generator(const int& parPocetCisel, const int& parRozsah)
	:_rozsah(parRozsah), _pocetCisel(parPocetCisel)
{
	_poleKladnychCisel = new int[parPocetCisel];
}

void Generator::vygenerujCisla()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<unsigned int> distribution(0, _rozsah);

	_indexPola = distribution(gen);

	for (int i = 0; i < _pocetCisel; ++i)
	{
		_poleKladnychCisel[i] = distribution(gen);
	}
}

int* Generator::getPoleKladnychCisel()
{
	return _poleKladnychCisel;
}

int Generator::getIndexPola()
{
	return _indexPola;
}

Generator::~Generator()
{
	delete[] _poleKladnychCisel;
}
