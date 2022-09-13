#include <iostream>
#include <iomanip>
using namespace std;

void imprimir( int *pEntero, int ne );
int * dimensionar(int n);
void   llenarDatos(int * pA,int n);

int main()
{ int n;

    srand(time(nullptr));
  cout << "Numero de elementos que tendra el arreglo : ";
  cin >> n;
  int *pA = dimensionar(n);
  llenarDatos(pA, n);
  imprimir(pA,n);

}

int * dimensionar(int n)
{
    return new int[n];
}

void   llenarDatos(int * pA,int n)
{
    for(unsigned int i=0; i<n; i++)
        pA[i] = rand() % 1000;
}

void imprimir( int *pEntero, int ne )
{  for(unsigned int i=0; i<ne; i++)
        cout << setw(6) << pEntero[i];
}