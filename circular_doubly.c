#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void iterate(struct node *p)
{
    struct node *it = p;
    do
    {
        printf("%d\n", it->data);
        it = it->next;
    } while (it != p);
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 0;
    head->next = first;

    first->data = 10;
    first->next = second;
    first->prev = head;

    second->data = 20;
    second->next = head;
    second->prev = first;

    iterate(head);
}