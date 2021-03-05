/**
 * 链表实现
 * Author: zhiying
 * Date: 2021.3.2
 */
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

// methods

void add(List *L, int elem){
    Node *node = (Node *)malloc(sizeof(Node));

    if (node == NULL){
        printf("内存分配失败\n");
        return;
//        printf("Error in func:%s", __func__);
    }
    node->data = elem;
    node->next = NULL;

    if (L->head == NULL){
        L->head = node;
        L->last = node;

    }else{
        Node *p = L->last;
        p->next = node;
        L->last = node;
    }

}
void insert(List *L, int elem, int position){

    Node *p = L->head;
    // 生成一个新的node
    Node *node = (Node *)malloc(sizeof(Node));

    int idx = 1;

    if (idx == position){
        L->head = node;
        node->next = p->next;
        return;
    }

    while (p != NULL){
        idx ++;
        Node *prev = p;

        p = p->next;
        idx ++;

        if (idx == position){
            prev->next = node;
            node->next = p;
            break;
        }
    }

}
void delete(List *L, int elem){
    Node *p = L->head;

    // delete head node
    if (p != NULL && p->data == elem){
        L->head = p->next;
        free(p);
        return;
    }

    while (p != NULL){
        Node *prev = p;

        p = p->next;
        if (p->data == elem){
            prev->next = p->next;
            free(p);
            break;
        }

    }
}
int isEmpty(List *L){

    int empty  = 0;

    if (L->head == NULL){
        empty = 1;
    }

    return empty;
}
Position find(List *L, int elem){
    Position position = 0;
    Node *p = L->head;

    while (p != NULL){
        position ++;

        if (p->data == elem){
            break;
        }
        p = p->next;
    }
    return position;
}
Node* search(List *L, int th){
    int idx = th;
    Node *node = L->head;

    while (node != NULL){
        idx--;

        if (idx == 0){
            break;
        }
        node = node->next;
    }

    return node;
}
void reset(List *L){
    Node *p = L->head;

    while (p != NULL){
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }
}

/**
 * 返回链表的长度
 * @param L 链表
 * @return 　链表的长度
 */
int size(List *L){
    int len = 0;

    Node *p = L->head;

    while (p != NULL){
        len ++;
        p = p->next;
    }

    return len;
}