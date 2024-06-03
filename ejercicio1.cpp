#include <iostream>
using namespace std;


int suma(int entero1, int entero2)
{
    int resultado = 0;
    resultado = (entero1 + entero2);
    return resultado;
}

int multi(int entero1, int entero2)
{
    int producto = 0;
    producto = (entero1 * entero2);
    return producto;
}

double division(double entero1, double entero2)
{
    double residuo = 0;
    residuo = (entero1 / entero2);
    return residuo;
}


int resta(int entero1, int entero2)
{
    int resta = 0;
    resta = (entero1 - entero2);
    return resta;
}
int main()
{
    double n1=0, n2=0, respuesta=0, respuesta2=0,respuesta4=0;
    double respuesta3=0;
    n1=8;
    n2=6;

    respuesta=suma(n1,n2);
    respuesta2=multi(n1,n2);
    respuesta3=division(n1,n2);
    respuesta4=resta(n1,n2);
    cout<<"valor de la suma es "<<respuesta<<"\n";
    
    cout<<"valor de la multiplicacion es "<<respuesta2<<"\n";
    cout<<"valor de la division es "<<respuesta3<<"\n";
    cout<<"valor de la resta es "<<respuesta4<<"\n";

        return 0;

}