#include <iostream>

using namespace std;

	float soma (float a, float b){
		return a + b;
	}
	
	float subt (float a, float b){
		return a - b;
	}
	
	float mult (float a, float b){
		return a * b;
	}
	
	float divis (float a, float b){
		return a / b;
	}
	
	
main(){
		setlocale(LC_ALL, "Portuguese");
		float numero, numero2;
		int op;

	do{
	
		
	cout << "Informe o primeiro numero:";
	cin >> numero;
	
	cout << "\ninforme o segundo numero:";
	cin >> numero2;
	
	
		cout << "Selecione uma opção:\n";
		cout << "1 - Adição\n";
		cout << "2- Subtração\n";
		cout << "3- Multiplicação\n";
		cout << "4- Divisão\n";
		cout << "5- sair do programa...\n";
		cin >> op; 
	
	
	
	
	
		switch (op){
		case 1:
			cout << "Resultado da adição:" << numero<< " + " << numero2<< " = ";
			cout << soma(numero, numero2) <<"\n\n";
			break;
		case 2:
			cout << "Resultado da subtração:" << numero<< " - " << numero2<< " = ";
			cout << subt(numero, numero2) <<"\n\n";
			break;
		case 3: 
			cout << "Resultado da multilicação: " << numero<< " X " << numero2<< " = ";
			cout << mult(numero, numero2)<<"\n\n";
			break;
		case 4: 
			cout << "Divisão " << numero<< " / " << numero2<< " = ";
			cout << divis(numero, numero2)<< "\n\n";
			break;
		case 5:
			cout << "Sair do programa";
			break;
		}
		}while (op !=5);

}
		

