#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** pointerToHead, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    struct Node* temp1 = *pointerToHead;
    temp->data = data;
    temp->next = NULL;
    if(*pointerToHead == NULL){
    *pointerToHead = temp;
    return;
    }

    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
    return;
}
void Print(struct Node* head){
    printf("List is :");
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
   struct Node* head =NULL;
    int n,i,x;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&x);
        Insert(&head, x);
        Print(head);

    }
}
