#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int notasturma[10][10], i, j, resposta, soma[10], notamaior=0;
	float media;
	string alunos[10] = { "Fernando", "Beatriz", "Mateus", "Carlos", "Cauã", "José Cacelas", "Joaquim", "Clara", "Gil", "Afonso ES" };
	string disciplinas[10] = { "TLP", "Matemática", "Fisica", "Quimica", "Inglês", "AI", "Educação fisica", "ACSO", "Português", "Filosofia" };
	for (i = 0; i < 10; i++)
	{
		cout << disciplinas[i]<<"\n";
		cout << "Dá-me a nota do aluno/a " << alunos[i] << "\n";
		for (j = 0; j < 10; j++)
		{
			cin >> notasturma[i][j];
		}
	}
	system("cls");
	cout << "-----MENU-----";
	Sleep(2000);
	cout << "\nObrigada. Agora, queres:\n 1- Calcular a média das notas por alunos\n 2- Média das notas na disciplina\n 3- A melhor nota de todas\n 0- Sair\n ";
	cin >> resposta;
	do {
		if (resposta == 1)
		{
			for (i = 0; i < 10; i++)
			{
				soma[i] = notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j];
				media = soma[i] / 10;
				cout << "A média da nota do aluno " << i + 1 << " é " << media << "\n";
			}
		}
		if (resposta == 2) 
		{
			for (i = 0; i < 10; i++) 
			{
				soma[i] = notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j] + notasturma[i][j];
			media = soma[i] / 10;
			cout << "A média de " <<disciplinas[i]<<" é: " << media << "\n";
			}
		}
		if (resposta == 3) 
		{
			for (i = 0; i < 10; i++) 
			{
				if (notasturma[i+1]<notasturma[i]) 
				{
					notamaior = notasturma[i+1];
					notasturma[i + 1] = notasturma[i];
					notasturma[i] = notamaior;
 
			    }
			}
			cout << "A maior nota foi do/a aluno/a: " << alunos[i] << " com a nota: " << notamaior;
		}
	} while (resposta != 0);
	return 0;
}