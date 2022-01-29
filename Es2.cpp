#include <iostream>
using namespace std;

//Definire un nuovo TIPO DI DATO chiamato Cell
struct Cell
{
	char	val;
	Cell* next;

};

int main ()
{
Cell	a;
Cell*	p=new Cell;

cin>>a.val;
cin>>p->val;

cout<<p<<&a;
cout<< p->val<< a.val;

p=&a;	
cout<< p<<&a<<&p;

delete p;
	return 0;
}
