#include "iostream"
#include "math.h"
using namespace std;

int main(){
 
// Definindo a matriz 
  int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Definido a divisão de bytes onde cadas espaça que a matriz oculpa é 4 bytes
  int n = sizeof(x)/sizeof(int);

// Limitandos quantas vezes vai fica rodando, neste caso será 9 vezes contando com 0  
  for (int i = 0; i < n; i++)
  {
// Vai imprimir na tela  quantos vetores terá   
    cout << "Os vetores sao: "<< i << " e " << x[i] << endl;  
  }

 return 0;

}

