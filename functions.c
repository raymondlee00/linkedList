#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

void print_list(struct node *el) {
    printf("[ ");
    while(el) {
        printf("%d ", el->data);
        el = el->next;
    }
    printf("]\n");
}

struct node * insert_front(struct node *el, int val) {
    struct node *beginning = malloc(sizeof(struct node));
    beginning->data = val;
    beginning->next = el;
    return beginning;
}

struct node * free_list(struct node *el) {
    while(el) {
        struct node *next = el->next;
        free(el);
        el = next;
    }
    return el;
}   

struct node * remove_node(struct node *beginning, int data) {
    if(!beginning) return beginning;
    struct node *next = beginning->next;
    if(beginning->data == data) {
        struct node *dummy = next;
        return dummy;
    }
    beginning = remove_node(next, data);
    return beginning;
}