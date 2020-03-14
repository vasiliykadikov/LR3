#pragma once
#include "Auto.h"
class Autobus : public Auto
{
	int maxpas;
public:
	Autobus(std::string name, double maxv, int maxpas);
	void print();

};
