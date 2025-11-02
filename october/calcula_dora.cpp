#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num1, num2, numescolha;
	cout << "Olá ser humano burro. Desejas fazer uma conta de soma, subtração, multiplicação ou divisão (1-4)";
	cin >> numescolha;
	numescolha = numescolha - 1;
	cout << "Dá-me o primeiro número";
	cin >> num1;
	cout << "Dá-me o segundo número";
	cin >> num2;
	if (numescolha < 1)
	{
		cout << "A tua soma é igual a" << num1 + num2;
	}
	else if (numescolha < 2)
	{
		cout << "A tua subtração é igual a" << num1 - num2;
	}
	else if (numescolha < 3)
	{
		cout << "A tua multiplicação é igual a" << num1 * num2;
	}
	else if (numescolha < 4)
	{
		cout << "A tua divisão é igual a" << num1 + num2;
	}
	else
	{
		cout << "Não te faço mais contas matemáticas meu ganda burro, queres saber os cálculos aprende a fazê-los";
	}
	return 0;
}