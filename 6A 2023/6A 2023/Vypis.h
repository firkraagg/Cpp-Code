#pragma once
#include "Generator.h"

class Vypis
{
private: Generator& generator;
public:
	Vypis(Generator& generator);
	void vypisCisla();
};

