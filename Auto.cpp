#include "Auto.h"
Auto::Auto(std::string name, double vmax) {
	this->name = name;
	this->vmax = vmax;
}
void Auto::print() {
	std::cout << "\nname: " << name << "\nvmax: " << vmax << "\n";
}
