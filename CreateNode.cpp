#include "NodeStruct.h"
#include <iostream>
using namespace std;
//Kris Price
/*
int main()
{
    LinkedList a();
    return 0;
}*/

LinkedList::Node *LinkedList::CreateNode ()
{
    Node *ptr;
    Node *Head = NULL;
    ptr = new Node;

    cout<<"Enter Student's last name"<<endl;
    cin>>ptr->lastName;
    cout<<"Enter Student's first name"<<endl;
    cin>>ptr->firstName;
    cout<<"Enter Student IDNumber"<<endl;
    cin>>ptr->idNumber;

    if(Head == NULL){
        Head = ptr;
        ptr -> next = NULL;} //Checks if the Head pointer is empty
    else
    {
        Node *current = Head;
        while(current->next != NULL)//finds empty Head to link new node to
    {
        current = current->next;
    }
    current->next=ptr;
    ptr->next=NULL; //added to the end of the list
    }
return ptr;
        //return 0;
}
