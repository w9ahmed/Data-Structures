/*
 * intSLL.h
 *
 *  Created on: May 11, 2014
 *      Author: Ahmed
 */

#ifndef INTSLL_H_
#define INTSLL_H_

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
	IntSLList() { tail = 0; }
	//~IntSLList(); // deconstructor
	int isEmpty() {
		return tail == 0;
	} // end method isEmpty

	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;

	void printFromHead();

private:
	IntSLLNode *tail;
};

#endif /* INTSLL_H_ */
