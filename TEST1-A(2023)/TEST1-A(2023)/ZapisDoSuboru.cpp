#include "ZapisDoSuboru.h"

ZapisDoSuboru::ZapisDoSuboru(const std::string& nazovSuboru)
	:_nazovSuboru(nazovSuboru)
{
}

void ZapisDoSuboru::zapis(PoleCisel* poleCisel)
{
	_subor = new std::ofstream(_nazovSuboru);
	if (_subor->is_open())
	{
		*_subor << poleCisel->getNajmensieANajvacsie().first << '\n';
		*_subor << poleCisel->getNajmensieANajvacsie().second << '\n';
	}
	_subor->close();
}

ZapisDoSuboru::~ZapisDoSuboru()
{
	delete _subor;
	_subor = nullptr;
}
