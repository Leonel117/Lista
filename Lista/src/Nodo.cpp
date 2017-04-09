#include "Nodo.h"

Nodo::Nodo(int Dato , Nodo* Sig){ //Se extrae un nodo de la clase nodo con una variable dato y 
	this->Dato = Dato;             //un apuntador a un siguiente nodo
	this->Sig = Sig;
}

Nodo::Nodo(int Dato) {    
	this->Dato = Dato;
	this->Sig = NULL;
}

void Nodo::setDato(int Dato) {
	this->Dato = Dato;
}

void Nodo::setSig(Nodo* Sig) {
	this->Sig = Sig;
}

int Nodo::getDato(){
	return this->Dato;
}

Nodo* Nodo::getSig(){
	return this->Sig;
}