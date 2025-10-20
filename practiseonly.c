#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *one = malloc(sizeof(struct node));
    one -> data = 10;
    one -> link = NULL;
    struct node *two = malloc(sizeof(struct node));
    two -> data = 20;
    two -> link = NULL;
    two -> link = one;
// Insert a new node at last 
    struct node *there = malloc(sizeof(struct node));
    there -> data = 30;
    there -> link = NULL;
// find last node in this linked list 
struct node *ptr = one;
while (ptr -> link != NULL){
   ptr = ptr -> link;
}
ptr -> link = there;

struct node *print = one;
     while (print != NULL){
         printf("%d -> ", print -> data);
         print = print -> link;
     }
    printf("NULL \n");

    return 0; }
    