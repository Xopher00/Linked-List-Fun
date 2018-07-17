#include "NodeStruct.h"
#include <iostream>
using namespace std;
//Kris Price

//Node* deleteNode();
/*
int main()
{
    LinkedList a();
    return 0;
}*/

/*int LinkedList::DeleteNode()
{   int a;
      Node *ptr;
    Node *Head = NULL;
    ptr = new Node;

    cout<<"Enter the id number of the student to delete";
    cin>>a;

    deleteNode(Head, a);

    return 0;
}*/

void LinkedList::DeleteNode()
{   int a;
      Node *ptr;
    Node *Head = NULL;
    ptr = new Node;

    cout<<"Enter the id number of the student to delete";
    cin>>a;

    if(Head == NULL)
        cout<<"Empty list";//no list members
    else{
        if(Head->idNumber == a)
        {
            Node *current = Head;
            Head = Head->next;
            delete current;}
        else
        {
            Node *current = Head;
            while(((current->next->idNumber) != a)&&(current->next != NULL))
                current = current->next;
            if(current->next==NULL)
                cout<<"No such Node";//idnumber not found
            else
            {
                Node *current1 = current->next;
                current = current->next;
                delete current1;
            }
            //return Head;
        }
        }
        //return 0;
    }

