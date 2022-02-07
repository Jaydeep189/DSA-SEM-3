#include<stdio.h>
void insert();
void delete();
void search();
int array[5], index=0;

void main(){
    int temp = 1, val;
    while(temp == 1){
        printf("\n 1. Insert \n 2. Delete \n 3. Search \n 4. Stop\n");
        scanf("%d", &val);
        if (val == 1){
            insert();
        }
        else if( val == 2){
            delete();
        }
        else if (val == 3){
            search();
        }
        else if (val == 4){
            temp = 2;
        }
        else {
            printf("\nEnter a valid value:  ");
        }
    }
}

void insert(){
    int num;
    printf("\n Enter a value to insert  :");
    scanf("%d", &num);
    array[index] = num;
    index++;  
     printf("\n");
    for (int i=0; i<= index; i++){
        printf("%d |", array[i]);
    } 
}
void delete(){
    int num;
    printf("\n Enter the value you want to delete:  ");
    scanf("%d", &num);
    for(int i=0; i <= index; i++){
        if (num == array[i]){
            array[i] = NULL;
        }
        else {
            continue;
        }
    }
    printf("\n");
     for (int i=0; i<= index; i++){
        printf("%d |", array[i]);
    } 
}

void search(){
        int num;
    printf("\n Enter the value you want to search:  ");
    scanf("%d", &num);
    for(int i=0; i <= index; i++){
        if (num == array[i]){
            printf("The value is at index value = %d", i);
        }
        else {
            continue;
        }
    }
    printf("\n");
     for (int i=0; i<= index; i++){
        printf("%d |", array[i]);
    } 
}