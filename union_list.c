#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head;
void create(int n)
{
    struct node *temp, *newNode;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter data for first node: ");
    scanf("%d", &data);

    // Assiging data to the first node
    head->data = data;
    head->next = NULL;

    // Creating copy of head to manipulate on each iteration
    temp = head;

    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;

        temp->next = newNode;
        temp = temp->next;
    }
}

void travers()
{
    struct node *tempp;
    tempp = head;
    while (tempp != NULL)
    {
        printf("Data of List: %d\n", tempp->data);
        tempp = tempp->next;
    }
}
int main()
{
    int ele;
    printf("How many elemets you want:");
    scanf("%d", &ele);
    create(ele);

    printf("Elements of list:\n");
    travers(head);
}

