#include "CitacSuboru.h"

#include <fstream>
#include <random>

CitacSuboru::CitacSuboru(const std::string& nazovSuboru)
	:_nazovSuboru(nazovSuboru)
{
}

void CitacSuboru::nacitajCisla()
{
	_subor = new std::ifstream(_nazovSuboru);
	if (_subor->is_open())
	{
		*_subor >> _pocetCisel;
		_poleCisel = new int[_pocetCisel];
		_poleCisel[0] = _pocetCisel;
		for (int i = 1; i < _pocetCisel; ++i)
		{
			*_subor >> _poleCisel[i];
		}
	}
	_subor->close();
}

int CitacSuboru::vratNajvacsieCislo()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> distribution(0, _pocetCisel - 1);

	int cislo1 = _poleCisel[distribution(gen)];
	int cislo2 = _poleCisel[distribution(gen)];
	int cislo3 = _poleCisel[distribution(gen)];

	if (cislo1 > cislo2 && cislo1 > cislo3)
	{
		return cislo1;
	}if (cislo2 > cislo1 && cislo2 > cislo3)
	{
		return cislo2;
	}if (cislo3 > cislo1 && cislo3 > cislo2)
	{
		return cislo3;
	}
}

CitacSuboru::~CitacSuboru()
{
	if (_poleCisel)
    {
        delete[] _poleCisel;
    }
    if (_subor)
    {
        delete _subor;
    }
}
