#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a+*b;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a == b){
    return true;}
    else{
    return false;}
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a==*b)
    return true;
    else
    return false;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    string c=*a;
    char b=c[0];
    return b;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    string pl = *a;
    string in = "";
    for (int i = 0; i < pl.size(); i++)
    {
    {
    string pl = *a;
    string in = "";

    for (int i = 0; i < pl.size(); i++)
    {

        in = pl.substr(i, 1) + in;
    }

    if (pl.compare(in) == 0)
    return true ;

  else
        return false;}
        in = pl.substr(i, 1) + in;}

    if (pl.compare(in) == 0)
    return true ;

  else
        return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int a;
    int b;
    b = *base;
      for (int i =1; i<(*exponente); i++)
      {
          a = b*= *base;
      }
    return a;}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
