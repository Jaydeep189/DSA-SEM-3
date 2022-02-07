#include<stdio.h>
#include<stdlib.h>
void display();
void insert();
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *root;
struct tree *ptr;
void main(){
    int temp = 0;
    while (temp == 0)
    {
        insert();
    }
}
void insert(){
    int val;
    printf("\nEnter the data you want to insert:  ");
    scanf("%d", &val);
    if (root == NULL){
        root -> data = val;
        root -> left = NULL;
        root -> right = NULL;
    }else{
        if (val < root->data && root -> left == NULL){
            root -> left = val;
        }else if (val > root->data && root ->right == NULL)
        {
            root -> right = val;
        }else if (val < root->data)
        {
            ptr = root;
            while (ptr -> left != NULL)
            {
                if (ptr->left->data < val){
                    ptr->left->left = val;
                }
            }       
        }
        
        
    }
}
