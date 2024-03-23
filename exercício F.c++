#include <iostream>
using namespace std;

int main() {

    //Defenindo quantos elemntos terá em uma matriz
    const int tamanho_a = 20;
    const int tamanho_b = 30;

    int a[tamanho_a];
    int b[tamanho_b];

    // Pedindo para o usuário digitar o número da matriz
    cout << "Digite matriz A: ";
    for (int i = 0; i < tamanho_a; i++) {
        cin >> a[i];
    }

    cout << "Digite matriz B: ";
    for(int i = 0; i < tamanho_b; i++) {
        cin >> b[i];
    }
    
    // Fazendo a junção de A + B
    const int tamanho_c = tamanho_a + tamanho_b;
    int c[tamanho_c];

    for (int i = 0; i < tamanho_a; i++) {
        c[i] = a[i];
    }

    for (int i = 0; i < tamanho_b; i++) {
        c[i + tamanho_a] = b[i];
    }

    // Imprimindo o resulta da junção A + B em C 
    cout << "Matriz C: ";
    for (int i = 0; i < tamanho_c; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
