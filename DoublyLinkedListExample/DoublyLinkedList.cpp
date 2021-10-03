#include "DoublyLinkedList.h"
#include "Node.h"


template<class T>
inline DoublyLinkedList<T>::DoublyLinkedList()
{
	int listKey;
	head = NULL;
	tail = NULL;
	n = NULL;
}

template<class T>
inline Node<T>* DoublyLinkedList<T>::Find(T dataToFind)
{
	return nullptr;
}

template<class T>
inline void DoublyLinkedList<T>::Insert(T newData)
{
	// Make a new node.
	n = new Node<T>();

	// Add on to the key index.
	n->key = listKey + 1;

	// Check if this is the first member of the list.
	if (head == NULL)
	{
		// If so, create a new node an set that to be the head and tail.
		head = n;
		tail = n;
		// Set the data to be the newData.
		head->data = newData;
	}
	// If not, create a new node at the end of the list.
	else
	{
		// Set the data to be the newData.
		n->data = newData;
		// Set the previous pointer to the previous node.
		n->prev = tail;
		// Set the previous node's "next" pointer to this node.
		tail->next = n;
		// Advance the tail to the latest node.
		tail = n;
	}
}

template<class T>
inline void DoublyLinkedList<T>::Delete(Node<T>* nodeToDelete)
{
}


// Extra credit functionalities.
template<class T>
int DoublyLinkedList<T>::Minimum()
{
	return 0;
}

template<class T>
int DoublyLinkedList<T>::Maximum()
{
	return 0;
}

template<class T>
void DoublyLinkedList<T>::PrintForward()
{
	// Set the head as the temporary pointer.
	Node<T>* temp = head;

	// While loop through the whole list until the temp pointer points to NULL.
	while (temp != NULL)
	{
		// Print out the data seperated by commas.
		cout << temp->data << ", ";
		// Set the temp to be the next node.
		temp = temp->next;
	}

	// When the loop is done, end the line.
	cout << endl;
}
