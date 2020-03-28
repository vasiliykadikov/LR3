#include "Autobus.h"
Autobus::Autobus(std::string name, double maxv, int maxpas) :
	Auto::Auto(name, maxv) {
		this->maxpas = maxpas;
	}	
void Autobus::print() {
	Auto::print();
		std::cout << "\nmax passengers: " << maxpas;
}
