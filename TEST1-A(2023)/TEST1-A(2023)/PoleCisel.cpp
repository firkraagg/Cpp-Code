#include "PoleCisel.h"

#include <random>

PoleCisel::PoleCisel(const int pocetCisel, const int rozsah)
	:_pocetCisel(pocetCisel), _rozsah(rozsah)
{
	this->_poleCisel = new int[_pocetCisel];
}

void PoleCisel::vygenerujCisla()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(-_rozsah,_rozsah);

	for (int i = 0; i < _pocetCisel; ++i)
	{
		this->_poleCisel[i] = distribution(gen);
	}
}

std::pair<int, int> PoleCisel::getNajmensieANajvacsie()
{
	int najvacsieCislo = _poleCisel[0];
	int najmensieCislo = _poleCisel[0];
	for (int i = 0; i < _pocetCisel; ++i)
	{
		if (_poleCisel[i] > najvacsieCislo)
		{
			najvacsieCislo = _poleCisel[i];
		}
		if (_poleCisel[i] < najmensieCislo)
		{
			najmensieCislo = _poleCisel[i];
		}
	}
	return std::make_pair(najvacsieCislo, najmensieCislo);
}

int* PoleCisel::getPoleCisel()
{
	return this->_poleCisel;
}

int PoleCisel::getRozsah()
{
	return _rozsah;
}

int PoleCisel::getPocetCisel()
{
	return _pocetCisel;
}

PoleCisel::~PoleCisel()
{
	if (this->_poleCisel != nullptr)
	{
		delete[] this->_poleCisel;
	}
	this->_poleCisel = nullptr;
}
