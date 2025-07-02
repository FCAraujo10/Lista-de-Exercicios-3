   #include <iostream>
   using namespace std;
   
   int main()
   {
   	char sexo;
   	do { 
		   cout << "digite o sexo ( F ou M ): ";
		    cin >> sexo;
		    sexo = toupper(sexo);
		    
	   } while ( sexo !='F' && sexo !='M');
	   cout << "sexo permitido: " << sexo << endl;
	   
	   return 0;
   }