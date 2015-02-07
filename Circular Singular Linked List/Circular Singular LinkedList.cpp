/*
 * IntSLL.cpp
 *
 *  Created on: May 11, 2014
 *      Author: Ahmed
 */

#include "intSLL.h"
#include <iostream>
using namespace std;

void IntSLList::addToHead(int el) {
	if(isEmpty()) {
		tail = new IntSLLNode(el);
		tail->next = tail;
	} else {
		tail->next = new IntSLLNode(el, tail->next);
	}
} // end method addToHead


void IntSLList::addToTail(int el) {
	if(isEmpty()) {
		tail = new IntSLLNode(el);
		tail->next = tail;
	} else {
		tail->next = new IntSLLNode(el, tail->next);
		tail = tail->next;
	}
} // end method addToTail


int IntSLList::deleteFromHead() {
	int el = 0;
	if(!isEmpty()) {
		if(tail == tail->next) {
			el = tail->info;
			delete tail;
			tail = 0;
		} else {
			IntSLLNode *tmp = tail->next;  // can I find another way without using a *tmp pointer?
			tail->next = tmp->next;
			el = tmp->info;
			delete tmp;
		}
	} // check if the list is not empty
	return el;
} // end method deleteFromHead


int IntSLList::deleteFromTail() {
	int el = 0;
	if(!isEmpty()) {
		if(tail == tail->next) {
			el = tail->info;
			delete tail;
			tail = 0;
		} else {
			IntSLLNode *tmp;
			for(tmp = tail->next; tmp->next != tail; tmp = tmp->next);
			tail = tmp;
			tmp = tail->next;
			tail->next = tmp->next;
			el = tmp->info;
			delete tmp;
		}
	} // check if the list is not empty
	return el;
} // end method deleteFromTail

void IntSLList::printFromHead() {
	IntSLLNode *tmp = tail->next;
	while(tmp!=tail) {
		cout<<tmp->info<<", ";
		tmp = tmp->next;
	} // while
	cout<<tmp->info<<endl;
} // end method printFromHead
