#include <string>
#include <iostream>
#include <fstream>
#include "List.h"

using namespace std;
void displayMenu();

#include <stdio.h>

void actualFunction(string initValue){
    string command;
    int startValue;
	startValue = stoi(initValue);
	List x;
	x.setHead(startValue);
    cout << "Would you like to add another value?" << endl;
    cout << "If yes, type in another value. If not, type 'no'" << endl;
    cin >> initValue;

	while(initValue != "no"){
        startValue = stoi(initValue);
        x.addNode(startValue);
        cout << "Would you like to add another value?" << endl;
        cout << "If yes, type in another value. If not, type 'no'" << endl;
        cin >> initValue;
	}

	x.printPath();

	while( command != "9"){
		  if( command == "1"){
		  	x.printPath();
		  }
		  else if( command == "2"){
		  	int newNode;
		  	int prevNode;
		  	cout<<"What node would you like to add?"<<endl;
            string newNodeString;
            getline(cin,newNodeString);
            cout<<"What node will come before the new node"<<endl;
            string prevNodeString;
            getline(cin,prevNodeString);
            newNode = stoi(newNodeString);
            prevNode = stoi(prevNodeString);

		  	x.insertnode(newNode, prevNode);
		  }
		  else if( command == "3"){
		  	int deletedNode;
		  	cout<<"What node would you like to delete?"<<endl;
            string deletedNodeString;
            getline(cin,deletedNodeString);
            deletedNode = stoi(deletedNodeString);
            x.deleteNode(deletedNode);
		  }
		  else if( command == "4"){
		  	cout<<"PlaceHolder"<<endl;
		  	//x.MergeSort(head);

		  }
		  else if( command == "5"){
		  	cout<<"Reversing List"<<endl;
		  	x.ReverseLinkedList();
		  }
		  else if( command == "6"){
		  	x.LinkedListFindMax();
		  }
		  else if( command == "7"){
		  	x.LinkedListFindMin();
		  }
		  else if(command == "8")
		  {
		  	x.LinkedListFindRange();
		  }
		  displayMenu();
		  getline(cin,command);
	}
	cout<<"Goodbye!"<<endl;
}

int main(int argc, char *argv[]){
    cout<<"Hello and welcome to the Linked list creator."<<endl;
	bool proceed = false;
	while(proceed == false){
        string initValue;
        cout << "What value would you like your linked list to start with?" << endl;
        cin >> initValue;
        bool isNumber = (initValue.find_first_not_of( "0123456789" ) == string::npos);
        if(isNumber == true){
            actualFunction(initValue);
            proceed = true;
        }
        else{
            cout << "You must enter a number" <<endl;
        }
	}

	return 0;
}
void displayMenu(){
    cout << "======= Main Menu =======" << endl;
    cout << "1. Print Path" << endl;
    cout << "2. Insert Node" << endl;
    cout << "3. Remove Node" << endl;
    cout << "4. Sort List (MergeSort)" << endl;
    cout << "5. Reverse List" << endl;
    cout << "6. Find Max Value in List" << endl;
    cout << "7. Find Min Value in List" << endl;
    cout << "8. Find Range of the List" << endl;
    cout << "9. Quit" << endl;
}
