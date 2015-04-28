#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef __FinalProjectCSCI__List__
#define __FinalProjectCSCI__List__


#include <stdio.h>

struct node
{
	int data;
	node* next;
};

class List
{
public:
	void ReverseLinkedList();
	node * split(node* head);
	node* Merge(node* a, node* b);
	node* MergeSort(node* head);
	void deleteNode(int deletedNode);
	void printPath();
	void addNode(int nodeData);
	void insertnode(int newNode, int previousNode);
	int LinkedListFindMax();
	int LinkedListFindMin();
	void setHead(int startValue);
private:
	node *head;
	node *current;
};

#endif /* defined(__FinalProjectCSCI__List__) */
