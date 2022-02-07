#include<stdlib.h>
#include<stdio.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top;
struct stack *ptr;
void push();
void pop();
void display();
void main(){
    int temp = 0,val;
    while (temp == 0)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d", &val);
        if (val == 1){
            push();
        }else if(val == 2){
           pop();
        }else if(val == 3){
            display();
        }else{
           break;
        }
    }   
}
void push(){
    int val;
    printf("\nEnter the value to insert: ");
    scanf("%d", &val);
    if (top == NULL){
        top = (struct stack*)malloc(sizeof(struct stack));
        top -> data = val;
        top -> next = NULL;
    }else {
        struct stack *newnode;
        newnode = (struct stack*)malloc(sizeof(struct stack));
        newnode -> data = val;
        newnode -> next = top;
        top = newnode;
    }
    display();
}
void pop(){
    if(top == NULL){
        printf("\n Stack is empty");
    }else{
        ptr = top -> next;
        free(top);
        top = ptr;
        display();
    }
}
void display(){
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else{
        ptr = top;
        while (ptr -> next != NULL)
        {
            printf("%d  -> ", ptr->data);
            ptr = ptr -> next;
        }
        
    }
    
}