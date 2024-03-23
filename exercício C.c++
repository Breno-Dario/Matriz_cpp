#include "iostream"
#include "math.h" 
using namespace std;

// Definindo quantos elementos deve ter em uma matriz
int main() {
    const int tamanho = 20;

int a[tamanho];
int b[tamanho];
int c[tamanho];

// Pedindo pro usuário inserir os números para matriz  
cout << "Digite os elementos da matriz A: ";
 for(int i = 0; i < tamanho; i++)
 {
    cin >> a[i];
 }

cout << "Digite os elementos da matriz B: ";
for (int i = 0; i < tamanho; i++)
{
    cin >> b[i];
}

// Fazendo a subtração da matriz A e B
for (int i = 0; i < tamanho; i++){
    c[i] = a[i] - b[i];
}

// Imprimindo o resultado na matriz C
cout << "Matiz C: ";
for (int i = 0; i < tamanho; i++)
{
    cout << c[i] << "  ";
}
    
    return 0;
}
