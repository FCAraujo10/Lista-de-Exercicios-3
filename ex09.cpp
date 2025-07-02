  #include <iostream>
  using namespace std;
  
  int main()
  {
  	int a =0, b = 1, c;
  	cout << a << " " << b << " ";
  	for ( int i = 3; i <= 30; i++){
		  c = a + b;
		  cout << c << " ";
		  a = b;
		  b = c;
		  
	  }
	   cout << endl;
	   return 0;
	   
	  }
	    