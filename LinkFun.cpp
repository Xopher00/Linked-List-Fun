#include "Link.h" // link to header file
#include <iostream>
#include <map>
using namespace std;
  //Kris Price
 //February 10 2015
// Contains Search Node, Insert Node, Create Node, Delete Node, and Print functions





Node *CreateNode () //Creates a new node 
{
    Node *ptr;  //create node pointer
    
    ptr = new Node;

    cout<<"Enter Student's last name"<<endl;  //receive input for name and id number
    cin>>ptr->lastName;
    cout<<"Enter Student's first name"<<endl;
    cin>>ptr->firstName;
    cout<<"Enter Student IDNumber"<<endl;
    cin>>ptr->idNumber;

    
    ptr->next=NULL; //added to the end of the list
   
    return ptr; // return pointer for new node
        
}

Node *InsertNode(Node *list) //insert new node into linked list
{
    Node *ptr = CreateNode(); // call createNode
    bool breaks = true;
    Node *lookAhead = list;
    
    if(list == NULL)
  {
        list = ptr; // List is empty
  }  
        
        else
  {
    if(ptr->idNumber < list->idNumber)  //print list in ascending order;
    {
      ptr->next = list;
      list=ptr;
    }
  else
     {
    while((lookAhead->next!=NULL)&&(breaks == true))
    {
	if(ptr->idNumber < lookAhead->next->idNumber)
	{ 
	  breaks = false;      //exit while loop
	}
	else 
	{
	  lookAhead = lookAhead->next;// traverse list by one node
        }
    }
    ptr->next = lookAhead->next;
    lookAhead->next = ptr;
      }
  }
    return list;
}
        

Node *DeleteNode(Node *list) //delete node from list
{   
    int a;
    Node *prev;
    bool breaks = true;
    cout<<"Enter the id number of the student to delete ";
    cin>>a;
    
    if(list == NULL)
        cout<<"Empty list";//no list members
    else
      {
        if(list->idNumber == a)
            {
            Node *current = list;
            list = list->next;
	    return list;
	    }
        else
	    {
            Node *current = list;
            while(current != NULL && breaks == true)
                {if(current->idNumber == a)
		        {
                   breaks = false;
		        }
		   else
		   {
		     prev = current;
		     current = current->next;
		   }
		 }
            if(current == NULL)
                cout<<"No such Node"<<endl;//idnumber not found
             else
	     {if(list == current)
	       list = list->next;
	       else {
		 prev->next = current->next;
	       }
	       delete current;
	     }
	    }
      }
      return list;
}

void SearchNode(Node *list){  //search for a node by idnumber
    int a;
    bool found = false;
    Node *current = list;

    cout<<"Enter the id number of the student your looking for ";//get student idnumber
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
if(list == NULL)
    cout<<"Error"<<endl; //list has no nodes

}

 void Print(Node *list){

Node *current = list;

while(current != NULL)//print any node that isnt empty
{
    cout<<current->firstName<<" "<<current->lastName<<" "<<current->idNumber<<endl; //print every node in list ordered by id number
    current=current->next;
}
if(list == NULL)
cout<<"Error"<<endl;
 
}