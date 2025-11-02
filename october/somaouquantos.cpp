#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	string num[10] = {};
	int n, quantos = 0, i, r;
	float soma = 0;
	for (int i = 0; num < 10; i++)
	{
		cout << "Dá-me 10 números, e dar-te-ei uma surpresa";
		cin >> num;
	}
	if (num < 0)
	{
		soma = soma + n;
		quantos = quantos + 1;
	}
	cout << "Queres a soma dos números negativos(1), ou queres saber quantos números colocaste?(2)";
	if (r == 1)
	{
		cout << "A soma dos números negativos é:" << soma;
	}
	else if (r == 2)
	{
		cout << "Tens" << quantos << "numeros negativos";
	}
	else
	{
		cout << "Boi achatado, só consegues escolher entre a e b. Tenta de novo.";
		cout << "a ou b?";
	}
	return 0;
}