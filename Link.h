
//Kris Price 
// Header File for linked list

#ifndef LINK_H 
#define LINK_H

struct Node{
char lastName[20];
char firstName[20];   //node structure
int idNumber;
Node *next;
};

Node *CreateNode();
Node *InsertNode(Node*); //Function prototypes
Node *DeleteNode(Node*);
 void Print(Node*);
void SearchNode(Node*); 


#endif
