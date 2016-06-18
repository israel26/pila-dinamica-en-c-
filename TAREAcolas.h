// israel lopez perez
//0907-13-9893............
#include <iostream>
#include <conio.h>
 using namespace std;
struct cola {
 char caracter[25];
 cola *siguiente;
 }*inicio,*aux,*ultimo;
 
 void push ()// metodo insertar
{
aux=new(cola);
cout<<"\nIngrese un caracter: ";
 cin>>aux->caracter;
aux->caracter;
if(ultimo)
{
ultimo->siguiente=aux;
aux->siguiente=NULL;
ultimo=aux;
}
else
{
inicio=ultimo=aux;
}
}
void pop()//funcion sacar y atender de la cola
{
if(inicio)
{
aux=inicio;
cout<<"\ndato Elimino: " <<inicio->caracter;//muestra el dato atendido
inicio=aux->siguiente;
delete(aux); // funcion que elimina el dato atendido
}
else
{
cout<<"\n No hay datos";
}
}
 
void top()
{
int i=0;
if(!ultimo)//verificamos si hay datos ingresados
{
cout<<"\n No hay datos en la cola";
return;
}
aux=inicio;
while(aux)
{
cout<<"\n"<<++i<<" - "<<aux->caracter;
aux=aux->siguiente;
}
}
void menucolas(){
	int opc;
for(;;){
system("cls");
 cout <<".........FIFO...primero dato en entrar primero dato  en salir.........."<<endl; 
cout<<"\t1. Insertar"<<endl;
cout<<"\t2. Borrar"<<endl;
cout<<"\t3. Listar"<<endl;
cout<<"\t4. Salir"<<endl;
cout<<"\n Ingrese opcion: ";cin>>opc;
switch(opc)
{
case 1: 
 push();
 cout<<"\nDato insertado!!";
 break;
case 2: pop();
 break;
case 3: top(); break;
case 4: exit(1);
default: cout<<"\n Opcion no valida!!"; 
break;
}
top();
cout<<"\nOprima una tecla para continuar";
getch();
}//while(opc);

}
