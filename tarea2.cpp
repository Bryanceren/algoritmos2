#include <iostream>

using namespace std;

struct nodo{
    int dato;
    nodo *sig;
}*inicio,*fin;

struct pila{
    int dato;
    pila *sig;
}*iniciop,*finp;

class Estructura{
    public:
        nodo* crearNodo(int valor){
            nodo *n=new nodo;
            n->dato=valor;
            n->sig=nullptr;
            return n;
        }

        pila* crearNodoPila(int valor){
            pila *n=new pila;
            n->dato=valor;
            n->sig=nullptr;
            return n;
        }

        void pushCola (int valor){
            nodo *n= crearNodo(valor);
            if(!inicio){
                inicio=n;
                fin=n;
            }else{
                fin->sig=n;
                fin=n;
            }
        }

        

        void mostrar(){
            nodo *temp=inicio;
            if(!inicio)
                cout<<"cola vacia"<<endl;
            else
                cout<<"Muestra de cola"<<endl;
                while(temp){
                    cout<<temp->dato<<endl;
                    temp=temp->sig;
                }
        }

        void mostrarPila(){
                pila *temp=iniciop;
                if(!iniciop)
                    cout<<"pila vacia"<<endl;
                else
                    cout<<"Muestra de pila"<<endl;
                    while(temp){
                        cout<<temp->dato<<endl;
                        temp=temp->sig;
                    }
            }

        void apilar(){
            nodo *temp=inicio;
            pila *final=finp;
            if(!inicio)
                cout<<"cola vacia"<<endl;
            else
            {
                 while(temp){
                    pila *n = crearNodoPila(temp->dato);
                    n->sig=iniciop;
                    iniciop = n;
                    temp=temp->sig;

                }
            }
            
        }

};



//Los datos se invierten automaticamente al sacarlos y meterlos a una pila ya que si intentamos hacerlo con
//la misma cola quedaria lo mismo.

int main()
{

Estructura nodito;

nodito.pushCola(1);
nodito.pushCola(2);
nodito.pushCola(3);
nodito.pushCola(4);
nodito.pushCola(5);


nodito.mostrar();
nodito.apilar();
nodito.mostrarPila();


} 