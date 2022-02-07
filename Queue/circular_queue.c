#include<stdio.h>
int top = -1, end = -1;
int queue[5];
void insert();
void display();
void delete();
void main(){
    int temp = 1, val;

    while(temp == 1){
        printf("\n1. Insert \n2. Delete \n3. Display \n4. Stop \n");
        scanf("%d", &val);
        switch (val)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            temp = 2;
            break;        
        default:
            printf("\nEnter a valid input");
            break;
        }
    }
}

void insert(){
    int num;
    printf("\n Enter a value to Insert:  ");
    scanf("%d", &num);
    if (top == -1){
        top++;
        end++;
        queue[top] = num;
    }
    else if (end > 10){
        if (queue[0] != NULL){
            end = 0;
            queue[end] = num;
            end++;
        }
    }
    else if ((top == end) && queue[top+1] != NULL){
        if (queue[top] != NULL){
            printf("The Queue is Full");
        }
    }
    else {
        end++;
        queue[end] = num;
    }
    display();
}

void display(){
    printf("\n");
    if (top == -1 || top > end){
        printf("\n Queue is Empty");
    }
    else if (top == end){
        printf("\n%d", queue[top] );
    }
    else {
    for (int i = top; i <= end; i++){
        printf(" %d | ", queue[i] ); 
        }
    }
}

void delete(){
    if (top == -1){
        printf("\nQueue is Empty");
    }
    else{
        queue[top] = NULL;
        top++;
    }
    display();
}