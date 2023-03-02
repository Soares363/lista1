#include <iostream>
using namespace std;

main(){
setlocale(LC_ALL, "portuguese");
    int numero,r,soma=0,temp;

    cout << ("Digite um número: ");
    cin >> numero;

    for(temp=numero;numero!=0;numero=numero/10){
        r=numero % 10;
        soma=soma+(r*r*r);
    }
    if(soma==temp)
        cout << "\n" << temp << " é um número de Armstrong";
    else
        cout << "\n" << temp << " não é um número de Armstrong";
}

