#include<iostream>
#include<string>
#include "DoublyLinkedList.h"
#include "Node.h"


using namespace std;

int main()
{
	//DoublyLinkedList<int> integerList;
	DoublyLinkedList integerList;
	// Displaying info to user.
	cout << "Inserting 1, 2, 3, and 4 into a doubly linked list." << endl;
	// Inserting the numbers.
	integerList.Insert(1);
	integerList.Insert(2);
	integerList.Insert(3);
	integerList.Insert(4);
	// Displaying info to user.
	cout << "Done! Now I'll print it out for you!" << endl;
	// Printing them out fowards.
	integerList.PrintForwardV2();
	// Displaying info to user.
	cout << "\nFinding 4..." << endl;
	// Finding 4 in the list.
	Node* nodeToFind = integerList.Find(4);
	// If it's found.
	if (nodeToFind != NULL)
	{
		// Displaying info to user.
		cout << "Found it! It was at key: " << nodeToFind->key << "!" << endl;
	}
	// Find the minimum and maximum key of the list.
	// Displaying info to user.
	cout << "The minimum key is: " << integerList.Minimum() << ", and the Maximum key is: " << integerList.Maximum() << "!" << endl;
	// Displaying info to user.
	cout << "\nNow I'm to to delete 3..." << endl;
	// Delete 3 from the list.
	integerList.Delete(integerList.Find(3));
	// Display new list.
	integerList.PrintForwardV2();
	// Displaying info to user.
	cout << "\nFinding 4 again..." << endl;
	// If 4 is found again.
	if (nodeToFind != NULL)
	{
		// Displaying info to user.
		cout << "Found it! It was at key: " << nodeToFind->key << "!" << endl;
	}
	// Find the new minimum and maximum key of the list.
	// Displaying info to user.
	cout << "The minimum key is: " << integerList.Minimum() << ", and the Maximum key is: " << integerList.Maximum() << "!" << endl;

	// End program.
	return 0;
}