#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void iterate(struct node *head)
{
    int i = 0;
    while (head != NULL)
    {
        printf("%d\n", head->data);
        i++;
        head = head->next;
    }
    printf("Total number of elements in List are:%d", i);
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;
    iterate(head);
}