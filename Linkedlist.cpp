
 //Kris Price
 // main function and display menu
 
#include "Link.h"
#include <iostream>
using namespace std;
 
 
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
{     int menu; //call display menu function
      Node *list = NULL; //create list Node
    //LinkedList box;
    while(menu != 5){
	display_menu();   // call display menu function to display menu immediately
	cin >> menu;      //get user input for menu item
	switch (menu)
	{
            case 1: list = InsertNode(list); //call Insert Node, pass list parameter
                break;
            case 2: list = DeleteNode(list); //Call delete node, pass list parameter
                break;
            case 3: Print(list); // call print , pass list parameter
                break;
            case 4: SearchNode(list); // call search Node, pass list parameter
                break;
	}
    }
	return 0;
}
