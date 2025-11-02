#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	string disciplinas[9] = { "ACSO", "Matemática", "EDF", "TIC", "Português", "AI", "FQ", "TLP", "Inglês" };
	string stores[9] = { "João", "Clarinda", "Pedro", "Clara", "Florbela", "Vera", "Inês", "Clara", "Margarida" };
	int num;
	char sair = "n";
	do
	{
		cout << "Escolhe um número, e eu digo-te a disciplina e o professor que a dá\n";
		cin >> num;
		if (num < 0 || num > 4)
		{
			cout << "Queres ter mais matérias do que isto? Masoquista.\n";
		}
		else if (num > 0 || num < 8)
		{
			cout << "A disciplina é " << disciplinas[num] << " e o professor é " << stores[num] << endl;
		}
		cout << "Deseja sair?(s/n)\n";
	} while (sair = "n");
	return 0;
}