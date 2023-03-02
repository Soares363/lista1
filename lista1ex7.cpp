#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string name;
	float salario, nsalario, diferenca;
	
	cout << "Insira seu nome:";
	cin >> name;
	
	cout << "insira seu salario atual:";
	cin >> salario;
	
	if (salario <= 1500){
		
		nsalario = salario * 1.10;
		
		diferenca = (nsalario - salario);
		
		cout << "\nSeu novo salario é de: " << nsalario ;
		cout << "\nO aumento foi de: " << diferenca ;
		
	}else if (salario > 1500 ){
		nsalario = salario * 1.05;
		
		diferenca = (nsalario - salario);
		
		cout << "\nSeu novo salario é de: " << nsalario ;
		cout << "\nO aumento foi de: " << diferenca ;
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
