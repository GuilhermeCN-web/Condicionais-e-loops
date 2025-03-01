#include <iostream>

using namespace std;

int main(){

    /*cout << "Selecione uma cor:\n";
    cout << "[1]=verde, [2]=Azul, [3]=vermelho\n";

    cin >> val;

    switch (val)
    {
    case 1:
        cout << "Cor selecionada: Verde\n";
        break;
    case 2:
        cout << "Cor selecionada: Azul\n";
        break;
    case 3:
        cout << "Cor selecionada: Vermelho\n";
        break;
    default:
        cout << "Valor inválido\n";
        break;
    }*/

    int val;

    cout << "Selecione uma cor:\n";
    cout << "[1,2,3]=verde, [4,5,6]=Azul, [7,8,9]=vermelho\n";

    cin >> val;

    switch (val)
    {
    case 1:
    case 2:
    case 3:
        cout << "Cor selecionada: Verde\n";
        break;
    case 4:
    case 5:
    case 6:
        cout << "Cor selecionada: Azul\n";
        break;
    case 7:
    case 8:
    case 9:
        cout << "Cor selecionada: Vermelho\n";
        break;
    default:
    cout << "Valor inválido\n";
        break;
    }

    return 0;
}