#pragma once
#include "Node.h"
#include <iostream>
#include <string>
#include "DoublyLinkedList.h"

// Declare the namespace.
using namespace std;

template<class T> class DoublyLinkedList
{

	// Stores the key.
public: int listKey;
	// The head node in the list.
 Node<T>* head;
	// The tail node in the list.
	 Node<T>* tail;
	// The new node in the list.
	 Node<T>* n;
	// Constructor.
	 DoublyLinkedList();

	// Returns a pointer to the node whose key matches dataToFind.
	 Node<T>* Find(T dataToFind);
	// Inserts a new node at the end of the list with a key equal to newData.
	 void Insert(T newData);
	// Deletes the node that delNode points to from the list.
	 void Delete(Node<T>* nodeToDelete);

	// Extra Credit.
	// Returns the minimum key in the list
	 int Minimum();
	// Returns the maximum key in the list.
	 int Maximum();
	// Prints out the list from head to tail end.
	 void PrintForward();

	
};



