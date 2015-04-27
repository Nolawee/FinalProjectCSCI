#include <string>
#include <iostream>
#include <fstream>
#include "List.h"

using namespace std;

#include <stdio.h>

int main(int argc, char *argv[]) {
	cout<<"Hello and welcome to the Linked list creator."<<endl;
	cout << "What value would you like your linked list to start with?" << endl;
	int startValue;
	string initValue;
	cin >> initValue;
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


}
