#include <iostream>
using namespace std;

//Definire un nuovo TIPO DI DATO chiamato Cell
struct Cell
{
	char	val;
	Cell* next;


};

int main()
{
    Cell*	stack=NULL;
    Cell*	p;
    char c;

    while(true){
        cin>>c;
        if(c=='@'){
            break;
        }
        tmp=new Cell;    //NUOVO BLOCCO DI MEMORIA
        tmp->val=c;
        
        tmp->next = stack; //nuova cella punta alla prima
        stack = tmp;      //stack punta alla nuova CELLA
    }
    
    tmp=stack;
    while(tmp!= NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
   
    

	return 0;
}


