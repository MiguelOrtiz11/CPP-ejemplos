//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
#include <iostream>
using namespace std;
//lo usamos cuando vamos a ejecutar una serie de acciones 
int main()
{
//nos indica que es un entero (int)
int a, b;
//nos pide ingresar un numero entero
cout << "Ingresa el primer numero"<<endl;
//nos dice que el valor entero va ser igual a "a"
cin >> a;
//nos pide ingresar el segundo numero entero
cout << "Ingresa el segundo numero"<<endl;
//nos dice que el segundo numero ingresado es igual a "b"
cin >> b;
//teniendo los valores de a y b, se aplican operaciones basicas
//como suma, resta, multiplicacion, division y el residuo
cout <<"La suma de los numeros es: "<< a+b <<endl;
cout <<"La resta de los numeros es: "<< a-b <<endl;
cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
cout <<"La division de los numeros es: "<< a/b <<endl;
cout <<"El residuo es: "<< a%b <<endl;
//quiere decir que espera a que el usuario presione alguna tecla
//para seguir la ejecucion
system("pause");
//acaba la sentencia int main()
return 0;
}

