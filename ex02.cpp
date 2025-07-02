    #include <iostream>
    using namespace std;
    
    int main()
    {
		int a,b;
		cout << "digite o primeiro valor: ";
		cin >> a;
		
		do {
			cout << "digite um valor maior que " << a << ": ";
			cin >> b;
			
		} while ( b <= a);
		cout << "valores aceitos:" << a << " e " << b << endl;
		
		return 0;
		
		
	}
	