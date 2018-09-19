/* Fonseca Romero Samuel Maximiliano,
218747081,
SEMINARIO DE SOLUCIÓN DE PROBLEMAS DE ESTRUCTURAS DE DATOS I,
D07,
Actividad #2,
31/08/2018
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>

using namespace std;

struct inventario{
  char name[30];
  char autor[35];
  int cantidad;
  unsigned int id_libro;
  char area[30];
  float precio;
  char editorial[12];
  int year;
  int dec;
};
struct venta{
  vector<unsigned int> Id;
  vector<unsigned int> Cantidad;
  int Movimientos;
  int Z;
  string Rembolso;
  float Total;
};
union INVLIBREV{
    inventario L;
    inventario R;
};

inventario capturaL(int c);
inventario capturaR(int c);
void mostrar(inventario books);

int main(){
    int N;
    cout<<"Cuantos libros o revistas añadirá?"<<endl;
    cin>>N;
    INVLIBREV Libreria[N];
    int LR;
    int es[N];

    cout<<"Comenzamos a agregar, 1.- Revista, 0.- Libro"<<endl;
    for(int i=0;i<N;i++){
    cout<<"¿Libro o Revista?"<<endl;
    cin>>LR;
    if(LR){
        Libreria[i].R=capturaR(i);
        es[i]=LR;

    }
    if(LR==0){
        Libreria[i].L=capturaL(i);
        es[i]=LR;
    }
    }
    for(int i=0;i<N;i++){
    cout<<es[i]<<endl;
    if(es[i]){
        /*cout<<"Nombre: "<<Libreria[i].R.name<<". ";
        cout<<"Autor: "<<Libreria[i].R.autor<<". ";
        cout<<"Actualmente hay: "<<Libreria[i].R.cantidad<<" libros. ";
        cout<<"Area: "<<Libreria[i].R.area<<". ";
        cout<<"Editorial: "<<Libreria[i].R.editorial<<". ";
        cout<<"ID: "<<Libreria[i].R.id_libro<<". ";
        cout<<"Precio: $"<<Libreria[i].R.precio<<". ";
        cout<<"Año: "<<Libreria[i].R.year<<"."<<endl;*/
        mostrar(Libreria[i].R);
    }
    if(es[i]==0){
        /*cout<<"Nombre: "<<Libreria[i].L.name<<". ";
        cout<<"Autor: "<<Libreria[i].L.autor<<". ";
        cout<<"Actualmente hay: "<<Libreria[i].L.cantidad<<" libros. ";
        cout<<"Area: "<<Libreria[i].L.area<<". ";
        cout<<"Editorial: "<<Libreria[i].L.editorial<<". ";
        cout<<"ID: "<<Libreria[i].L.id_libro<<". ";
        cout<<"Precio: $"<<Libreria[i].L.precio<<". ";
        cout<<"Año: "<<Libreria[i].L.year<<"."<<endl;*/
        mostrar(Libreria[i].L);
    }
    }

return 0;
}
inventario capturaL(int c){
  inventario book;
  cout<<"Ingrese el nombre del libro: ";
  cin.ignore();
  cin.getline(book.name,30);
  fflush(stdin);
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
  book.dec=0;
  return book;
}
inventario capturaR(int c){
  inventario R;
  cout<<"Ingrese el nombre de la revista: ";
  cin.ignore();
  cin.getline(R.name,30);
  fflush(stdin);
  cout<<"Ingrese el nombre del autor: ";
  cin.getline(R.autor,35);
  cout<<"Ingrese la cantidad de revistas: ";
  cin>>R.cantidad;
  R.id_libro=c;
  cout<<"Ingrese el area: ";
  cin.ignore();
  cin.getline(R.area,30);
  cout<<"Ingrese el precio: $";
  cin>>R.precio;
  cout<<"Ingrese el nombre de la editorial: ";
  cin.ignore();
  cin.getline(R.editorial,12);
  cout<<"Ingrese el año: ";
  cin>>R.year;
  cout<<endl;
  R.dec=1;
  return R;
}
void mostrar(inventario books){
    cout<<"Nombre: "<<books.name<<". ";
    cout<<"Autor: "<<books.autor<<". ";
    if(books.dec==0){
      cout<<"Actualmente hay: "<<books.cantidad<<" libros. ";
    } else{
    cout<<"Actualmente hay: "<<books.cantidad<<" Revistas. ";
    }
    cout<<"Area: "<<books.area<<". ";
    cout<<"Editorial: "<<books.editorial<<". ";
    cout<<"ID: "<<books.id_libro<<". ";
    cout<<"Precio: $"<<books.precio<<". ";
    cout<<"Año: "<<books.year<<"."<<endl;
}
