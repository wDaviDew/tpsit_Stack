#include <iostream>
using namespace std;

//Definire un nuovo TIPO DI DATO chiamato Cell
struct Cell
{

};
struct Contatto
{
  string nome, cognome;
  int eta  ;

};

int main ()
{
	int a=33;
	int* p=&a;
	
	cout<<"a= "<< a<<", p= "<<*p<<endl;
	*p=71;
	cout<<"a= "<< a<<", p= "<<*p<<endl;
	
    Contatto    persona;   //STACK
    
    persona.nome="Tizio";
    
    Contatto*	p_persona;
    
   // cout<<persona.nome;
    //cout<<"Valore puntatore: "<< p_persona<< "\n";
    
    p_persona=new Contatto;   //Richiedo nuova memoria
    cout<<"Inserisci un contatto: \n";
    cout<<"Nome: ";
    cin>>p_persona->nome;
    cout<<"Cognome: ";
    cin>>p_persona->cognome;
    
 //  cout<<"\n Valore puntatore persona: "<< (*p_persona).nome<<endl;
 
   cout<<"\nValore puntatore persona: "<< p_persona->nome<<endl;
   cout<<"Valore persona: "<<persona.nome<<", "<<persona.cognome;
   cout<<"\n\t INDIRIZZI \nPersona: "<<&persona<<"\nPuntatore persona: "<<p_persona;
   
   delete p_persona; //Libero la memoria richiesta
  return 0;
}
