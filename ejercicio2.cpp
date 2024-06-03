#include <iostream>
using namespace std;

double calcula_media(double, double); // Declaración
 int main() { 
double numero1=0, numero2=0, resultado=0; 
cout << "Introduzca el primer numero: "; 
cin >> numero1;
 cout << "Introduzca el segundo numero: "; 
cin >> numero2;
 resultado = calcula_media(numero1, numero2); // Llamada
 cout << "La media de "<< numero1<< " y " <<numero2<<" es "<<resultado<<"\n";
 return 0;
 } 
// Definición
 double calcula_media(double num1, double num2) {
 double media; 
media=(num1+num2)/2;
 return media; }
