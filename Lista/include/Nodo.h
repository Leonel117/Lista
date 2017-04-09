#include <iostream>

class Nodo {
   public:
      //Atributos
   	int Dato;
   	Nodo* Sig;
      //Constructores
   	Nodo(int Dato, Nodo* Sig);
   	Nodo(int Dato);
   	void setDato(int Dato);
   	void setSig(Nodo* Sig);
   	int getDato();
   	Nodo* getSig();
}