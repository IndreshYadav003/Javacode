#include<stdio.h>
#include<conio.h>
//#include <stdlib.h>
// Creating a node
struct node {
  int value;
  struct node *next;
} ;
// print the linked list value
void printLinkedlist(struct node *ptr) {
  while (ptr != NULL) {
    printf("%d ", ptr->value);
    ptr = ptr->next;
  }
  printf("\n");
}
struct node *insertbegin(struct node *start)
{
struct node *newnode,*ptr;
int num;
printf("\nEnter the data=");
scanf("%d",&num);
newnode=(struct node*)malloc(sizeof(struct node*));
newnode->value=num;
newnode->next=NULL;
ptr=start;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=newnode;
return start;
}

int main() {
  // Initialize nodes
  struct node *stnode;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  struct node *four=NULL;
  struct node *five=NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
 four = malloc(sizeof(struct node));
  five = malloc(sizeof(struct node));

  // Assign value values
  one->value = 9;
  two->value = 5;
  three->value = 8;
  four->value=7;
  five->value=5;
// Connect nodes
  one->next = two;
  two->next = three;
  three->next = four;
  four->next=five;
  five->next=NULL;
// printing node-value
  stnode = one;
  printf("Given linked list=");
 printLinkedlist(stnode);
 printf("After adding new node at end of linked list");
  int *ptr=insertbegin(stnode);
  printLinkedlist(ptr);
}