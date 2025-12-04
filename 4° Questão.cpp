#include <iostream>
using namespace std;

int main() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    cout << "Valores armazenados no vetor:";
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }

    return 0;
}
