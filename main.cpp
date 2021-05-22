#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    long long int coluna, cont = 0;
    double soma = 0, numero;
    string teste;
    cin >> coluna;
    cin >> teste;
    while (cont < 144){
        cin >> numero;
        if (cont == coluna){
            soma = soma + numero;
            coluna = coluna + 12;
        }
        cont++;
    }
    if (teste[0] == 'S'){
        cout << soma <<endl;
    }else{
        numero = soma / 12;
        cout.precision(1);
        cout << fixed << numero <<endl;
    }
    return 0;
}
