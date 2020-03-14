#include "Auto.h"
#include "Autobus.h"
int main()
{
	Auto A1("qq", 60);
	Autobus A2("qqq", 50, 20);
	Auto *AA;
	AA = &A1;
	AA->print();
	AA = &A2;
	AA->print();
}