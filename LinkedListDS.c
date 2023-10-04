//Aim: Write a Program to Insert , Delete and Reverse a Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* insert(struct Node* head, int elem, int n){
    if(n==0){
        struct Node* ans = (struct Node*)malloc(sizeof(struct Node));
        ans->data = elem;
        ans->next = head;
        return ans;
    }
    struct Node* ans = head;
    while(head->next!=NULL && n>1){
        head = head->next;
        n--;
    }
    struct Node* ins = (struct Node*)malloc(sizeof(struct Node));
    ins->data = elem;
    ins->next = head->next;
    head->next = ins;
    return ans;
}

struct Node* deleteat(struct Node* head, int n){
    if(n==0){
        return head->next;
    }
    struct Node* ans = head;
    while(head->next!=NULL && n>1){
        head = head->next;
        n--;
    }
    head->next = head->next->next;
    return ans;
}

void print(struct Node* head){
    while(head!=NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("Null\n");
}

struct Node* reverseLL(struct Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    struct Node* ans = head->next;
    head->next = NULL;
    while(ans->next!=NULL){
        struct Node* temp = ans->next;
        ans->next = head;
        head = ans;
        ans = temp;
    }
    ans->next = head;
    return ans;
}
int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 2;
    head->next = NULL;

    struct Node* head2 = (struct Node*)malloc(sizeof(struct Node));
    head2->data = 0;
    head2->next = NULL;
    head->next = head2;

    struct Node* head3 = (struct Node*)malloc(sizeof(struct Node));
    head3->data = 1;
    head3->next = NULL;
    head2->next = head3;

    struct Node* head4 = (struct Node*)malloc(sizeof(struct Node));
    head4->data = 7;
    head4->next = NULL;
    head3->next = head4;

    struct Node* head5 = (struct Node*)malloc(sizeof(struct Node));
    head5->data = 5;
    head5->next = NULL;
    head4->next = head5;

    print(head);
    insert(head, 9, 7);
    print(head);
    deleteat(head, 3);
    print(head);
    print(reverseLL(head));

    return 0;
}
