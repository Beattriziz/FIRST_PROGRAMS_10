#include <iostream>

int main()
{
    int p1, p2, p3, p4, media;
    std::cout << "Olá pessoas";

    std::cout << "Escreve um número:";
    std::cin >> p1;

    std::cout << "Escreve outro número:";
    std::cin >> p2;

    std::cout << "Outro número por favor." >;
    std::cin >> p3;

    std::cout << "Quarto número para eu conseguir finalizar o meu trabalho:";
    std::cin >> p4;

    media = (p1 + p2 + p3 + p4) / 4;
    std::cout << "O resultado do meu trabalho é: " << media << ".";


    return 0;
}