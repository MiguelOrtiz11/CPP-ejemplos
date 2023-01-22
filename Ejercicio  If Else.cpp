#include <iostream>
using namespace std;
int main(){
	int edad = 0;
	cout<<"Digite la edad de su hijo: "; cin>>edad;
	
	if(edad < 6){
		cout<<"el niño pertenece al grupo de la primera infancia";
	}else
	if(edad > 6 & edad < 12){
		cout<<"el niño pertenece al grupo de la segunda infancia";
	}else
	if(edad > 12 & edad < 18){
		cout<<"el niño pertenece al grupo de adolecentes";
	}	
	
	return 0;
	
}

