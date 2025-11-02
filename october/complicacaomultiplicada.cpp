#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	do
	{

		cout << "Diz-me um número e irei dizer-te se é múltiplo de 3 ou de 5, ou de ambos! \n";
		cin >> num;
		if (num % 3 == 0 && num % 5 == 0)
		{
			cout << "O número que escolheste é múltiplo de 3 e de 5 \n";
		}
		if (num % 3 != 0 && num % 5 != 0)
		{
			cout << "Não é múltiplo de nenhum \n";
		}
		if (num % 3 == 0 && num % 5 != 0)
		{
			cout << "O número é múltiplo de 3, mas não múltiplo de 5 \n";
		}
		if (num % 3 != 0 && num % 5 == 0)
		{
			cout << "O número é múltiplo de 5, mas não de 3 \n";
		}

	} while (num != 0);
	cout << "Escolheste o número 0. GET OUT. \n";
}