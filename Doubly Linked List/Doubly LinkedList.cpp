/*
 * intDLLst.cpp
 *
 *  Created on: Apr 30, 2014
 *      Author: Ahmed
 */

#include "intDLLst.h"
#include <iostream>
using namespace std;

void DoublyLinkedList::addToDLLHead(int el) {
	if(head != 0) {
		head = new DLLNode(el, head);
		head->next->prev = head;
	} else
		head = tail = new DLLNode(el);
} // end method addToHead

void DoublyLinkedList::addToDLLTail(int el) {
	if(head != 0) {
		tail = new DLLNode(el, 0, tail);
		tail->prev->next = tail;
	}
	else
		head = tail = new DLLNode(el);
} // end method addToTail

int DoublyLinkedList::deleteFromDLLHead() {
	int el = head->info;
	if(head == tail) {
		delete head;
		head = tail = 0;
	}
	else {
		head = head->next;
		delete head->prev;
		head->prev = 0;
	}
	return el;
} // end method deleteFromHead

int DoublyLinkedList::deleteFromDLLTail() {
	int el = tail->info;
	if(head == tail) {
		delete head;
		head = tail = 0;
	}
	else {
		tail = tail->prev;
		delete tail->next;
		tail->next = 0;
	}
	return el;
} // end method deleteFromTail

void DoublyLinkedList::printDLLItems() {
	DLLNode *tmp;
	for(tmp = head; tmp != 0; tmp = tmp->next) {
		cout<<tmp->info<<" ";
	}
	cout<<endl;
} // end method printDLLItems

int DoublyLinkedList::length() {
	DLLNode *tmp;
	int count = 0;
	for(tmp = head; tmp != 0; tmp = tmp->next) {
			count++;
		}
	return count;
} // end method length

void DoublyLinkedList::deleteNode(int el) {
	if(head == tail && head->info == el) {
		delete head;
		head = tail = 0;
	}
	else if(head->info == el) {
		head = head->next;
		delete head->prev;
		head->prev = 0;
	}
	else if(tail->info == el) {
		tail = tail->prev;
		delete tail->next;
		tail->next = 0;
	}
	else {
		DLLNode *tmp;
		for(tmp = head->next; tmp!=tail && tmp->info!=el; tmp = tmp->next);
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		delete tmp;
	}
} // end method deleteNode


