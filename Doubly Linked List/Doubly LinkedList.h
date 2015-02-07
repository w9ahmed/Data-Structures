#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

class DLLNode {
public:
	DLLNode() {
		info = 0;
		next = prev = 0;
	}
	DLLNode(int el, DLLNode *n = 0, DLLNode *p = 0) {
		info = el;
		next = n;
		prev = p;
	}

	int info;
	DLLNode *next, *prev;
};

/* **************************************************** */

class DoublyLinkedList {
public:
	DoublyLinkedList() {
		head = tail = 0;
	}

	void addToDLLHead(int);
	void addToDLLTail(int);
	void deleteNode(int);
	int deleteFromDLLHead();
	int deleteFromDLLTail();

	int length();
	void printDLLItems();

protected:
	DLLNode *head, *tail;
};

#endif
