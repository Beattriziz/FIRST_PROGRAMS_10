#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, menor = 2147483647, maior = 0;
	do
	{
		cout << "Diz-me um número:\n";
		cin >> num;
		if (num < menor && num != 0);
		{
			menor = num;
		}
		if (num > maior)
		{
			maior = num;
		}

	} while (num != 0);
	cout << "\nO número menor é\n" << menor;
	cout << "\nO número maior é\n" << maior;
	cout << "\nEscolheste 0. Kys.\n";
	return 0;
}