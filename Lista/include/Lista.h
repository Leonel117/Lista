#include "Nodo.h"

class Lista {
public:
   //Atributos
	Nodo* H;
	Nodo* T;	
   //Constructores
	Lista();
	Lista(int Dato);
	bool IsVacio();
	void InsertarP(int Dato);
	void InsertarF(int Dato);
	void InsertarRef(int Dato, int Ref);
	int BorrarInicio();
	int BorrarFinal();
	Nodo * BorrarRef(int Ref);
	Nodo* Buscar(int Dato);
	void MostrarLista();
}