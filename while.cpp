#include <iostream>

using namespace std;

int main(){

    /*int n;

    n=0;
    while (n<10)
    {
        cout << n << "\n";
        //n++;
        cin >> n;
    }*/

    int cont;

    cont = 0;
    while (cont++<20)
    {
        cout << "Rotina - " << cont << "\n";
        if (cont == 10)
        {
            break;
        }
        
    }
    
    
    cout << "\nRotina finalizada\n";

    return 0;
}