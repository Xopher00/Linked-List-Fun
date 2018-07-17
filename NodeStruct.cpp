#include "Link.h"
#include <iostream>
#include <map>
using namespace std;
//Kris Price
//December 5 2014

/*
#ifndef NodeStruct_H
#define NodeStruct_H

class LinkedList{  //Create Class
public:

LinkedList();  //constructor
*/


Node *CreateNode();
void InsertNode();
void DeleteNode();  //function prototypes
//Node* deleteNode(Node* Head, int a);
void Print();
void SearchNode();
//Node * printNode(Node* Head, int a);
//void display_menu();
/*int main();
~LinkedList(){;}; //destructor
};

#endif
*/
Node *Head = NULL;


Node *CreateNode ()
{
    Node *ptr;
    //Node *Head = NULL;
    ptr = new Node;

    cout<<"Enter Student's last name"<<endl;
    cin>>ptr->lastName;
    cout<<"Enter Student's first name"<<endl;
    cin>>ptr->firstName;
    cout<<"Enter Student IDNumber"<<endl;
    cin>>ptr->idNumber;

    /*if(Head == NULL){
        Head = ptr;
        ptr -> next = NULL;} //Checks if the Head pointer is empty
    else
    {
        Node *current = Head;
        while(current->next != NULL)//finds empty Head to link new node to
    {
        current = current->next;
    }
    current->next=ptr;*/
    ptr->next=NULL; //added to the end of the list
    //}
return ptr;
        //return 0;
}

void InsertNode()
{
    Node *ptr = CreateNode();
    //Node *Head = NULL;
   // ptr = new Node;

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
        {  //current->next = NULL;
            cout<<current->idNumber<<endl;
            if(((current->idNumber)>(ptr->idNumber))&&(current->next!=NULL)){
                    cout << "IN FIRST IF" << endl;
                ptr->next=current->next;
                current->next=ptr;
            }
            else if(((current->next->idNumber)>(ptr->idNumber))&&(current->idNumber < ptr->idNumber)&&(current->next!=NULL)){
                cout << "IN SECOND IF" << endl;
                ptr->next=current->next;
                current->next=ptr;}
        /*else if(((ptr->idNumber)>(current->idNumber))&&(current->next == NULL)){
            ptr->next=current->next;
            current->next=ptr;
        }*/
        else if(current->next == NULL && (ptr->idNumber > current ->idNumber))
        {
            cout << "IN THIRD IF" << endl;
            current->next = ptr;
            ptr->next = NULL;
        }
        //if(current->next != NULL)
            current = current->next;
        }
    /*    current = current->next;
        if(((ptr->idNumber)>(current->idNumber))&&(current->next == NULL)){
            ptr->next=current->next;
            current->next=ptr;

        }*/
       // if(current->next == NULL){
        //    current->next = ptr;
        //    ptr->next = NULL;}
    //    while(current->next != NULL) //Case 4 insert at end of Node
    //{current = current->next;}
    //current->next=ptr;
    //ptr->next=NULL;
   }
    //return 0 ;
}

void DeleteNode()
{   int a;
      Node *ptr;
    //Node *Head = NULL;
    //ptr = new Node;

    cout<<"Enter the id number of the student to delete";
    cin>>a;

    if(Head == NULL)
        cout<<"Empty list";//no list members
    else{
        if(Head->idNumber == a)
        {
            Node *current = Head;
            Head = Head->next;
            cout<<"current"<<endl;
            delete current;}
        else
        {
            Node *current = Head->next;
            Node *prev = Head;
            while(((current->idNumber) != a)&&(current->next != NULL))
                {current = current->next;
                prev = prev->next;
                if(current->idNumber == a)
                {
                   prev->next = current->next;
                  cout<<"current"<<endl;
                   delete current;
                   break;
                }
                }
            if(current->next==NULL)
                cout<<"No such Node";//idnumber not found
            /*else
            {
                Node *current1 = current->next;
                current = current->next;
                delete current1;
            }*/
            //return Head;
        }
        }
        //return 0;
    }

void SearchNode(){
    int a;
    bool found = false;
    //Node *Head = NULL;
    Node *current = Head;

    cout<<"Enter the id number of the student your looking for";//get student idnumber
    cin>>a;

while(current != NULL)
{
   if(current->idNumber == a) //if idnumber is in the linked list
{
    cout<<current->firstName<<" "<<current->lastName<<endl;
    found = true;//idnumber found
    break;
}
current=current->next;//traverse the list
}
if(found == false)//idnumber not found
    cout<<"Student not found"<<endl;
if(Head == NULL)
    cout<<"Error"<<endl;
//return 0;
}

void Print(){

//Node *Head = NULL;
Node *current = Head;

while(current != NULL)//print any node that isnt empty
{
    cout<<current->firstName<<" "<<current->lastName<<" "<<current->idNumber<<endl;
    current=current->next;
}
if(Head == NULL)
cout<<"Error"<<endl;
//return 0;
}

