/*EFigielska pp2018*/
#include "dzialania.h"
#include <random>
#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int * utworz_int(int n){
	return new int[n];
}

double * utworz_double(int n){
	return new double[n];
}

void wygeneruj_wartosci(int * a, int n, int d, int g){
	default_random_engine gen(unsigned(time(0)));
	uniform_int_distribution<int> los(d, g);
	for (int i = 0; i < n; i++)
		a[i] = los(gen);
}

void wygeneruj_wartosci(double * a, int n, double d, double g){
	default_random_engine gen(unsigned(time(0)));
	uniform_real_distribution<double> los(d, g);
	for (int i = 0; i < n; i++)
		a[i] = los(gen);
}

void wpisz_wartosci(int * a, int n){
	cout << "podaj " << n << " wartosci calkowitych: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void wpisz_wartosci(double * a, int n){
	cout << "podaj " << n << " wartosci rzeczywistych: ";
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void drukuj_tablice(int * a, int n){
	cout << "\n\n";
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
}

void drukuj_tablice(double * a, int n) {
	cout << "\n\n"<<fixed<<setprecision(2);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

bool jest_scisle_rosnacy(int * a, int n){
	for (int i = 1; i < n; i++) {
		if (a[i - 1] >= a[i]) { //czy nastepnik jest wiekszy od poprzednika
			return false;
		}
	}
	return true;
}
bool jest_scisle_rosnacy(double * a, int n) {
	for (int i = 1; i < n; i++) {
		if (a[i - 1] >= a[i]) { //czy nastepnik jest wiekszy od poprzednika
			return false;
		}
	}
	return true;
}

int znajdz_wartosc(double * a, int n, double x, double eps){
	for (int i = 0; i < n; i++) {
		if (x - eps <= a[i] && a[i] <= x + eps) {
			return i; //pozycja wartosc x w tablicy (z dokladnoscia eps)
		}
	}
	return -1;
}

int znajdz_wartosc(int* a, int n, int x) {
	for (int i = 0; i < n; i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}

int wyznacz_min(int* a, int n) {
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

double wyznacz_min(double* a, int n) {
	double min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

bool jest_arytmetyczny(int* a, int n) {
	int r = a[1] - a[0];
	for (int i = 2; i < n; i++) {
		int r2 = a[i] - a[i-1];
		if (r2 != r) {
			return false;
			break;
		}
	}
	return true;
}

bool jest_arytmetyczny(double* a, int n, double eps) {
	double r = a[1] - a[0];
	for (int i = 2; i < n; i++) {
		double r2 = a[i] - a[i - 1];
		if ((r2 - r) > eps) {
			return false;
			break;
		}
	}
	return true;
}

int wyznacz_max(int* a, int n) {
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

double wyznacz_max(double* a, int n) {
	double max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < max) {
			max = a[i];
		}
	}
	return max;
}

bool jest_scisle_malejacy(int* a, int n) {
	for (int i = 1; i < n; i++) {
		if (a[i - 1] <= a[i]) { //czy nastepnik jest mniejszy od poprzednika
			return false;
		}
	}
	return true;
}
bool jest_scisle_malejacy(double* a, int n) {
	for (int i = 1; i < n; i++) {
		if (a[i - 1] <= a[i]) { //czy nastepnik jest mniejszy od poprzednika
			return false;
		}
	}
	return true;
}

int* sortuj_niemalejaco(int* a, int n) {
	int i, j, minIndeks, tmp;
	for (i = 0; i < n - 1; i++) {
		minIndeks = i;

		for (j = i + 1; j < n; j++) {
			if (a[j] < a[minIndeks]) {
				minIndeks = j;
			}
		}

		if (minIndeks != i) {
			tmp = a[i];
			a[i] = a[minIndeks];
			a[minIndeks] = tmp;
		}
	}
	return a;
}

int* sortuj_nierosnaco(int* a, int n) {
	int i, j, maxIndeks, tmp;
	for (i = 0; i < n - 1; i++) {
		maxIndeks = i;

		for (j = i + 1; j < n; j++) {
			if (a[j] > a[maxIndeks]) {
				maxIndeks = j;
			}
		}

		if (maxIndeks != i) {
			tmp = a[i];
			a[i] = a[maxIndeks];
			a[maxIndeks] = tmp;
		}
	}
	return a;

}

int wartosc_wielomianu(int* a, int n, int x) {
	int suma = 0;
	for (int i = n; i > 0; i--) {
		suma += a[n - 1] * pow(x, i);
	}
	return suma;
}

