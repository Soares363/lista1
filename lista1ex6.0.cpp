#include <iostream>  
using namespace std;  


int main(){  

setlocale(LC_ALL, "Portuguese");

int n,sum=0,m;    
cout<<"Insira um numero inteiro qualquer: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
cout<<"A soma de seus digitos é:"<<sum<<endl;
system("pause");    
return 0;  

} 
