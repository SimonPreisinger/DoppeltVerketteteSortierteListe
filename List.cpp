//
// Created by Simon on 27.01.2018.
//

#include "List.h"

void List::deleteElem(const int deleteVal) {
    auto current = head;
    if(current->value == current->value){
        if(current->next == nullptr){
            head = nullptr;
        return;
        }
    }
    while (current != nullptr){
        if(current->value != deleteVal){
            current = current->next;
            continue;
        }

        // found element to delete
        if(current->next == nullptr){
            auto prev = current->prev;
            current->prev = nullptr;
            prev->next = nullptr;
            delete current;
            return;
        }
        else if(current->prev == nullptr){
            head = current->next;
            head->prev = nullptr;
            delete current;
            return;
        } else {
            auto next = current->next;
            auto prev = current->prev;
            prev->next = next;
            next->prev = prev;
            delete current;
            return;
        }
    }
}

void List::insert(const int insertVal) {
    auto insertElem = new Elem(insertVal); // kein element in liste
    if(head == nullptr){
        head = insertElem;
        return;
    }
    auto current = head;
    if(current->next == nullptr){ // ein element in liste
        if(current->value >= insertElem->value){
            head = insertElem;
            insertElem->next = current;
            current->prev = insertElem;
        }
        else {
            current->next = insertElem;
            insertElem->prev = current;
        }
        return;
    }

    while (current != nullptr)
    {
        if(insertVal <= head->value){
            auto next = head;
            head = insertElem;
            insertElem->next = next;
            next->prev = insertElem;
            return;
        }
        if(insertVal >= current->value) {
            auto next = current->next;
            current->next = insertElem;
            insertElem->next = next;
            next->prev = insertElem;
            insertElem->prev = current;
            return;
        }
        current = current->next;
    }
}

bool List::search(const int searchVal) const {

    auto current = head;
    while (current != nullptr){
        if(current->value == searchVal)
            return true;

        current = current->next;
    }
    return  false;
}


