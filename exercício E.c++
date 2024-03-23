#include "iostream"
#include "math.h"
using namespace std;

int main(){

  //Defenindo quantos elemntos terá em uma matriz
  int const tamanho = 15;

  int a [tamanho];
  int b [tamanho];

 // Pedindo para o usuário digitar o número da matriz
  cout << "Digite as matriz de A: ";
  for (int i = 0; i < tamanho; i++)
  {
    cin >> a[i];
  }

 cout << "Digite as matriz de B: ";
  for (int i = 0; i < tamanho; i++)
  {
    cin >> b[i];
  }

// Fazendo a junção de A + B  
int const tamanho_c = tamanho * 2;
int c[tamanho_c];

for (int i = 0; i < tamanho; i++)
{
   c[i] = a[i];
   c[i + tamanho] = b[i];
}

// Imprimindo a junção de A + B em C
cout << "Matriz C: ";
for (int i = 0; i < tamanho_c; i++)
{
    cout << c[i] << "  ";
}

 return 0;
}