  #include <iostream>
  using namespace std;
  
  int main()
  {
  	int valor;
  	do{
		  cout << "digite um valor positivo:";
		  cin >> valor;
		  
	  } while (valor <=0);
	  cout << "valor aceito: " << valor << endl;
	  
	  return 0;
	  
	  
  }
  