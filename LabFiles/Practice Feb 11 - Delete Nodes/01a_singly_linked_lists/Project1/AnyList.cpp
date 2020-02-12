#include "AnyList.h"

using namespace std;

	//constructor
AnyList::AnyList()
{
	ptrToFirst = nullptr;
	count = 0;
}

	//insertFront
void AnyList::insertFront(int newData)
{	
	//Node *ptrToNewNode = new Node;	//create a pointer named ptrToNewNode that
									// points to an unnamed node

	//ptrToNewNode->setData(newData);		//store data in the new node

	//ptrToNewNode->setPtrToNext(ptrToFirst);	//set new node's pointer to point to the first node

	//ptrToFirst = ptrToNewNode;		//make the new node be the "first" node

	//
	//	There is shorter way to write the statements above using the overloaded constructor:

/*			Node *ptrToNewNode = new Node(newData, ptrToFirst);
			ptrToFirst = ptrToNewNode;	*/	

	//	Or even better, without creating any pointers:
	//	    
			ptrToFirst = new Node(newData, ptrToFirst);
	//*/	

	++count;
}

void AnyList::deleteElem(int elem)
{
	//Node* current = ptrToFirst; ( Do not do that)
	// list is empty
	if (count == 0) //if(ptrToFirst == nullptr)
	{
		cerr << "List is empty.";
	}
	else
	{
		bool found = false;
		//if (the item is in the first node)
		if (ptrToFirst->getData() == elem)
		{
			Node* current = ptrToFirst;
			ptrToFirst = ptrToFirst->getPtrToNext();
			delete current;
			current = nullptr;
			found = true;
			--count;
		}
		//else (the elem is somewhere else in the list)
		else
		{
			Node* current = ptrToFirst->getPtrToNext();
			Node* trailCurrent = ptrToFirst;

			while (current != nullptr)
			{
				if (current->getData() == elem) //check elem
				{
					trailCurrent->setPtrToNext(current->getPtrToNext());
					delete current;
					current = nullptr;
					found = true;
					--count;
				}

				else //move forward
				{
					//current = current->getPtrToNext();
					//trailCurrent = trailCurrent->getPtrToNext;  (not effeciency)

					trailCurrent = current;
					current = current->getPtrToNext();
				}
			}
		}
		if (!found)
			cout << "The item is not in the list.";
	}
}






	//list has only 1 node

	//list has 2 nodes

	// list has a lot of nodes
	//elem somewhere in the middle or last

	//the elem is not fount


	//print
void AnyList::print() const
{
	if (ptrToFirst == nullptr) // check if the list is empty
							   // you can also use: if (count < 1)
		cerr << "List is empty.";  // use cerr, rather than cout (why?)
	else
	{
		Node *current = ptrToFirst;   //create a pointer to traverse the list	
									  //this pointer will start with the first node in the list

		while (current != nullptr)	//while the current pointer is NOT pointing to NULL
		{						    //  that is, the current pointer has not reached the 
			                        //  end of the list
			cout << current->getData() << " ";	//output the data 
			current = current->getPtrToNext();		//move the pointer current forward
		}
	}
}

	//destroyList - Does not delete the list object; it ONLY deletes the nodes.
void AnyList::destroyList()
{ 
    Node  *temp = ptrToFirst; //pointer to delete the node, starting with the first node
	
	while (ptrToFirst != nullptr)
    {
		ptrToFirst = ptrToFirst->getPtrToNext();
        delete temp;
		temp = ptrToFirst;
    }

	count = 0;
}

	//destructor
AnyList::~AnyList()
{
	destroyList();
}