   #include <iostream>
   using namespace std;
   
   int main()
   {
   	char opcao;
   	do{
		   int n;
		   do{
		   	cout << "digite a quantidade de valores(positivo , menor que 20):";
		   	cin >> n;
		   	
		   } while ( n <= 0 || n >= 20);
		   int valores[n];
		   int maior, menor , soma = 0 ,positivos = 0 , negativos = 0;
		   double media;
		   
		   for (int i = 0; i < n; i++) { 
			   cout << "digite o " <<i + 1 << " valor: ";
			   cin >> valores[i];
			   
			   if (i == 0){
				   maior = menor = valores[i];
				   
			   }
			   if( valores[i] > maior) maior = valores[i];


		    if ( valores[i] > maior) maior = valores[i];
            if (valores[i] < menor) menor = valores[i];

            soma += valores[i];

            if (valores[i] >= 0) positivos++;
            else negativos++;
        }

        media = soma / (double)n;

        cout << "Maior valor: " << maior << endl;
        cout << "Menor valor: " << menor << endl;
        cout << "Soma dos valores: " << soma << endl;
        cout << "Media aritmetica: " << media << endl;
        cout << "Porcentagem de positivos: " << (positivos * 100.0 / n) << "%" << endl;
        cout << "Porcentagem de negativos: " << (negativos * 100.0 / n) << "%" << endl;

        cout << "Deseja executar novamente? (S/N): ";
        cin >> opcao;
        opcao = toupper(opcao);

    } while (opcao == 'S');

    return 0;
}