#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int data;
  struct node* next;
}node;

node* createNode(node* start,int item){
  if(start==NULL){
    node* n1=(node*)malloc(sizeof(node));
    n1->data=item;
    n1->next=NULL;
  }
  else{
    node* n1=(node*)malloc(sizeof(node));
    n1->data=item;
    n1->next=NULL;

    node*temp = start;
    while(temp->next!=NULL){
      temp=temp->next;
    }
    temp->next=n1;
  }
  return start;
}

void display(node* start){
  node* temp = start;
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}

int main(){
  node* start1=NULL;
  start1=createNode(start1,55);
  start1=createNode(start1,5);
  start1=createNode(start1,45);

  node* start2=NULL;
  start2=createNode(start2,85);
  start2=createNode(start2,56);
  start2=createNode(start2,57);
  start2=createNode(start2,54);

  printf("The first node is: ");
  display(start1);
  printf("\nThe second node is: ");
  display(start2);
}

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct node {
//   int data;
//   struct node* next;
// } node;

// node* createNode(node* start, int item) {
//   node* n1 = (node*)malloc(sizeof(node));
//   n1->data = item;
//   n1->next = NULL;

//   if (start == NULL) {
//     return n1; // First node becomes head
//   }

//   node* temp = start;
//   while (temp->next != NULL) {
//     temp = temp->next;
//   }
//   temp->next = n1;
//   return start; // Return updated head
// }

// void display(node* start) {
//   node* temp = start;
//   while (temp != NULL) {
//     printf("%d ", temp->data);
//     temp = temp->next;
//   }
//   printf("\n");
// }

// int main() {
//   node* start1 = NULL;
//   start1 = createNode(start1, 55);
//   start1 = createNode(start1, 66);
//   start1 = createNode(start1, 77);

//   node* start2 = NULL;
//   start2 = createNode(start2, 11);
//   start2 = createNode(start2, 22);
//   start2 = createNode(start2, 33);
//   start2 = createNode(start2, 44);

//   printf("The first linked list is: ");
//   display(start1);

//   printf("The second linked list is: ");
//   display(start2);

//   return 0;
// }
