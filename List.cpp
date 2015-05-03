#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "List.h"
using namespace std;

void List::setHead(int startValue){
    node *n = new node;
    n->data = startValue;
    head = n;
    current = head;
}

void List::ReverseLinkedList()
{
    node* prev = NULL;
    node* curr = head;
    node* next;
    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    printPath();
}
/*
void List::ReverseLinkedList()
{

}
*/
node* List::split(node* head)
{
    node* fast = head;
    node* slow = head;
    while(fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    node* temp = slow->next;
    slow->next = NULL;
    return temp;
}

node* List::Merge(node* a, node* b)
{
    if(!a)
        return b;
    else if (!b)
        return a;
    node* result = NULL;
    if(a->data <= b->data)
    {
        result = a;
        result->next = Merge(a->next,b);
    }
    else
    {
        result = b;
        result->next = Merge(a,b->next);
    }
    return result;
}

node* List::MergeSort(node *head)
{
    if(!head || !head->next)
        return head;
    node* second = split(head);
    head = MergeSort(second);
    return Merge(head, second);
}

void List::deleteNode(int deletedNode)
{
	node *n = new node;
	node *p = new node;
	n = head;
	p = head;

	while(p->next != NULL)
	{
		if(n->data == deletedNode)
		{
			p->next = n->next;
			delete n;
			break;
		}
		else{
			p = n;
			n = n->next;
		}
	}
}

void List::printPath()
{
	node *n;
	n = head;
	cout<<"===CURRENT PATH==="<<endl;
	while (n != NULL) {
		cout<<n->data<<"->";
		n = n->next;
	}
	cout<<"NULL"<<endl;
	cout << "=================" << endl;
}

void List::addNode(int nodeData)
{
	node* n = new node;
	n->data = nodeData;
	current->next = n;
	current = current->next;
}

void List::insertnode(int newNode, int previousNode)
{
	node *n = new node;
	n = head;
	node *p = new node;
	p->data = newNode;
	while(n != NULL)
	{
		if(n->next->data == previousNode)
		{
			p->next = n->next;
			n->next = p;
			break;
		}
		else
		{
			n = n->next;
		}
	}
}

int List::LinkedListFindMax()
{
	//head = head ->next;
	node* temp = head;
	int max = temp->data;
	while(temp->next != NULL)
	{
		if(temp->data > max){
			max = temp->data;
		}
		temp = temp->next;
	}
	if(temp -> next == NULL)
	{
		if(temp->data > max)
		{
			max = temp->data;
		}
	}
	cout<<max<<endl;
	return max;
}

int List::LinkedListFindMin()
{
	//head = head->next;
	node* temp = head;
	int min = temp->data;
	while(temp->next != NULL)
	{
		if(temp->data<min)
		{
			min = temp->data;
		}
		temp = temp->next;
	}
	if(temp->next == NULL)
	{
		if(temp->data < min)
		{
			min = temp->data;
		}
	}
	cout<<min<<endl;
	return min;
}
int List::LinkedListSum()
{
	node* x = head
	int sum = 0;
	while(x != NULL)
	{
		sum = sum + x->data;
		x = x->next;
	}
	return x;
}
