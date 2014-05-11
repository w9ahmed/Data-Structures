/*
 * intSLLst.cpp
 *
 *  Created on: Apr 30, 2014
 *      Author: Ahmed
 */

#include <iostream>
#include "intSLLst.h"
using namespace std;

IntSLList::~IntSLList() {
	for(IntSLLNode *p; !isEmpty();) {
		p = head->next;
		delete head;
		head = p;
	}
} // end deconstructor

void IntSLList::addToHead(int el) {
	head = new IntSLLNode(el, head);
	if(tail == 0)
		tail = head;
} // end method addToHead

void IntSLList::addToTail(int el) {
	if(tail != 0) {
		tail->next = new IntSLLNode(el);
		tail = tail->next;
	}
	else
		head = tail = new IntSLLNode(el);
} // end method addToTail

int IntSLList::deleteFromHead() {
	int el = head->info;
	IntSLLNode *tmp = head;
	if(head == tail)
		head = tail = 0;
	else
		head = head->next;
	delete tmp;
	return el;
} // end method deleteFromHeade

int IntSLList::deleteFromTail() {
	int el = tail->info;
	if(head == tail) {
		delete head;
		head = tail = 0;
	}
	else {
		IntSLLNode *tmp;
		for (tmp = head; tmp->next != tail; tmp = tmp->next);
		delete tail;
		tail = tmp;
		tail->next = 0;
	}
	return el;
} // end method deleteFromTail

void IntSLList::deleteNode(int el) {
	if(head == tail && el == head->info) {
		delete head;
		head = tail = 0;
	}
	else if (el == head->info) {
		IntSLLNode *tmp = head;
		head = head->next;
		delete tmp;
	}
	else {
		IntSLLNode *pred, *tmp;
		for(pred = head, tmp = head->next;
				tmp != 0 && !(tmp->info == el);
				pred = pred->next, tmp = tmp->next);
		if(tmp != 0) {
			pred->next = tmp->next;
			if(tmp == tail)
				tail = pred;
			delete tmp;
		}
	}
} // end method deleteNode

bool IntSLList::isInList(int el) const {
	IntSLLNode *tmp;
	for(tmp = head; tmp !=0 && !(tmp->info == el); tmp->next);
	return tmp != 0;
} // end method isInList

int IntSLList::length() {
	int count = 1;
	if(head != 0) {
		count+=1;
		IntSLLNode *tmp;
		for(tmp = head; tmp != tail; tmp = tmp->next)
			count++;
	}
	return count;
} // end method length

