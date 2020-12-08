#include "program.h"

program::program(double Number1, double Number2) {
	number1 = Number1;
	number2 = Number2;
}

void program::pieskaitit(double number3, double number4) {
	double sum;
	sum = (number1 + number2) + (number3 + number4);
};

double program::reizinat(double number3, double number4) {
	double multiply;
	multiply = (number1 + number2) * (number3 + number4);
	return multiply;
};

double program::print() {
	
};