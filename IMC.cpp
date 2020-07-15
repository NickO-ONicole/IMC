#include <math.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{

float peso,altura,imc;

cout<<"Digite seu peso: ";
cin>>peso;
cout<<"Digite sua altura: ";
cin>>altura;

imc = peso / (altura * altura);

cout<<"seu imc: "<<imc<<endl;

   if (imc < 19)
   cout<<"seu peso esta abaixo ";

   if (imc > 25)
   cout<<"seu peso esta acima ";

   if (imc > 19 && imc < 25)
   cout<<"seu peso esta ideal ";
}
