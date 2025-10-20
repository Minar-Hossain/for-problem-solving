#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *two = malloc(sizeof(struct node));
    two -> data = 20;
    two -> link = NULL;
    struct node *there = malloc(sizeof(struct node));
    there -> data = 30;
    there -> link = NULL;
    two -> link = there;
    // insert new node at the beginning

    struct node *head = malloc(sizeof(struct node));
    head -> data = 10;
    head -> link = two;
    two = head;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ",ptr -> data);
        ptr = ptr -> link;
    }
    printf("NULL \n");

    return 0; }
    