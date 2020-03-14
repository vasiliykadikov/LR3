#pragma once
#include <string>
#include <iostream>
class Auto
{
protected:
	std::string name;
	double vmax;
public:
	Auto(std::string name, double vmax);
	virtual void print();
};