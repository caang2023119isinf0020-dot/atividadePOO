#include <iostream>
using namespace std;

int main() {
    int vetor[8];
    int maior, menor;
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }
    maior = vetor[0];
    menor = vetor[0];


    for (int i = 1; i < 8; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posMaior = i;
        }

        if (vetor[i] < menor) {
            menor = vetor[i];
            posMenor = i;
        }
    }
    // Resultados
    cout << "Maior valor: " << maior << " (posicao: " << posMaior << ")\n";
    cout << "Menor valor: " << menor << " (posicao: " << posMenor << ")\n";

    return 0;
}
