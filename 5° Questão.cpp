#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
        soma += vetor[i]; 
    }

    media = soma / 5.0;

    cout << "Soma total: " << soma << endl;
    cout << "Media aritmetica: " << media << endl;

    return 0;
}
