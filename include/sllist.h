/* Insides of Singly Linked List data structure */

#include "basic.h"

#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

#define listSize(x) (x->size)

// Node structure
typedef struct Node_type {
    void* data;
    struct Node_type* next;
} Node;

// Linked list structure, stores a pointer to linked nodes
typedef struct SLL_type {
    size_t size;
    Node* head;
    Node* tail;
} List;


// New list creation
List* listNew();

// New node creation
Node* nodeNew(void* value);

// Creating a new list from a given array
List* listFromArr(void** array, int size);

// Appending an element to the end of the list
void listPush(List* list, void* value);

// Appending an element to the beginning of the list
void listPrepend(List* list, void* value);

// Inserting an element at the specific position
void listInsert(List* list, void* value, size_t index);

// Remove last element of the list
void listRemoveEnd(List* list);

// Remove the first element of thee list
void listRemoveBegin(List* list);

// Remove an element standing at the specific position
void listRemoveAt(List* list, size_t index);

// Remove last element of the given list
void listRemoveLast(List* list, void* value);

// Remove the first element of the given list
void listRemoveFirst(List* list, void* value);

// Remove all elements with a given value
void listRemoveAll(List* list, void* value);

// Getting index of a given element
size_t listGetIndex(List* list, void* value);

// Getting value standing on a specific position
void* listGetAt(List* list, size_t index);

// Getting the first element of a given list
void* listGetBegin(List* list);

// Getting the last element of a given list
void* listGetEnd(List* list);

// Remove the last element from list and return it
void* listPop(List* list);

// Remove the first element from list and return it
void* listPoll(List* list);

// Getting the number of elements of the list with a given value
size_t listCount(List* list, void* value);

// Getting a substring from list, something like python's slice
List* listSublist(List* list, size_t begin_index, size_t end_index);

// Check if list contains given element or not
bool listContains(List* list, void* value);

// Making a shallow copy of a given list
List* listShallCopy(List* list);

// Making a deep copy of a given list
List* listDeepCopy(List* list);

// Reversing an list in-place 
void listReverseMut(List* list);

// Creating a copy, reversing it and return
List* listReverseNew(List* list);

// Swapping two elements by the given indexes
void listSwapByIndexes(List* list, size_t f_index, size_t s_index);

// Swapping two first elements with the given values
void listSwapValues(List* list, void* f_value, void* s_value);

// Replacing an element by index
void listReplaceByIndex(List* list, size_t index, void* value);

// Replacing an element by value
void listReplaceByValue(List* list, void* value_to_repl, void* value_for_repl);

// Extending one list by another one
void listExtend(List* f_list, List* s_list);

// Swapping two lists
void swapLists(List* f_list, List* s_list);

// Sorting a given list 'in-place' by a chisen sort function
void listSortMut(List* list, List*(*func)(List*));

// Creating a copy, sorting it by a chosen sort function and return
List* listSortNew(List* list, List*(*func)(List*));

// Clear list
void listClear(List* list);

// Remove list
void listDelete(List* list);


#endif // SINGLY_LINKED_LIST_H
