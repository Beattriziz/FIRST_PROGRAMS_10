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
	int adivinha, quantos = 0;
	int randomNum = (rand() % 99) + 1;
	do {
		cout << "Dá-me um número:";
		cin >> adivinha;
		if (randomNum > adivinha)
		{
			cout << "O número é maior\n";
			quantos = quantos + 1;
		}
		else if (randomNum < adivinha)
		{
			cout << "O número é inferior\n";
			quantos = quantos + 1;
		}

	} while (randomNum != adivinha);
	cout << "O número é igual\n";
	if (quantos <= 5)
	{
		cout << "\33[95mÉs um god. OMFG!!!\n";
	}
	else if (quantos <= 10)
	{
		cout << "\33[92mParabéns";
	}
	else
	{
		cout << "\33[93mLoser de merda. Botik\n";
	}

	return 0;
}