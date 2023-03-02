#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    float nota1, nota2, 
          media, tempo;

    cout << "Insisra sua idade: ";
    cin >> nota1;

    cout << "Quantos cigarros você fuma por dia: ";
    cin >> nota2;
    


    media = (nota2*10)/60/24;
    
    tempo = (nota1 * 365) * media;
    
    cout << "Tempo perdido de vida: " << tempo << " dias";
    
     
}
