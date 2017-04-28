#include <iostream>

using namespace std;

//5 Ingresas un numero y te bota el texto del numero
int numero(int a){
	switch (a){
		case -1:
			return 0;
		case 1:
			cout << "Uno";
			return 0;
		case 2:
			cout << "Dos";
			return 0;
		case 3:
			cout << "Tres";
			return 0;
		case 4:
			cout << "Cuatro";
			return 0;
		case 5:
			cout << "Cinco";
			return 0;
		case 6:
			cout << "Seis";
			return 0;
		case 7:
			cout << "Siete";
			return 0;
		case 8:
			cout << "Ocho";
			return 0;
		case 9:
			cout << "Nueve";
			return 0;
		default:
			cout << "Numero no permitido";
			return 0;
}
}
int main()
{
    int a;
    cin >> a;
    numero(a);
    return 0;
}
