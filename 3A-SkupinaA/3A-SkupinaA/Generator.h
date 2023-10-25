#pragma once

class Generator
{
private:
	int _rozsah = 0;
	int _pocetCisel = 0;
	int _indexPola = 0;
	int* _poleKladnychCisel;
public:
	Generator(const int& parPocetCisel, const int& parRozsah);
	void vygenerujCisla();
	int* getPoleKladnychCisel();
	int getIndexPola();
	~Generator();
};

