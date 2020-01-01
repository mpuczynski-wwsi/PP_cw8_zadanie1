/*EFigielska pp2018*/
#include "dzialania.h"
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "podaj rozmiar tablic: ";
	cin >> n;
	int* ti = utworz_int(n); //tablica z liczbami calkowitymi
	double* td = utworz_double(n); //tablica z liczbami rzeczywistymi

	char wybor = 'l';
	cout << "tablice losowe (l) czy z klawiatury (k)?: ";
	cin >> wybor;
	if (wybor == 'l') {
		wygeneruj_wartosci(ti, n);
		wygeneruj_wartosci(td, n);
	}
	else {
		wpisz_wartosci(ti, n);
		wpisz_wartosci(td, n);
	}

	drukuj_tablice(ti, n);
	if (jest_scisle_rosnacy(ti, n)) {
		cout << "\nciag liczb w tablicy jest scisle rosnacy";
	}
	else
		cout << "\nciag liczb w tablicy nie jest scisle rosnacy";

	if (jest_scisle_malejacy(ti, n)) {
		cout << "\nciag liczb w tablicy jest scisle malejacy";
	}
	else
		cout << "\nciag liczb w tablicy nie jest scisle malejacy";


	drukuj_tablice(td, n);
	if (jest_scisle_rosnacy(td, n)) {
		cout << "\nciag liczb w tablicy jest scisle rosnacy";
	}
	else
		cout << "\nciag liczb w tablicy nie jest scisle rosnacy";

	if (jest_scisle_malejacy(td, n)) {
		cout << "\nciag liczb w tablicy jest scisle malejacy";
	}
	else
		cout << "\nciag liczb w tablicy nie jest scisle malejacy";

	int szukana_i;
	cout << "\npodaj wartosc calkowita szukana: ";
	cin >> szukana_i;
	int indeks = znajdz_wartosc(ti, n, szukana_i);
	if (indeks < 0) {
		cout << "brak wartosci " << szukana_i << " w tablicy";
	}
	else
		cout << "wartosc " << szukana_i << " jest na pozycji " << indeks;

	double szukana;
	cout << "\npodaj wartosc zmiennoprzecinkowa szukana: ";
	cin >> szukana;
	indeks = znajdz_wartosc(td, n, szukana, 0.01);
	if (indeks < 0) {
		cout << "brak wartosci " << szukana << " w tablicy";
	}
	else
		cout << "wartosc " << szukana << " jest na pozycji " << indeks;


	cout << "\nWaroscia minimalna calkowita jest: " << wyznacz_min(ti, n);
	cout << "\nWaroscia maksymalna calkowita jest: " << wyznacz_max(ti, n);

	cout << "\nWaroscia minimalna rzeczywista jest: " << wyznacz_min(td, n);
	cout << "\nWaroscia maksymalna rzeczywista jest: " << wyznacz_max(td, n);


	drukuj_tablice(ti, n);
	if (jest_arytmetyczny(ti, n)) {
		cout << "\nciag liczb w tablicy jest artmetyczny";
	}
	else
		cout << "\nciag liczb w tablicy nie jest artmetyczny";

	drukuj_tablice(td, n);
	if (jest_arytmetyczny(td, n, 0.01)) {
		cout << "\nciag liczb w tablicy jest artmetyczny";
	}
	else
		cout << "\nciag liczb w tablicy nie jest artmetyczny";

	cout << "\nciag liczb w tablicy posortowany niemalejaco";
	drukuj_tablice(sortuj_niemalejaco(ti, n), n);
	cout << "\nciag liczb w tablicy posortowany nierosnaco";
	drukuj_tablice(sortuj_nierosnaco(ti, n), n);

	int x;
	cout << "\npodaj wartosc x: ";
	cin >> x;
	cout << "\nWaroscia wielomianu dla tablicy ti to: " << wartosc_wielomianu(ti, n, x);


}