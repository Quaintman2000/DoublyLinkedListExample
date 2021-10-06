#include "DoublyLinkedList.h"
#include "Node.h"


//template<class T>
//inline DoublyLinkedList<T>::DoublyLinkedList()
//{
//	int listKey;
//	head = NULL;
//	tail = NULL;
//	n = NULL;
//}

//template<class T>
//DoublyLinkedList<T>::DoublyLinkedList()
//{
//}

DoublyLinkedList::DoublyLinkedList()
{
	int listKey;
	head = NULL;
	tail = NULL;
	n = NULL;
}

Node* DoublyLinkedList::Find(int dataToFind)
{
	// Set the head as the temporary pointer.
	Node* temp = head;

	// While loop through the whole list until the temp pointer points to dataToFind.
	while (temp != NULL)
	{
		// Check to see if the temp's node's data = dataToFind.
		if (temp->data == dataToFind)
		{
			// If found, return the temp.
			return temp;
		}
		// Set the temp to be the next node.
		temp = temp->next;
	}
	// If it wasn't found, return null and print out an error message.
	cout << "Could not find the requested data within the list.\n Please try again!.";
	return NULL;
}
void DoublyLinkedList::Insert(int newData)
{
	// Make a new node.
	n = new Node();

	// Add on to the key index.
	listKey += 1;
	n->key = listKey;

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
void DoublyLinkedList::Delete(Node* nodeToDelete)
{
	// Store the node to be deleted.
	Node* temp = nodeToDelete;

	// If the node has a previous node.
	if (temp->prev)
	{
		// Set this node's previous node's next = this node's next.
		temp->prev->next = temp->next;
	}
	// If the node has a next node.
	if (temp->next)
	{
		// Set this node's next node's previous = this node's previous.
		temp->next->prev = temp->prev;
	}

	// Make sure if this is the head or tail.
	// If the head.
	if (temp == head)
	{
		head = temp->next;
	}
	// If this was the tail.
	else if(temp == tail)
	{
		tail = temp->prev;
	}

	// Subtract the key from this node's next nodes.
	while (temp != NULL)
	{
		temp->key -= 1;

		temp = temp->next;
	}

	
}

int DoublyLinkedList::Minimum()
{
	// Check to see if there's a head so there can be a minimum.
	if (head != NULL)
	{
		// return head key.
		
		return head->key;
	}
	else
	{
		cout << "There's no nodes in the list yet!" << endl;
	}
	return -1;
}

int DoublyLinkedList::Maximum()
{
	// Check to see if there's a tail so there can be a maximum.
	if (tail != NULL)
	{
		// return tail key.
		
		return tail->key;
	}
	else
	{
		cout << "There's no nodes in the list yet!" << endl;
	}
	return -1;
}
void DoublyLinkedList::PrintForwardV2()
{
	// Set the head as the temporary pointer.
	Node* temp = head;

	// While loop through the whole list until the temp pointer points to NULL.
	while (temp != NULL)
	{
		// Print out the data seperated by commas.
		cout << temp->data << " ";
		// Set the temp to be the next node.
		temp = temp->next;
	}

	// When the loop is done, end the line.
	cout << endl;
}
//
//template<class T>
//inline Node<T>* DoublyLinkedList<T>::Find(T dataToFind)
//{
//	return nullptr;
//}
//
//template<class T>
//inline void DoublyLinkedList<T>::Insert(T newData)
//{
//	// Make a new node.
//	n = new Node<T>();
//
//	// Add on to the key index.
//	n->key = listKey + 1;
//
//	// Check if this is the first member of the list.
//	if (head == NULL)
//	{
//		// If so, create a new node an set that to be the head and tail.
//		head = n;
//		tail = n;
//		// Set the data to be the newData.
//		head->data = newData;
//	}
//	// If not, create a new node at the end of the list.
//	else
//	{
//		// Set the data to be the newData.
//		n->data = newData;
//		// Set the previous pointer to the previous node.
//		n->prev = tail;
//		// Set the previous node's "next" pointer to this node.
//		tail->next = n;
//		// Advance the tail to the latest node.
//		tail = n;
//	}
//}
//
//template<class T>
//inline void DoublyLinkedList<T>::Delete(Node<T>* nodeToDelete)
//{
//}
//
//
//// Extra credit functionalities.
//template<class T>
//int DoublyLinkedList<T>::Minimum()
//{
//	return 0;
//}
//
//template<class T>
//int DoublyLinkedList<T>::Maximum()
//{
//	return 0;
//}
//
//template<class T>
//void DoublyLinkedList<T>::PrintForward()
//{
//	// Set the head as the temporary pointer.
//	Node<T>* temp = head;
//
//	// While loop through the whole list until the temp pointer points to NULL.
//	while (temp != NULL)
//	{
//		// Print out the data seperated by commas.
//		cout << temp->data << ", ";
//		// Set the temp to be the next node.
//		temp = temp->next;
//	}
//
//	// When the loop is done, end the line.
//	cout << endl;
//}
