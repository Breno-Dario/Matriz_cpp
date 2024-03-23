#include "iostream"
#include "math.h"
using namespace std;

int main(){

//Defenindo quantos elemntos terá em uma matriz
int const tamanho = 20;

int a[tamanho];
int b[tamanho];

// Pedindo para o usuário digitar o número da matriz
cout << "Digite a matriz de A: ";
for (int i = 0; i < tamanho; i++)
{
    cin >> a[i];
}
// Fazendo a inverção da Matriz B
for (int i = 0; i < tamanho; i++)
{
    b[i] = a[tamanho - 1 - i];
}

// Imprimindo a Matriz A não imvertida e imprimindo a matriz B invertida
cout << "Matriz A\t Matriz B \n";
for (int i = 0; i < tamanho; i++)
{
    cout << a[i] << "\t\t" << b[i] << endl;
}

 return 0;
}