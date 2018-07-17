#include <iostream>
using namespace std;
//Kris Price
/*
int main()
{
    LinkedList a();
    return 0;
}*/

   //return 0;


void LinkedList::InsertNode()
{
    Node *ptr = LinkedList::CreateNode();
    Node *Head = NULL;
    ptr = new Node;

    if(Head == NULL){
        Head = ptr;
        ptr -> next = NULL;}  //Case 1 List is empty
    else if((Head->idNumber) > (ptr->idNumber)){//Case 2 insert at first Node
        ptr->next = Head;
        Head = ptr;
    }
    else
    {
        Node *current = Head;
        while((current->idNumber)< (ptr->idNumber))//case 3 insert between Nodes
        {
            //current->next = NULL;
            current = current->next;
        }
        if(current->next == NULL){
            current->next = ptr;
            ptr->next = NULL;

        }
        //while(current->next != NULL) //Case 4 insert at end of Node
   // {current = current->next;}
   // current->next=ptr;
   // ptr->next=NULL;
   }
    //return 0 ;
}
