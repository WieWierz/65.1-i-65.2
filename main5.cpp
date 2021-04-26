#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class licz{
	ifstream plik1;
	ifstream plik3;
	
	public:
		void jeden();
		void dwa();
		vector <int> czy();
};

void licz::jeden() {
	
 	double licznik, mianownik,min, mlicznik, mmianownik;
 	
 	plik1.open("dane_ulamki.txt");
		
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
		cout<<mlicznik<<","<<mmianownik;
	}
	plik1.close();
}

void licz::dwa(){
	
	plik3.open("dane_ulamki.txt");
	
	int licznik, mianownik;
	
	vector <int> rozklad(int);
	void skracalne(vector <int>, vector<int>);
	
	vector <int> czynniki_licznika;
	vector <int> czynniki_mianownika;
 	int suma_licznikow=0;
	if(plik3.good()) {
		while(!plik3.eof()) {
			plik3>>licznik;
			czynniki_licznika = rozklad(licznik);
			plik3>>mianownik;
			czynniki_mianownika = rozklad(mianownik);	
			skracalne(czynniki_licznika, czynniki_mianownika);
			suma_licznikow += licznik;
		}
	
	
		for (int i=2; i<=liczba; i++) {
	   		while (liczba%i == 0) {
	        	liczba/=i;
	        	rozklad.push_back(i);
	    	}
	 	}
	 	
	 	if(czynniki_licznika[i]==czynniki_mianownika[j] && czynniki_mianownika[j]!=0) {
				licznik/=czynniki_licznika[i];
				mianownik/=czynniki_mianownika[j];
				czynniki_licznika[i]=0;
				czynniki_mianownika[j]=0;
			}
		}
		cout<<suma_licznikow;
		}
}

int main(int argc, char** argv) {
	
	licz l;
	l.jeden();
	l.dwa();
	
	return 0;
}
