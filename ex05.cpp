  #include <iostream>
  using namespace std;
  
  int main()
  {
  	int valor;
  	do {
		  cout << " digite um valor positivo para ver sua tabuada: ";
		  cin >> valor;
		  
	  } while ( valor <=0);
	  
	  cout << " tabuada de  " << valor << ":" << endl;
	  for ( int i = 1; i <=10; i ++){
		  cout << valor << " x " << i << " = " << valor * i << endl;
		  
	  }
	  return 0;
  }
  