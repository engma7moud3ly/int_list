/*
 *the library implements new data structure (int_list)
 *And provides useful insertion/deletion/count functions.
 * By : Mahmoud Aly
 * engma7moud3ly@gmail.com
 */

#ifndef INT_LIST_H
#define INT_LIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node int_list;

//create new list and return the reference
//ex : int_list myList=new_list()
//creat new int_list with name myList
struct Node *new_list();

//delete elements from the list by index
//ex : myList=del(myList,2)
//delete the element which index is 2 (3rd element)
struct Node *del(struct Node *node, int index);

//insert new elements to the list
//ex : add(myList,1);add(myList,2)
//insert values 1,2 to the list
void add(struct Node *node, int data);

//update elements in the list
//ex : set(myList,1,100);
//set the element which index is 1 (2nd element) = 100
void set(struct Node *node, int index, int data);

//get the list size
//ex : int n=count(myList)
int count(struct Node *node);

//return element from the list by index
//ex : int el=get(myList,0)
//get the element 1 in myList
int get(struct Node *node, int index);

//print list elements with spaces.
void list_print(struct Node *n);

//print list elements with lines.
void list_println(struct Node *n);

#endif