/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
 
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int contador=0, alturamax=-1, N, altura[110], i;
	//altura fica a 110 porque o máximo é 100, ent é seguro
	//alturamax começa em -1 para que a primeira altura seja lida
	cin>>N;
	for (i=0; i<N; i++)
	{
	    cin>>altura[i];
	}
	for(int i=0; i<N; i++)
	{
	    if(altura[i]>alturamax)
	    {
	        contador++; //quando encontrar um novo número máximo, vai aumentar
	        alturamax=altura[i]; //guarda a maior altura conhecida
	    }
	}
	cout<<contador<<endl;

	return 0;
}