#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	do {
		cout << "Say a number \n";
		cin >> num;
		if (num % 2 == 0)
		{
			cout << "Your number it's even! \n";
		}
		else
		{
			cout << "Your number it's odd... \n";
		}
	} while (num != 0);
	cout << "I hate 0. Give alt+f4";
}