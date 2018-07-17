#include "NodeStruct.h"
#include <iostream>
using namespace std;
//Kris Price

//Node* printNode(Node*, int);

/*int main()
{
    LinkedList a();
    return 0;

/*
int LinkedList::print()
{   int a;
    Node *Head = NULL;

    cout<<"Enter the id number of the student your looking for";//get student idnumber
    cin>>a;

    printNode(Head, a);

    return 0;
}*/

void LinkedList::SearchNode(){
    int a;
    bool found = false;
    Node *Head = NULL;
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
    cout<<"Student not found";
if(Head == NULL)
    cout<<"Error";
//return 0;
}
