#include "KomplekssSkaitlis.h"
#include <iostream>
using namespace std;

KomplekssSkaitlis::KomplekssSkaitlis(double Number1, double Number2) {
	number1 = Number1;
	number2 = Number2;
}

void KomplekssSkaitlis::Pieskaitit(double number3, double number4) {
	double sum;
	sum = (number1 + number3) + (number2 + number4);
};

void KomplekssSkaitlis::Reizinat(double number3, double number4) {
	double multiply;
	multiply = (number1 * number2 - number3 * number4) + (number1 * number4 + number2 * number3);
};

void KomplekssSkaitlis::Drukat() {
	cout << number1 << " + " << number2 << "i";
};