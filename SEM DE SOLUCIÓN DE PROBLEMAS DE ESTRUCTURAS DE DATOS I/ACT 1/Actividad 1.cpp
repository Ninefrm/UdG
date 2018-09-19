/* Fonseca Romero Samuel Maximiliano,
218747081,
SEMINARIO DE SOLUCIÓN DE PROBLEMAS DE ESTRUCTURAS DE DATOS I,
D07,
Actividad #1,
29/08/2018
*/
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

//Estructuras
struct inventario{
  char name[30];
  char autor[35];
  int cantidad;
  unsigned int id_libro;
  char area[30];
  float precio;
  char editorial[12];
  int year;
};
struct venta{
  vector<unsigned int> Id;
  vector<unsigned int> Cantidad;
  int Movimientos;
  int Z;
  string Rembolso;
  float Total;
};

//Funciones
void start();
inventario captura(int c);
void mostrar(vector<inventario> *books);
int buscar(vector<inventario> *books, char *nombre, char *autor);
void borrar(vector<inventario> *books, char *nombre, char *autor);
void modificar(vector<inventario> *books, unsigned int id);
venta Venta(vector<inventario> *books, int *N, int Z);
void Recibo(vector<inventario> *books, venta *V);
void EliminarV(vector<inventario> *books, venta *V);
bool librosdisponibles(vector<inventario> *books, unsigned int ID, unsigned int CANTIDAD);

//
int main(int argc, char const *argv[]){

  start();

  return 0;
}
//

inventario captura(int c){
  inventario book;
  cout<<"Ingrese el nombre del libro: ";
  cin.ignore();
  cin.getline(book.name,30);
  fflush(stdin);
  cout<<endl;
  cout<<"Ingrese el nombre del autor: ";
  cin.getline(book.autor,35);
  cout<<"Ingrese la cantidad de libros: ";
  cin>>book.cantidad;
  book.id_libro=c;
  cout<<"Ingrese el area: ";
  cin.ignore();
  cin.getline(book.area,30);
  cout<<"Ingrese el precio: $";
  cin>>book.precio;
  cout<<"Ingrese el nombre de la editorial: ";
  cin.ignore();
  cin.getline(book.editorial,12);
  cout<<"Ingrese el año: ";
  cin>>book.year;
  cout<<endl;
  return book;
}
void mostrar(vector<inventario> *books){
  for(int i=0; i<books->size();i++){
    cout<<"Nombre: "<<books->at(i).name<<". ";
    cout<<"Autor: "<<books->at(i).autor<<". ";
    cout<<"Actualmente hay: "<<books->at(i).cantidad<<" libros. ";
    cout<<"Area: "<<books->at(i).area<<". ";
    cout<<"Editorial: "<<books->at(i).editorial<<". ";
    cout<<"ID: "<<books->at(i).id_libro<<". ";
    cout<<"Precio: $"<<books->at(i).precio<<". ";
    cout<<"Año: "<<books->at(i).year<<"."<<endl;
  }
}
int buscar(vector<inventario> *books, char *nombre, char *autor){
  for(int i=0; i<books->size(); i++){
      if (strcmp(books->at(i).name, nombre)==0 && strcmp(books->at(i).autor, autor)==0) return i;
  }
  cout<<"No encontrado"<<endl;
  return -1;
}
void borrar(vector<inventario> *books, char *nombre, char *autor){
  int index = buscar(books, nombre, autor);
  for(index; index<books->size()-1; index++){
    cout<<"eliminando...";
      books->at(index)=books->at(index+1);
      books->at(index).id_libro = books->at(index).id_libro-1;
  }
  books->resize(books->size()-1);
  cout<<endl;
}
void modificar(vector<inventario> *books, unsigned int id){
  cout<<"Responder 1.-Si, 0.-No."<<endl;
  int decision;
  cout<<"Modificiar nombre: ";
  cin>>decision;
  if(decision){
    cin.ignore();
    cin.getline(books->at(id).name,30);
  }
  cout<<"Modificiar nombre del autor: ";
  cin>>decision;
  if(decision){
      cin.ignore();
      cin.getline(books->at(id).autor,35);
  }
  cout<<"Modificiar cantidad: ";
  cin>>decision;
  if(decision){
    cin>>books->at(id).cantidad;
  }
  cout<<"Modificiar area: ";
  cin>>decision;
  if(decision){
      cin.ignore();
      cin.getline(books->at(id).area,30);
  }
  cout<<"Modificiar editorial: ";
  cin>>decision;
  if(decision){
      cin.ignore();
      cin.getline(books->at(id).editorial,30);
  }
  cout<<"Modificiar precio: ";
  cin>>decision;
  if(decision){
    cin>>books->at(id).precio;
  }
  cout<<"Modificiar año: ";
  cin>>decision;
  if(decision){
    cin>>books->at(id).year;
  }
}

