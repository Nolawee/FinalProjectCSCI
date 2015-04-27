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
	node* ReverseLinkedList(node *head);
	node * split(node* head);
	node* Merge(node* a, node* b);
	node* MergeSort(node *head);
	void deleteNode(node* head, int deletedNode);
	void printPath(node* head);
	node* addNode(node* previous, int nodeData);
	void insertnode(node* head, int newNode, int previousNode);
	int LinkedListFindMax(node *head);
	int LinkedListFindMin(node* head);
private:
	node *head;
	node *current;
};

#endif /* defined(__FinalProjectCSCI__List__) */