#include<iostream>

#include<conio.h>

using namespace std;

int main(){

int i;

   int opcion[2]; // obligatorio

  do {  

     int i= 0;
	int cantidad = 0;
	float promedio = 0;
	float cont = 0;
    float suma = 0;
	float nota = 0;
	
	cout<<"Digite la cantidad de notas: "; cin>>cantidad;
	
    for (i=1;i<=cantidad;i++) {
    cout << "Ingrese La Nota " << i << endl;
    cin >> nota;
	
	 

	 
	if(nota > 0.0 && nota < 5.0){
		cont = cont + 1;
		suma = suma+nota;
		promedio = suma/cont;
		
		 
    }
	}
	
	cout<<"El promedio es: "<<promedio<<endl;
       

       printf(" \n calcular mas notas de estudiantes?");

         scanf("%s", opcion);

   }    while (opcion[0] == '1' || opcion[0] == '1');

       

 

 

return 0;

}













