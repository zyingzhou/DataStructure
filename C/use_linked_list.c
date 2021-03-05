/**
 * 使用链表
 * Author: zhiying
 * Date: 2021.3.2
 */
#include <stdio.h>
#include "LinkedList/list.h"

int main(){
    List L;
    L.head = NULL;
    L.last = NULL;
    printf("链表是否为空:%d\n", isEmpty(&L));
    add(&L, 2);
    add(&L, 4);
    add(&L, 5);
    add(&L, 8);
    printf("链表是否为空:%d\n", isEmpty(&L));
    if (!isEmpty(&L)){
        printf("链表不为空, 链表的长度为%d\n", size(&L));
    }
    printf("元素8在链表中的位置%d\n", find(&L, 8));
    Node *node = search(&L, 3);
    printf("查找第3个节点的值为：%d\n", node->data);
//    insert(&L, 17, 3);
    delete(&L, 5);
    node = search(&L, 3);
    printf("查找第3个节点的值为：%d\n", node->data);
    // clear memory
    reset(&L);
    return 0;
}

