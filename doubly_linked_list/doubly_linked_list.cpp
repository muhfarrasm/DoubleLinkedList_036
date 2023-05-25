#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedList
{
private:
	Node* START;
public:

	DoubleLinkedList();
	void addNode();
	bool search(int rollNo, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void ascending();
	void descending();
	void hapus();
	void searchdata();
};

DoubleLinkedList::DoubleLinkedList()
{
	START = NULL;
}

void DoubleLinkedList::addNode()
{
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student :";
	cin >> nim;
	cout << "\nEnter the roll name of the student :";
	cin.ignore();
	getline(cin, nm);
	Node* newNode = new Node();
	newNode->noMhs = nim;
	newNode->name = nim;

	

}