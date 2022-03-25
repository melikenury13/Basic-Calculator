#include <iostream>
using namespace std;

int main() {
	int sayi1, sayi2, a;
	
	cout << "1. sayiyi giriniz: " << endl;
	cin >> sayi1;
	cout << "2. sayiyi giriniz: " << endl;
	cin >> sayi2;
	
	cout << "Ýslem giriniz: " << endl;
	cout << "1- Toplama " << endl;
	cout << "2- Carpma " << endl;
	cout << "3- Bolme " << endl;
	cout << "4- Cikarma " << endl;
	cin>> a;
	
	if (a == 1) {
		cout << sayi1+sayi2 << endl;
	}
	
	else if (a == 2) {
		cout << sayi1*sayi2 << endl;
	}
	
	else if (a == 3) {
		cout << sayi1/sayi2 << endl;
	}
	
	else if (a == 4) {
		cout << sayi1-sayi2 << endl;
	}
	
	else {
		cout << "Hatali giris yaptiniz " << endl;
	}
}
