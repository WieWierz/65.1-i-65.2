#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class licz{
	ifstream plik1;
	ofstream plik2;
	ifstream plik3;
	ofstream plik4;
	
	public:
		void jeden();
		void dwa();
		vector <int> czy();
};

void licz::jeden() {
	
 	double licznik, mianownik,min, mlicznik, mmianownik;
 	
 	plik1.open("dane_ulamki.txt");
	plik2.open("wynik.txt");
		
	if(plik1.good()) {
		plik1>>licznik;
		plik1>>mianownik;	
		min = licznik/mianownik;
		mlicznik = licznik;
		mmianownik = mianownik;
		while(!plik1.eof()) {
			plik1>>licznik;
			plik1>>mianownik;	
			if(licznik/mianownik<min) {
				min = licznik/mianownik;
				mlicznik = licznik;
				mmianownik = mianownik;
			}
			if(licznik/mianownik==min) {
				if(mianownik<=mmianownik) {
					mlicznik = licznik;
					mmianownik = mianownik;
				}
			}
		}
		cout<<"Dziala!";
		plik2<<mlicznik<<","<<mmianownik;
	}
	plik1.close();
	plik2.close();
}

void licz::dwa(){
	
	plik3.open("dane_ulamki.txt");
	plik4.open("wynik2.txt");
	
	vector <int> liczby1;
	vector <int> liczby2;
 	int l1, l2;
 	int il=0;
	if(plik3.good()) {
		while(!plik3.eof()) {
			plik3>>l1;
			liczby1 = r(l1);
			plik3>>l2;
			czy2 = r(l2);
			for (int i=2; i<=l; i++) {
	   		while (liczba%i == 0) {
	        	liczba/=i;
	        	czy.push_back(i);
	    	}
	 	}	
			if(nieskracalne(liczby1, liczby2)) {
				il++;
			}
		}
		plik4<<il;
	}
	
	plik3.close();
	plik4.close();
}

int main(int argc, char** argv) {
	
	licz l;
	l.jeden();
//	l.dwa();
	
	return 0;
}
