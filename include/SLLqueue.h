/* Insides of Queue data srtucture with base SSL */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <stdbool.h>
#include <stdarg.h>
#include <math.h>


#ifndef SSL_QUEUE_H
#define SSL_QUEUE_H

#define MAXSIZE pow(2, 31)

// Defining a macrose for handling popular error
#define _MEMORY_ALLOCATION_ERROR panic("%s:%d: in '%s': could not allocate memory", __FILE__, __LINE__, __FUNCTION__);

// Node structure
typedef struct Node_type {
    void* value;
    struct Node_type* next;
} Node;

// Queue data structure, based on Linked List
typedef struct Queue_type {
    size_t size;
    Node* front;
    Node* back;
} Queue;


// New queue creation
static Queue* queueNew();

// New queue creation using a given array
static Queue* queueFromArr(int* array, int size);

// New node creation
static Node* nodeNew(void* value);

// Showing an error message
static void panic(const char* message, ...);

// Appending an element to the end of queue
void enqueue(Queue* queue, void* item);

// Remove and return first element of queue
void* dequeue(Queue* queue);

// Getting the first element of queue
void* queueFront(Queue* queue);

// Getting the last element of queue
void* queueRear(Queue* queue);

// Getting the size of queue
size_t queueSize(Queue* queue);

// Checking if queue is empty or not
bool queueIsEmpty(Queue* queue);

// Checking if queue is full or not
bool queueIsFull(Queue* queue);

// Checks if the size of queue is less than the MAXSIZE or not
bool queueSizeIsValid(Queue* queue);

// Clearing a given queue
static void queueClear(Queue* queue);

// Deleting a given queue
static void queueDelete(Queue* queue);


#endif // SSL_QUEUE_H
