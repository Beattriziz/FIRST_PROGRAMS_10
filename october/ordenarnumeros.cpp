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
	int troca = 0, i, aux, f;
	int num[10] = { 15, 7, 54, 12, 1, 2, 5, 23, 14, 4 };
	do
	{
		for (i = 0; i < 9; ++i)
		{
			troca = 0;
			if (num[i + 1] < num[i])
			{
				aux = num[i + 1];
				num[i + 1] = num[i];
				num[i] = aux;
				for (i = 0; i < 10; i++)
				{
					cout << num[i] << " ";
				}
				troca++;
			}
		}
	} while (troca > 0);
	for (f = 0; f < 10; f++)
	{
		cout << "\nOs números ordenados são:\n";
		cout << num[f] << "\n";
	}
	return 0;
}