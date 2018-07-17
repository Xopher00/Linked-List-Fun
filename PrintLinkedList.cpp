#include "NodeStruct.h"
#include <iostream>
using namespace std;
//Kris Price
/*
int main()
{
    LinkedList a();
    return 0;
}
*/
void LinkedList::Print(){

Node *Head = NULL;
Node *current = Head;

while(current != NULL)//print any node that isnt empty
{
    cout<<current->firstName<<" "<<current->lastName<<" "<<current->idNumber<<endl;
}
if(Head == NULL)
cout<<"Error";
//return 0;
}