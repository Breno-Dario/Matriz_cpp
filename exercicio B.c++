#include "iostream"
#include "math.h"
using namespace std;

int main(){

// Definindo quantas matriz será    
int const tamanho = 8;

int a[tamanho] = {1, 2, 3, 4, 5, 6, 7, 8};
int b[tamanho];

// Definindo quantas vexes vai roda o laço de repetição 
for (int i = 0; i < tamanho; ++i) {
        b[i] = a[i] * 3;
    }

// Imprimindo a matriz     
cout << "Matriz B: ";

for(int i = 0; i < tamanho; i++){
    cout << b[i] << "  ";
}


return 0;
}