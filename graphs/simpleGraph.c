#include<stdio.h>
#include<stdlib.h>
struct graph
{
    int data;
    struct graph *left;
    struct graph *right;
};
struct graph *root;
struct graph *ptr;
void addNode();
void CreateRoot();
void printTree();
void main(){
    CreateRoot();
    addNode();
}
void addNode(){
    int val, flag=0;
  struct graph *first;
  first = (struct graph*)malloc(sizeof(struct graph));
  printf("\n Enter Data: ");
  scanf("%d", &val);
  if (root -> left == NULL && root -> right == NULL){
      if (first -> data > root -> data){
          root -> right = first;
      }else{
          root -> left = first;
      }   
  }else if(root -> right == NULL) {
      if(first -> data > root -> data){
           root -> right = first;
      }else{
        ptr = root;
          while (ptr -> left != NULL)
          {
              ptr = ptr -> left;
              if (ptr -> data < first -> data){
                  if (ptr -> right == NULL){
                      ptr -> right = first;
                      flag = 1;
                      break;
                  }
              }
          }
          if (flag == 0)
          {
          ptr -> left = first;
          }
          flag = 0;
      }
  }else if (root -> left == NULL){
      if(first -> data < root -> data){
           root -> left = first;
      }else{
        ptr = root;
          while (ptr -> right != NULL)
          {
              ptr = ptr -> right;
              if (ptr -> data > first -> data && ptr -> left == NULL)
              {
                  ptr -> left = first;
                  flag = 1;
                  break;
              }
              
          }
          if (flag == 0)
          {
          ptr -> left = first;
          }
          flag = 0;
      }
  }
}

void CreateRoot(){
  int val;
  root = (struct graph*)malloc(sizeof(struct graph));
  printf("\n Enter Data: ");
  scanf("%d", &val);
  root -> data;
}

void printTree(){
    while (root -> left != NULL || root -> right != NULL)
    {
        printf("\n <- %d -> ", root->data);
        printf("\n%d             %d", root->left->data, root->right->data);
        if (root -> left != NULL){
            root = root -> left;
        }
        else if (root -> right != NULL){
            root = root -> right;
        }
        else{
            break;
        }
    }
    
}