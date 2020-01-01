/*EFigielska pp2018*/
#pragma once
int * utworz_int(int n);//tworzy tablice z liczbami calkowitymi
double * utworz_double(int n);//tworzy tablice z liczbami rzeczywistymi
void wygeneruj_wartosci(int * a, int n, int d=0, int g=10); //do generowania losowo
void wygeneruj_wartosci(double * a, int n, double d = 0, double g = 10);
void wpisz_wartosci(int * a, int n); //do wpisywania z klawiatury
void wpisz_wartosci(double * a, int n);
void drukuj_tablice(int * a, int n);
void drukuj_tablice(double * a, int n);
bool jest_scisle_rosnacy(int * a, int n);
bool jest_scisle_rosnacy(double * a, int n);
int znajdz_wartosc(int * a, int n, int x);
int znajdz_wartosc(double * a, int n, double x, double eps);
int wyznacz_min(int *a, int n);
double wyznacz_min(double *a, int n);
bool jest_arytmetyczny(int* a, int n);
bool jest_arytmetyczny(double* a, int n, double eps);
int wyznacz_max(int* a, int n);
double wyznacz_max(double* a, int n);
bool jest_scisle_malejacy(int* a, int n);
bool jest_scisle_malejacy(double* a, int n);
int* sortuj_niemalejaco(int* a, int n);
int* sortuj_nierosnaco(int* a, int n);
int wartosc_wielomianu(int* a, int n, int x);

