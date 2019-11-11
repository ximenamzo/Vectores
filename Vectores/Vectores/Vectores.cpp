#include <iostream>
#include <string>

using namespace std;

int main()
{
	float vector1[3];
	float vector2[3];
	float vectorsuma[3];
	int i;
	//Pedimos los datos del primer vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introduce el valor " << i << " del primer vector: ";
		cin >> vector1[i];
	}
	//Pedimos los datos del segundp vector
	for (i = 0; i < 3; i++)
	{
		cout << "Introduce el valor " << i << " del segundo vector: ";
		cin >> vector2[i];
	}
	//Calculamos la suma
	for (i = 0; i < 3; i++)
	{
		vectorsuma[i] = vector1[i] + vector2[i];
	}
	//Mostramos el resultado
	cout << "El vector suma es:";

	for (i = 0; i < 3; i++)
	{
		cout << vectorsuma[i] << "  ";
	}
	return 0;
}