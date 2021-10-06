#pragma once
#include <iostream>

using namespace std;

// Declaring the node class.
//template<class Z> 
class Node
{

	
public: 
	// Stores the key.
	int key;
	// Stores the data.
	 //Z data;
	int data;
	// Points to the next node.
	 Node* next;
	// Points to the prev node.
	 Node* prev;
	
	 // Constructors.
	 Node();
	 //Node(int k, Z d);

};