void start(){
  vector <inventario> books;
  int d, op;
  char BAutor[35];
  char BNombre[30];
  int Bid;
  int Z=1;
  int VID;
  int VTotales=1;
  int DEC=0;
  vector<venta> V;
  int W=1;
  int N;
  cout<<"¿Cuantos libros utilizará?"<<endl;
  cin>>N;
    for(int i=0;i<N;i++)
      books.push_back(captura(i));

  while(W){
    cout<<"¿Que deseas hacer?"<<endl;
    cout<<"1.- Mostrar lista."<<endl;
    cout<<"2.- Buscar libro."<<endl;
    cout<<"3.- Borrar libro."<<endl;
    cout<<"4.- Modificar libro."<<endl;
    cout<<"5.- Vendedor."<<endl;
    cout<<"6.- Mostrar Recibo"<<endl;
    cout<<"7.- Mostrar ventas"<<endl;
    cout<<"8.- Eliminar venta"<<endl;
    cout<<"9.- Dinero en caja"<<endl;
    cout<<"10.- Agregar más libros"<<endl;
    cout<<"11.- Salir."<<endl;
    cin>>op;
    switch (op) {
      case 1:
        mostrar(&books);
      break;
      case 2:
      cout<<"Nombre libro: ";
      cin.ignore();
      cin.getline(BNombre,30);
      fflush(stdin);
      cout<<"Nombre autor: ";
      cin.getline(BAutor,35);
      if(buscar(&books, BNombre, BAutor)>=0){
        cout<<"Nombre: "<<books.at(buscar(&books, BNombre, BAutor)).name<<". ";
        cout<<"Autor: "<<books.at(buscar(&books, BNombre, BAutor)).autor<<". ";
        cout<<"Actualmente hay: "<<books.at(buscar(&books, BNombre, BAutor)).cantidad<<" libros. ";
        cout<<"Area: "<<books.at(buscar(&books, BNombre, BAutor)).area<<". ";
        cout<<"ID: "<<books.at(buscar(&books, BNombre, BAutor)).id_libro<<". ";
        cout<<"Precio: $"<<books.at(buscar(&books, BNombre, BAutor)).precio<<". ";
        cout<<"Año: "<<books.at(buscar(&books, BNombre, BAutor)).year<<"."<<endl;
      };
      break;
      case 3:
      cout<<"Nombre libro: ";
      cin>>BNombre;
      cout<<"Nombre autor: ";
      cin>>BAutor;
      borrar(&books, BNombre, BAutor);
      break;
      case 4:
      cout<<"Libro a modificar, ingrese id ";
      cin>>Bid;
      modificar(&books, Bid);
      break;
      case 5:
      //vendedor();
      Z=1;
      while(Z){
        V.push_back(Venta(&books,&N,VTotales));
        cout<<"¿Hacer otra venta?"<<endl;
        cin>>Z;
        VTotales++;
      }
      break;
      case 6:
        cout<<"Ingrese el ID de la venta: "<<endl;
        cin>>VID;
        VID=VID-1;
        Recibo(&books, &V[VID]);
      break;
      case 7:
        for(int i=0; i<VTotales-1; i++)Recibo(&books, &V[i]);
      break;
      case 8:
        cout<<"Ingrese el ID de la venta: "<<endl;
        cin>>VID;
        VID=VID-1;
        EliminarV(&books, &V[VID]);
      break;
      case 9:
      DEC=0;
        for(int i=0; i<VTotales-1; i++){
          if(V[i].Rembolso.compare("Hecho")!=0) DEC=V[i].Total+DEC;
        }
        cout<<"$"<<DEC<<endl;
      break;
      case 10:
      books.push_back(captura(books.size()));
      break;
      case 11:
      W=0;
      break;
    }
  }

}
void Recibo(vector<inventario> *books, venta *V){
  float TOTAL=0;
  cout<<"\t \t RECIBO"<<"\t \t"<< V->Z<<endl;
  cout<<"Producto. \t Cantidad \t ID \t Precio \t REMBOLSO: "<<V->Rembolso<<endl;

  for(int i=1; i<=V->Movimientos; i++){
    cout<<i<<".- "<<books->at(V->Id[i]).name <<"\t \t"<<V->Cantidad[i]<<"\t \t "<<V->Id[i]<<"\t $"<<books->at(V->Id[i]).precio<<endl<<endl;
    TOTAL=(books->at(V->Id[i]).precio * V->Cantidad[i])+TOTAL;
  }
  V->Total=TOTAL;
  cout<<endl<<"TOTAL: \t  $"<<V->Total<<endl;

}
venta Venta(vector<inventario> *books, int *N, int Z){
  venta V;
  V.Z=Z;
  //V.code=name;
  int X=1;
  V.Cantidad.push_back(0);
  V.Id.push_back(0);
  unsigned int A, ID;
  int OP;
  int Count=1;
  while(X>0){
    cout<<"Ingrese id del libro"<<endl;
    cin>>ID;
    cout<<"Cantidad de este mismo id: ";
    cin>>A;
    if(librosdisponibles(books,ID,A)){
      V.Cantidad.push_back(A);
      V.Id.push_back(ID);
      books->at(V.Id[Count]).cantidad=books->at(V.Id[Count]).cantidad-A;
      cout<<"¿Agregar más libros a la venta?: 1.- Si, 0.-No"<<endl;
      cin>>OP;
      if(OP){
        X++;
        Count++;
      }else{
        X=0;
      }
    }
    else{
      cout<<"No hay libros suficientes. Libros existentes: "<<books->at(ID).cantidad<<endl;
      cout<<"Vuelva a ingresar los datos"<<endl;
    }
  }
  V.Movimientos=Count;
  Recibo(books,&V);
  return V;
}
void EliminarV(vector<inventario> *books, venta *V){
  for(int i=1; i<=V->Movimientos; i++){
    books->at(V->Id[i]).cantidad=books->at(V->Id[i]).cantidad+(V->Cantidad[i]);
  }
  V->Rembolso="Hecho";
}
bool librosdisponibles(vector<inventario> *books, unsigned int ID, unsigned int CANTIDAD){
      if (books->at(ID).cantidad >= CANTIDAD) return 1;
  return 0;
}
