/**
 * 链表头文件
 * Author: zhiying
 * Date: 2021.3.2
 *
 */

#ifndef DATA_STRUCTURE_IN_C_LIST_H
#define DATA_STRUCTURE_IN_C_LIST_H

#define Position int

struct _node{
    int data;
    struct _node *next;
};

typedef struct _node Node;

typedef struct {
    Node *head;
    Node *last;
//    int len;
}List;

// methods
void add(List *L, int elem);
void insert(List *L, int elem, int position);
void delete(List *L, int elem);
int isEmpty(List *L);
Position find(List *L, int elem);
Node* search(List *L, int th);
void reset(List *L);
int size(List *L);

#endif //DATA_STRUCTURE_IN_C_LIST_H
