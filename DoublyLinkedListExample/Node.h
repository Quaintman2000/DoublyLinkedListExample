#pragma once
#include <iostream>

using namespace std;

// Declaring the node class.
template<class Z> class Node
{

	// Stores the key.
public: int key;
	// Stores the data.
	 Z data;
	// Points to the next node.
	 Node* next;
	// Points to the prev node.
	 Node* prev;
	

	 Node();
	 Node(int k, Z d);
};