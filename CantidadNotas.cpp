#include <iostream>
using namespace std;
main(){

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
	
	
	
	system("pause");
	return 0;
}






