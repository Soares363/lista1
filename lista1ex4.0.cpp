#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	int n1;
	string name;
	
	cout << "Insira qual é o seu nome:";
	cin >> name;
	
	cout << "Informe sua idade:";
	cin >> n1;
	
	if (n1 < 18){
		cout <<name << ", você é menor de idade";
	}else{
		cout <<name << ", você é maior de idade";
	}if (n1 > 65){
		cout << ", e é uma pessoa idosa";
	}
	
	
}
