#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** pointerToHead, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->next = *pointerToHead;
    *pointerToHead = temp;
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
