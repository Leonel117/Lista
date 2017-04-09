#include "Lista.h"
Lista::Lista(){ //Se extrae una lista de la clase lista y los apuntadores del inicio de la lista y final de la lista
                //(H y T respectivamente) apuntan a NULL
	this->H=NULL;
	this->T=NULL;
}

Lista::Lista(int Dato){          //Se extrae lista con una variable dato,H y T apuntan a una variable auxiliar
	Nodo * aux= new Nodo(Dato);   //que nos ayudará en los métodos de la lista
	this->H=aux;
	this->T=aux;
}
//Métodos
bool Lista::IsVacio(){                       //Con un  método booleano validamos si existe o no la lista
	if (this->H == NULL && this->T == NULL)
		return true;
	return false;
}
void Lista::InsertarP(int Dato){          //Se extrae la función insertar al principio de la lista de la clase lista
	Nodo* aux = new Nodo(Dato,this->H);    //Con ayuda de un auxiliar buscamos la posición de H y T para saber dónde
	if (IsVacio()){                        //Se encuentran ubicadas estas referencias dentro de la lista
		this->T= aux;
	}
	this->H= aux;
}

void Lista::InsertarF(int Dato){  //Se extrae la función insertar al final de la clase lista
	Nodo * aux = new Nodo(Dato);   //Con ayuda de un auxiliar buscamos la posición de H y T para saber dónde
	if (!IsVacio()){               //Se encuentran ubicadas estas referencias dentro de la lista
		T->setSig(aux);
		T=aux;		
	}
	else{
		this->H=aux;
		this->T=aux;
	}		
}
 
void Lista::InsertarRef(int Dato, int Ref){ //Se extrae la función insertar al final de la clase lista
	if (IsVacio()){                          //Nos apoyamos de un nodo auxiliar para validar los diferentes
		Nodo * aux = new Nodo(Dato);          //Casos que se pueden presentar con las referencias H y T
		this->H =aux;                         //Al momento de buscar un valor dentro de la lista
		this->T =this->H;
		std::cout<<"Lista vacia"<<std::endl;
		return ;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	if (aux!=NULL)
	{
		Nodo * aux2 = new Nodo(Dato,aux->getSig());
		aux->setSig(aux2);
	}
	else{
		std::cout<<"No se encontró la referencia"<<std::endl;
	}
}

int Lista::BorrarP(){                  //Se extrae método para Borrar el nodo que se encuentra al inicio de la lista
	if (!IsVacio()){                    //y se validan los que se pueden presentar al momento de eliminar el nodo
		int Dato =this->H->getDato();	
	if (this->H==NULL){
		this->T=NULL;
	}
	this->H=this->H->getSig();
	return Dato;
	}
	else{
		std::cout<<"La lista esta vacia"<<std::endl;		
	}	
}

int Lista::BorrarF(){         //Se obtiene el método borrar al final de la clase lista 
	if (IsVacio()){
		std::cout<<"La lista esta vacia"<<std::endl;
	}
	int Dato =T->getDato();
	if (this->H!=this->T){
		Nodo * aux = this->H;
		while(aux->getSig()!=this->T){
			aux = aux->getSig();
	}
		this->T=aux;
		this->T->setSig(NULL);
	}
	else{
		this->H=NULL;
		this->T=NULL;
	}
	return Dato;
}

Nodo * Lista::Buscar(int Dato){                          //Método para buscar un nodo dentro de la lista
	if (IsVacio()){
		std::cout<<"El dato no se encuentra"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	while(aux->getDato()!=Dato&&aux!=NULL){
		aux=aux->getSig();				
	   if (aux==NULL){
			std::cout<<"El dato no se encuentra"<<std::endl;
			return NULL;
	   }
	}
	if (aux->getDato()==Dato)
	{
		std::cout<<aux->getDato()<<"Se encontró dato"<<std::endl;	
	}
	return aux;
}

Nodo * Lista::BorrarRef(int Ref){            //Método para eliminar un nodo de la lista por medio de una referencia
	if (IsVacio()){   
		std::cout<<"Lista vacia"<<std::endl;
		return NULL;		
	}
	Nodo * aux = this->H;
	Nodo * aux2 = this->H;
	while(aux->getDato()!=Ref&&aux!=this->T){
		aux = aux->getSig();
	}
	while(aux2->getSig()!=aux){
		aux2 = aux2->getSig();
	}
	if (aux!=NULL){		
		aux2->setSig(aux->getSig());
	}
	else{
		std::cout<<"No existe la referencia en la lista"<<std::endl;
	}
}
void Lista::MostrarLista(){                  //Método en el que se muestran los valores que se encuentran dentro de
	Nodo* aux = this->H;                      //la lista
	while(aux!=NULL){
		std::cout<<aux->getDato()<<std::endl;
		aux=aux->getSig();
	}
}