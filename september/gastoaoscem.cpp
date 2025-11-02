#include <iostream>

int main()
{
    int kmf, kmi, GasolinaG, gastoaoscem;
    std::cout << "Dê-me os quilometros que a sua viagem terminou";
    std::cin >> kmf;
    std::cout << "Dê-me os quilometros que a sua viagem começou";
    std::cin >> kmi;
    std::cout << "Escreva quantos litros de gasolina gastou";
    std::cin >> GasolinaG;
    gastoaoscem = (kmf - kmi) * 100 / GasolinaG;
    std::cout << "A cada 100km gastas" << gastoaoscem;

    return 0;
}