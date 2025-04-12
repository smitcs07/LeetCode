#include<stdio.h>
// typedef struct node{
//   int item;
//   node *next;
//   node *prev;
// }node;

//   node* create(int data){
//     node *newnode = malloc(sizeof(node*));
//     newnode->item = data;
//     newnode->next = NULL;
//     newnode->prev = NULL;
//     return newnode;
//   }

//   node *insert(node *start,int item){
//     node* newnode = create(item);
//     newnode->next = start;
//     if (start != NULL) {
//         start->prev = newnode;
//     }
//     return newnode;
//   }

//   node *reverse(node * start){
//     if(start==NULL) return NULL;
//     node* end = start;
//     node* trav = start;
//     int temp;
//     int i=0;
//     while(end->next!=NULL){
//       end = end->next;
//       i++;
//     }
//     for(int j=0;j<=i/2;j++){
//       if(end!= trav){
//       temp = end->item;
//       end->item = trav->item;
//       trav->item = temp;
//       end = end->prev;
//       trav = trav->next;
//       }
//     }
//    return start; 
//   }
//   int print(node* start){
//     if(start != NULL) return -1;
//     node *temp = start;
//     while(temp !=NULL){
//       printf("%d ",temp->item);
//       temp = temp->next;
//     }
//   }
// int main(){
//   int data;
//   node *start = NULL;
//   insert(start,92);
//   insert(start,29);
//   insert(start,2);
//   insert(start,20);
//   insert(start,24);
//   reverse(start);
//   print(start);
// }
