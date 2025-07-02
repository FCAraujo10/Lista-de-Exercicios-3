  #include <iostream>
  using namespace std;
  
  int main()
  {
  int M;
  do {
    cout << "digite a quantidade de valores ( positivo , menor que 20):";
    cin >> M;
    } while ( M <= 0 || M >=20);
    
     int valores[M];
     int maior, menor , soma = 0, positivos = 0, negativos =0;
     double media;
     
     for ( int i = 0; i < M; i++) {
    
    cout << "digite o " << i + 1 << " valor: ";
    cin >> valores [i];
    
    if ( i == 0){
		maior = menor = valores [i];
	}
	
	if ( valores[i] > maior) maior = valores[i];
    if ( valores[i] < menor) menor = valores[i];
    
    soma += valores[i];

if ( valores[i] >= 0) positivos++;
   else negativos++;
	 }
   
   media = soma /( double) M;
   
   cout << " maior valor: " << maior << endl;
   cout << " menor valor: " << menor << endl;
   cout << "soma dos valor: " << soma << endl;
   cout << " media aritimetica: " << media << endl;
   cout << " porcentagem de positivos: " << ( positivos * 100.0 / M ) << "%" << endl;
   cout << " porcentagem de negativos: " << ( negativos * 100.0 / M ) << "%" << endl;
 
	
  
  return 0;
  }