#include "KomplekssSkaitlis.h"
#include <iostream>
using namespace std;

KomplekssSkaitlis::KomplekssSkaitlis(double Number1, double Number2) {
	number1 = Number1;
	number2 = Number2;
}

void KomplekssSkaitlis::Pieskaitit(double number3, double number4) {
	number1 = (number1 + number3);
	number2 = (number2 + number4);
};

void KomplekssSkaitlis::Reizinat(double number3, double number4) {
	double num1 = number1;
	double num2 = number2;
	number1 = (num1 * num2 - number3 * number4);
	number2 = (num1 * number4 + num2 * number3);
};

void KomplekssSkaitlis::Drukat() {
	cout << number1 << " + " << number2 << "i" << endl;
}

KomplekssSkaitlis::~KomplekssSkaitlis(){
};