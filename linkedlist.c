#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void create(struct node **main, int x);

int main() {
    int i, value;
    struct node *head = NULL, *temp;

    printf("\n\n to display enter a negative value\n\n");

    for (i = 0; i < 100000; i++) {
        printf("enter value in list : ");
        scanf("%d", &value);

        if (value >= 0)
            create(&head, value);
        else
            break;
    }

    temp = head;
    printf("%d \n\n\n",head->link->link->data);/*
    while (temp != NULL) {  // Fixed condition to print all nodes
        printf("%d ", temp->data);
        temp = temp->link;
    }*/

    return 0;
}

void create(struct node **main, int x) {
    struct node* new = (struct node*)malloc(sizeof(struct node)); // Allocate memory
    new->data = x;
    new->link = NULL;

    if (*main == NULL) {  // If list is empty
        *main = new;
    } else {
        struct node *last = *main;
        while (last->link != NULL) { // Traverse to last node
            last = last->link;
        }
        last->link = new;
    }
}