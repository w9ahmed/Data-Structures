#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode {
public:
	int info;
	IntSLLNode *next;
	IntSLLNode(int el, IntSLLNode *ptr = 0) {
		info = el;
		next = ptr;
	} // end constructor
};

/* ************************************************* */

class IntSLList {
public:
	IntSLList() { head = tail = 0; }
	~IntSLList(); // deconstructor
	int isEmpty() {
		return head == 0;
	} // end method isEmpty

	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;
	int length();
private:
	IntSLLNode *head, *tail;
};

#endif
