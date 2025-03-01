#include <iostream>

using namespace std;

int main(){

    /*int n1,n2,nota;
    string res;

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;
    nota=n1+n2;*/

    //(nota >= 60) ? res="Aprovado" : res="Reprovado";
    //res=(nota >= 60) ? "Aprovado" : "Reprovado";

    int n1,x;

    x=5;

    cout << "Digite um valor: ";
    cin >> n1;

    (n1 >= 10) ? x++ : x--;

    cout << "\nValor do X: " << n1 << "\n";
    

    return 0;
}