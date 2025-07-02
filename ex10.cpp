 #include <iostream>
using namespace std;

int main() {
    double valores[10];
    double maior, soma = 0, media;
    int i;

   
    for (i = 0; i < 10; i++) {
        do {
            cout << "Digite o " << i + 1 << "º valor positivo: ";
            cin >> valores[i];
            if (valores[i] <= 0) {
                cout << "Erro: o valor deve ser positivo!\n";
            }
        } while (valores[i] <= 0);
    }

    maior = valores[0];

    for (i = 0; i < 10; i++) {
        soma += valores[i];
        if (valores[i] > maior)
            maior = valores[i];
    }

    media = soma / 10.0;

    cout << "\nMaior valor: " << maior << endl;
    cout << "Soma dos valores: " << soma << endl;
    cout << "Media aritmetica: " << media << endl;

    return 0;
}
