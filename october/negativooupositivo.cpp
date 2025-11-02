#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num = 9;
	while (num != 0)
	{
		cout << "Dá-me um número \n";
		cin >> num;
		if (num > 0)
		{
			cout << "O teu número é positivo! \n";
		}
		else
		{
			cout << "O teu número é negativo.. \n";
		}

	}
	cout << "Escreves-te 0, kys.";


}