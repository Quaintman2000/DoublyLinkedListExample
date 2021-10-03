#include<iostream>
#include<string>
#include "DoublyLinkedList.h"
#include "Node.h"


using namespace std;

int main()
{
	DoublyLinkedList<int> integerList;

	integerList.Insert(1);
	integerList.Insert(2);
	integerList.Insert(3);
	integerList.Insert(4);

	integerList.PrintForward();

	return 0;
}