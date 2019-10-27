#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

int main() {
    struct node *linked_list;
    printf("Printing empty linked_list:\n");
    print_list(linked_list);

    printf("=================================================================\n");

    printf("Adding #s 0-9 to linked_list.\n");
    for(int i = 0; i < 10; i++) {
        printf("adding %d to linked_list:\n", i);
        print_list(linked_list);
        printf("=> ");
        linked_list = insert_front(linked_list, i);
        print_list(linked_list);
    }
    printf("Freeing linked_list.\n");
    print_list(linked_list);
    printf("=> ");
    linked_list = free_list(linked_list);
    print_list(linked_list);
    printf("pointer to the beginning of linked_list: %s\n", linked_list);

    printf("=================================================================\n");

    printf("Adding #s 0-9 to linked_list.\n");
    print_list(linked_list);
    printf("=> ");
    for(int i = 0; i < 10; i++) {
        linked_list = insert_front(linked_list, i);
    }
    print_list(linked_list);
    for(int i = 9; i > -1; i--) {
        printf("removing %d from linked_list:\n", i);
        print_list(linked_list);
        printf("=> ");
        linked_list = remove_node(linked_list, i);
        print_list(linked_list);
    }

    printf("=================================================================\n");

    return 0;
}