  #include <iostream>
  using namespace std;
   int main()
   {
   	int x, a, b;
   	do { 
		   cout << " digite o valor positivo para a tabuada: ";
		   cin >> x;

	   } while ( x <=0);
	   
	   cout << " digite o valor inicial do intervalo (a): ";
	   cin >> a;
	   do {
		   cout << " digite o valor final do intervalo ( b, maior que a ): ";
		   cin >> b;
	   } while ( b <= a);
	   
	   cout << " tabuada de " << x << " do " << a << " ate "<< b << " : " << endl;
	   for  ( int i =a ; i<= b; i++){
	   	cout << x << " x " << i<< " = "  << x * i << endl;
	   } 
	   return 0;
	   
	   
	   	 
	   
   }