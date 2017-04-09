#include "Lista.h"

int main(){
   int ValorInsertado;
   int Opcion;
   int Dato;
   int Ref;

       cout<<"Selecciona la opción que desees realizar "<<end1;  //Se muestran las diferentes funciones que puede 
       cout<<"1) Crear Lista"<<end1;                             //Realizar la Lista
       cout<<"2) Insertar Valor al Inicio"<<end1;
       cout<<"3) Insertar Valor al Final"<<end1;
       cout<<"4) Insertar Valor por Referencia"<<end1;
       cout<<"5) Borrar Valor Inicial de la Lista"<<end1;
       cout<<"6) Borrar Valor Final de la Lista"<<end1;
       cout<<"7) Borrar Valor por Referencia"<<end1;
       cout<<"8) Buscar Valor"<<end1;
       cout<<"9) Mostrar Lista"<<end1;
       cout<<"10) Mostrar Lista"<<end1;
       cin<<ValorInsertado;
      
       if (Opcion <1 || Opcion > 10){                  //Se delimitan los valores posibles para ejecutar los casos
         cout<<"Opción no válida"<<end1;                    
         return Opcion;
       }
    do{
      switch (ValorInsertado){
      case '1':                                 //Se obtienen los métodos de la lista y se ejecutan en su respectivo
      	Lista l = Lista();                     //caso
         if (l.IsVacio()){
          cout<<"Error al generar la lista"<<end1;
         }
          cout<<"Se creó lista"<<end1;
         break;
      case '2':
         cout<<"Selecciona Dato a Ingresar"<<end1;
         cin>>Dato;
         l.InsertarP(Dato);
      break;
      case '3':
         cout<<"Selecciona Dato a Ingresar"<<end1;
         cin>>Dato;
         l.InsertarF(Dato);
      break;
      case '4':
         cout<<"Selecciona Dato a Ingresar"<<end1;
         cin>>Dato;
         cin>>Ref;
         l.InsertarRef(Dato, Ref);
      break;
      case '5':
         cout<<"Selecciona Dato a Borrar"<<end1;
         l.BorrarInicio();
      break;
      case '6':
         cout<<"Selecciona Dato a Borrar"<<end1;
         l.BorrarFinal();
      break;
      case '7':
         cout<<"Selecciona Dato a Borrar"<<end1;
         cin>>Ref;
         l.BorrarRef(Ref);
      break;
      case '8':
         cout<<"Selecciona Dato a Buscar"<<end1;
         cin>>Dato
         l.Buscar(Dato);
      break;
      case '9':
         cout<<"Lista:"<<end1;
         l.show();
      break;
    }while (Opcion!=10);
         cout<<"Gracias"<<end1;
}