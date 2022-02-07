#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *ptr, *new_node, *temp;
void insert();
void display();
void main()
{
    struct node *head, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
}

void insert()
{
    int val;
    while (val != -1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        temp = (struct node *)malloc(sizeof(struct node));
        if (head->data == NULL)
        {
            printf("\nEnter a value:  ");
            scanf("%d", &val);
            head->data = val;
            head->next = NULL;
        }
        else
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            new_node->data = val;
            if (temp == NULL)
            {
                new_node->next = NULL;
                head-> next = new_node;
            }
            else
            {
                new_node -> next = NULL;
                temp = new_node;
                
            }
        }
    }
}
void display()
{
    ptr = head;
    ptr = (struct node *)malloc(sizeof(struct node));
    while (ptr != NULL)
    {
        printf("\n");
        printf("| %d | ->  ", ptr->data);
        ptr->next;
    }
}