#include <iostream>
#include <map>
using namespace std;
//Kris Price


#ifndef NodeStruct_H
#define NodeStruct_H

class LinkedList{  //Create Class
public:

LinkedList();  //constructor

struct Node{
char lastName[20];
char firstName[20];   //node structure
int idNumber;
Node *next;
};

Node *CreateNode();
void InsertNode();
void DeleteNode();  //function prototypes
//Node* deleteNode(Node* Head, int a);
void Print();
void SearchNode();
//Node * printNode(Node* Head, int a);
//void display_menu();
int main();
~LinkedList(){;}; //destructor
};

#endif

void display_menu()                           //display menu on console window
{
	cout <<"Choose one from the menu"<<endl <<endl;
	cout <<"          MENU" <<endl;
	cout <<"          -----"<<endl;
	cout <<"1. Insert a Node" <<endl;
	cout <<"2. Delete a Node"<<endl;
	cout <<"3. Print List" <<endl;
	cout <<"4. Search and Print information for a student"<<endl;
	cout <<"5. Quit"<<endl;
}

int main()
{     int menu;
    LinkedList box;
    while(menu != 5){
	display_menu();   // call display menu function to display menu immediately
	cin >> menu;      //get user input for menu item
	switch (menu)
	{
            case '1': box.InsertNode();
                break;
            case '2': box.DeleteNode();
                break;
            case '3': box.Print();
                break;
            case '4': box.SearchNode();
                break;
	}
    }
	return 0;
}

