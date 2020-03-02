#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void Insert(struct Node** pointerToHead,int data, int n)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->next = NULL;
    if(n==1){
        temp->next = *pointerToHead;
        *pointerToHead = temp;
        return;
    }
    struct Node* temp1 = *pointerToHead;
    for(int i=0;i<n-2;i++){
        temp1 = temp1->next;
    }
    
    temp->next = temp1->next;
    temp1->next = temp;
    
}
void Print(struct Node* head){
    printf("List is :");
    while(head!= NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    int data,n;
    char ch;
    printf("Add a node (Y/n):");
    scanf("%c",&ch);
    while(ch !='N' || ch !='n'){
        scanf("%d %d", &data, &n);
        Insert(&head,data,n);
        Print(head);
    }
}
