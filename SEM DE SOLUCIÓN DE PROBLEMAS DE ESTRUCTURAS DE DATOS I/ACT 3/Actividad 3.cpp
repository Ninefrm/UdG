/* Fonseca Romero Samuel Maximiliano,
218747081,
SEMINARIO DE SOLUCIÓN DE PROBLEMAS DE ESTRUCTURAS DE DATOS I,
D07,
Actividad #3,
07/09/2018
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;
//class
class Producto{
    string type;
    string name;
    double price;
    double iva;
  public:
    Producto(){
      type="Hi";
      name="Hi";
      price=0.0;
      iva=0;
    }
    void values(string T,string N, double P, double I);
    string Type();
    string Name();
    double Price();
    double Iva();
    double Total();
};
//functions
  void start();
  void mostrar(vector<Producto> *P);
//main
int main(int argc, char const *argv[]) {
  start();
  return 0;
}
//Declaración de funciones
void start(){
  vector <Producto> Bar;
  Producto Q;
  string Name="";
  string Type;
  int X=1;
  double Price, IVA;
  int OP;
  while(X){
    cout<<endl<<" \t \t Welcome to SuperMarket"<<endl;
    cout<<"1.- Add Office item."<<endl;
    cout<<"2.- Add SuperMarket item"<<endl;
    cout<<"3.- Add Drugs item"<<endl;
    cout<<"4.- Add Wines"<<endl;
    cout<<"5.- Show all items"<<endl;
    cin>>OP;
    switch (OP) {
        case 1:
          cout<<"Name: ";
          cin.ignore();
          getline(cin, Name);
          fflush(stdin);
            Type="Office";
          fflush(stdin);
          cout<<"Price: ";
          cin>>Price;
          fflush(stdin);
          IVA=16;
          Bar.push_back(Q);
          Bar.at(Bar.size()-1).values(Type,Name,Price,IVA);
        break;
        case 2:
          cout<<"Name: ";
          cin.ignore();
          getline(cin, Name);
          fflush(stdin);
            Type="Super";
          fflush(stdin);
          cout<<"Price: ";
          cin>>Price;
          fflush(stdin);
          IVA=4;
          Bar.push_back(Q);
          Bar.at(Bar.size()-1).values(Type,Name,Price,IVA);
        break;
        case 3:
          cout<<"Name: ";
          cin.ignore();
          getline(cin, Name);
          fflush(stdin);
            Type="Drugs";
          fflush(stdin);
          cout<<"Price: ";
          cin>>Price;
          fflush(stdin);
          IVA=12;
          Bar.push_back(Q);
          Bar.at(Bar.size()-1).values(Type,Name,Price,IVA);
        break;
        case 4:
          cout<<"Name: ";
          cin.ignore();
          getline(cin, Name);
          fflush(stdin);
            Type="Wines";
          fflush(stdin);
          cout<<"Price: ";
          cin>>Price;
          fflush(stdin);
          IVA=16;
          Bar.push_back(Q);
          Bar.at(Bar.size()-1).values(Type,Name,Price,IVA);
        break;
        case 5:
          mostrar(&Bar);
        break;
      }
  }

}
void Producto::values(string T,string N, double P, double I){
  type = T;
  name = N;
  price = P;
  iva = I;
}
string Producto::Type(){
  return type;
}
string Producto::Name(){
  return name;
}
double Producto::Price(){
  return price;
}
double Producto::Iva(){
  return iva;
}
double Producto::Total(){
  double Total;
  Total=(price*iva)/100+price;
  return Total;
}
void mostrar(vector<Producto> *P){
  cout<<"\t Offices LIST:"<<endl;
  for(int i=0; i<P->size();i++){
      if((P->at(i).Type().compare("Office"))==0){
        cout<<"Name: "<<P->at(i).Name()<<". ";
        cout<<"Type: "<<P->at(i).Type()<<". ";
        cout<<"Price: "<<P->at(i).Price()<<". ";
        cout<<"IVA: "<<P->at(i).Iva()<<". ";
        cout<<"Price with IVA: "<<P->at(i).Total()<<". "<<endl;
      }
  }
  cout<<"\t Super LIST:"<<endl;
  for(int i=0; i<P->size();i++){
      if((P->at(i).Type().compare("Super"))==0){
        cout<<"Name: "<<P->at(i).Name()<<". ";
        cout<<"Type: "<<P->at(i).Type()<<". ";
        cout<<"Price: "<<P->at(i).Price()<<". ";
        cout<<"IVA: "<<P->at(i).Iva()<<". ";
        cout<<"Price with IVA: "<<P->at(i).Total()<<". "<<endl;
      }
  }
  cout<<"\t Drugs LIST:"<<endl;
  for(int i=0; i<P->size();i++){
      if((P->at(i).Type().compare("Drugs"))==0){
        cout<<"Name: "<<P->at(i).Name()<<". ";
        cout<<"Type: "<<P->at(i).Type()<<". ";
        cout<<"Price: "<<P->at(i).Price()<<". ";
        cout<<"IVA: "<<P->at(i).Iva()<<". ";
        cout<<"Price with IVA: "<<P->at(i).Total()<<". "<<endl;
      }
  }
  cout<<"\t Wines LIST:"<<endl;
  for(int i=0; i<P->size();i++){
      if((P->at(i).Type().compare("Wines"))==0){
        cout<<"Name: "<<P->at(i).Name()<<". ";
        cout<<"Type: "<<P->at(i).Type()<<". ";
        cout<<"Price: "<<P->at(i).Price()<<". ";
        cout<<"IVA: "<<P->at(i).Iva()<<". ";
        cout<<"Price with IVA: "<<P->at(i).Total()<<". "<<endl;
      }
  }
}
