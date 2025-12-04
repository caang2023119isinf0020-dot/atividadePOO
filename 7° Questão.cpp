//7.Crie um vetor com 10 números digitados pelo usuário. Peça um número x e informe: se o x está no vetor e em qual posição ele aparece pela primeira vez.
#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int x;
    int posicao = -1;

    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Digite o numero que deseja procurar (x): ";
    cin >> x;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == x) {
            posicao = i;
            break; 
        }
    }
    
    if (posicao != -1) {
        cout << "O numero " << x << " foi encontrado na posicao: " << posicao << endl;
    } else {
        cout << "O numero " << x << " nao foi encontrado no vetor." << endl;
    }

    return 0;
}
