#include <iostream>
using namespace std;
int main(){
	
	float nota1, nota2, nota3, nota4, promedio;
	
	
	cout<<"Digite la primera nota: "; cin>>nota1;
	cout<<"Digite la segunda nota: "; cin>>nota2;
	cout<<"Digite la tercera nota: "; cin>>nota3;
	cout<<"Digite la cuarta nota: "; cin>>nota4;
	
    promedio = (nota1 + nota2 + nota3 + nota4)/4;
    
    cout<<promedio<<endl;
    
    if(promedio < 3){
    	cout<<"no aprobado";
	}
	else{
		if(promedio > 3 & promedio < 3.5){
			cout<<"En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar.";
		}
	}if(promedio > 3.5 & promedio < 5){
	    cout<<"Aprobado";
		}
	
    
    
	
	return 0;
	//Autor: Miguel Angel Orti Escobar :D
}
