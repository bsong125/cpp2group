#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			

class Node
{
public:
	Node() : data(0), ptrToNext(nullptr) {}
	Node(int theData, Node *newPtrToNext) 
		: data(theData), ptrToNext(newPtrToNext){}
	Node* getPtrToNext() const { return ptrToNext; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setPtrToNext(Node *newPtrToNext) 
		{ ptrToNext = newPtrToNext; }
	~Node(){}
private:
    int data;		
    Node *ptrToNext;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	

	void insertFront(int);

	void deleteElem(int);

	void print() const;

	void destroyList();
	~AnyList();

private:
	Node *ptrToFirst; //pointer to point to the first node in the list
	int count;	      //keeps track of number of nodes in the list
};

#endif