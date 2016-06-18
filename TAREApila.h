/*
 * Lista.h
 *
 *  Created on: 7/05/2016
 *      Author: lopez
 */

#include <iostream>
#include <conio.h>
using namespace std;

struct pila{
	int dato;
	char nombre[25];
	pila *siguiente;
};
pila * inicio=NULL;
pila * aux=NULL;
void push ()
{
 if(inicio==NULL){
 }
 aux= new (pila);
 cout<<"Ingrese un caraster: ";
 cin>>aux->nombre;
 aux->siguiente=inicio;
 inicio=aux;
}

void pop(void)
{
 if(inicio==NULL)
 {
 cout<<"\n!!No hay elementos!!";
 return;
 }
 aux=new(pila);
 aux=inicio;
 cout<<"\nElemento eliminado: "<<
 aux->nombre<<endl;
 inicio=aux->siguiente;
 delete(aux);
}
void actualizar_pila(void)
{
 int i,ca=0;
 aux=inicio;
 while(aux==NULL)
 {
 ca++;
 aux=aux->siguiente;
 }
 
for(i=0;i<=ca;i++)
 {cout <<"\n   [NULL]";
 }
 i=0;
 aux=inicio;
 while(aux!=NULL)//si el datos siguiente aux no esta vacio lo imprimimos
 {
 cout<<"\n";
 cout<<++i<<" - "<<aux->nombre;//muestra los datos ingresados a pila !!
 aux=aux->siguiente;
 }
 cout <<"\n   [PILA]";
}
void menu(){
	int opc;
for(;;){
	 system ("cls");
cout <<".......LIFO (el ultimo dato en entrar, es el primero en salir )"<<endl;
 cout<<"1. Ingresar datos"<<endl;
 cout<<"2. eliminar datos"<<endl;
 cout <<"3. actualizar_pila"<<endl;
 cout <<"4. mostrar todo"<<endl;
 cout<<"0. Terminar"<<endl;
 cout<<"\nIngrese opcion: ";
 cin>>opc;
 switch(opc)
 {
 case 1: push();
 break;
 case 2: pop();
 break;
 case 3: actualizar_pila();
 break;
 case 0: 
 exit(1);
 default: cout<<"\n Opcion no valida!!"; break;
 }
actualizar_pila();
cout<<"\nOprima una tecla para continuar";
getch();
}
}
///////////////////////////////////////////////

