#include <iostream>
using namespace std;

int main() {
    char opcao;
    do {
        int n;
        do {
            cout << "Digite um numero positivo para calcular o fatorial: ";
            cin >> n;
        } while (n < 0);

        unsigned long long fatorial = 1;
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }

        cout << n << "! = " << fatorial << endl;

        cout << "Deseja calcular outro fatorial? (S/N): ";
        cin >> opcao;
        opcao = toupper(opcao);
    } while (opcao == 'S');

    return 0;
}