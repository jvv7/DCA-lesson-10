#include <iostream>

using namespace std;

class Calculadora{
	
	public:
	
	int mostrarSuma( int a, int b )
	{
		return (a + b);
	}

	int mostrarResta( int a, int b )
	{
		return(a - b);
	}

	int mostrarProducto( int a, int b )
	{
		return(a * b);
	}

	int mostrarDivision( int a, int b )
	{
		return (a/b);
	}
};

int main()
{
	Calculadora a;
	
	int b = a.mostrarSuma(1,1);
	cout << b << endl;
	
	int c = a.mostrarResta(1,1);
	cout << c << endl;
	
	return 0;
}
