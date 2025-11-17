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
	int codigosecreto[4] = {}, adivinha[4] = {}, digitosacertados = 0, i;
	for (int i = 0; i < 4; i++)
	{
		codigosecreto[i] = rand() % 2;
		cout << codigosecreto[i];
	}
	do
	{
		cout << "Dá-me um código de 4 números entre 0 e 1 (Com espaços please)";
		for (i = 0; i < 4; i++) 
		{
			cin >> adivinha[i];
			if (adivinha[i] == codigosecreto[i])
			{
				digitosacertados++;
			}
		}
		cout << "Acertaste " << digitosacertados << " digitos";
	} while (adivinha[i] = codigosecreto[i]);
		return 0;
}