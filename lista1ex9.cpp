#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL, "portuguese");
    int numero,r,soma=0,temp;

    cout << ("Digite um n�mero: ");
    cin >> numero;

    for(temp=numero;numero!=0;numero=numero/10){
        r=numero % 10;
        soma=soma+(r*r*r);
    }
    if(soma==temp)
        cout << "\n" << temp << " � um n�mero de Armstrong";
    else
        cout << "\n" << temp << " n�o � um n�mero de Armstrong";
}

