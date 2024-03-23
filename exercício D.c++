#include "iostream"
#include "math.h"
using namespace std;

int main(){
  
  //Defenindo quantos elemntos terá em uma matriz
  int const tamanho = 15;

  int a[tamanho];
  int b[tamanho];

 // Pedindo para o usuário digitar o número da matriz
  cout << "Digite a matriz de A: ";
  for (int i = 0; i < tamanho; i++)
  {
    cin >> a[i];
  }

  cout << "Digite a matriz de B: ";
  for (int i = 0; i < tamanho; i++)
  {
    cin >> b[i];
  }

  // Fazendo os cálculo da matriz ao quadrado
  for (int i = 0; i < tamanho; i++)
  {
    b[i] = a[i] * a[i]; 
  }

//Imprimindo o resultado da matriz ao quadrado
 cout << "Matriz A: ";
 for (int i = 0; i < tamanho; i++)
 {
    cout << a[i] << "  ";
 }

 cout << endl;

cout << "Matriz B: ";
 for (int i = 0; i < tamanho; i++)
 {
    cout << b[i] << "  ";
 }


return 0;
}