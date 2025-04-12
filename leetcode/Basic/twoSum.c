#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int item;
  struct node *next;
  struct node *prev;
}node;

  node* create(int data){
    node *newnode = malloc(sizeof(node));
    newnode->item = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
  }

  node *insert(node *start,int item){
    node* newnode = create(item);
    newnode->next = start;
    if (start != NULL) {
        start->prev = newnode;
    }
    return newnode;
  }

  node* reverse(node * start){
    if(start==NULL) return NULL;
    node* end = start;
    node* trav = start;
    int temp;
    int i=0;
    while(end->next!=NULL){
      end = end->next;
      i++;
    }
    for(int j=0;j<=i/2;j++){
      if(end!= trav){
      temp = end->item;
      end->item = trav->item;
      trav->item = temp;
      end = end->prev;
      trav = trav->next;
      }
    }
   return start; 
  }
  int print(node* start){
    if(start == NULL) return -1;
    node *temp = start;
    while(temp !=NULL){
      printf("%d ",temp->item);
      temp = temp->next;
    }
    return 0;
  }
int main(){
  node *start = NULL;
  start = insert(start,92);
  start = insert(start,29);
  start = insert(start,2);
  start = insert(start,20);
  start = insert(start,24);
  printf("Original List: ");
  print(start);
  printf("\n");
  start = reverse(start);
  printf("Reversed List: ");
  print(start);
  return 0;
}
