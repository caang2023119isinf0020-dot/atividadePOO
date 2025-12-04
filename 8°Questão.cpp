//8.Crie um vetor de 6 nomes (strings). O programa deve: Ler os nomes, perguntar um nome a ser buscado, informar se ele existe no vetor.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string busca;
    bool encontrado = false;

    for (int i = 0; i < 6; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }
    cout << "Digite o nome que deseja buscar: ";
    getline(cin, busca);

    for (int i = 0; i < 6; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) {
        cout << "O nome \"" << busca << "\" existe no vetor." << endl;
    } else {
        cout << "O nome \"" << busca << "\" nao existe no vetor." << endl;
    }

    return 0;
}

