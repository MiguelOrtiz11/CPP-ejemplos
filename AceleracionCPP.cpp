#include<iostream>
using namespace std;
int main(){
	float velocidadinicial;
	float velocidadfinal;
	float tiempo;
	float a;
	string mensaje = "la aceleracion es: ";
	cout<<"digite velocidad inicial: "; cin>>velocidadinicial;
	cout<<"digite velocidad final: "; cin>>velocidadfinal;
	cout<<"digite el tiempo: "; cin>>tiempo;
	cout<<mensaje<<(velocidadfinal-velocidadinicial)/tiempo; cin>> a;
	return 0;
	
	
}
