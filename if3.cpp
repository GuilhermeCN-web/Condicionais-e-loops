#include <iostream>

using namespace std;

int main(){


    int num;

    num=7;

    if ( (num >= 3 && num <= 6) || (num > 9 && num < 15) || (num > 15 && num < 20))
    {
        cout << "\n\nValor aceito\n";
    }else{
        cout <<"\n\nNão aceito\n";
    }
    
    return 0;
}