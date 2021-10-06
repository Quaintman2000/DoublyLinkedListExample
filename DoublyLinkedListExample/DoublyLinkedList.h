#pragma once
#include "Node.h"
#include <iostream>
#include <string>

// Declare the namespace.
using namespace std;

//template<class T> 
class DoublyLinkedList
{
public:
	// Stores the key.
	int listKey;
	// The head node in the list.
	//Node<T>* head;
	Node* head;
	//// The tail node in the list.
	//Node<T>* tail;
	Node* tail;
	//// The new node in the list.
	//Node<T>* n;
	Node* n;
	// Constructor.
	DoublyLinkedList();

	// Returns a pointer to the node whose key matches dataToFind.
	//Node<T>* Find(T dataToFind);
	Node* Find(int dataToFind);
	//// Inserts a new node at the end of the list with a key equal to newData.
	//void Insert(T newData);
	void Insert(int newData);
	//// Deletes the node that delNode points to from the list.
	//void Delete(Node<T>* nodeToDelete);
	void Delete(Node* nodeToDelete);

	//// Extra Credit.
	//// Returns the minimum key in the list
	int Minimum();
	//// Returns the maximum key in the list.
	int Maximum();
	//// Prints out the list from head to tail end.
	//void PrintForward();
	void PrintForwardV2();
};



