#include<iostream>
#include "KomplekssSkaitlis.h"
using namespace std;

int main() {
	double UserNumber1 = 3;
	double UserNumber2 = 4;

	KomplekssSkaitlis Userkomplex = KomplekssSkaitlis(UserNumber1, UserNumber2);

	Userkomplex.Pieskaitit(1, 2);
	Userkomplex.Reizinat(1, 2);
	Userkomplex.Drukat();

}