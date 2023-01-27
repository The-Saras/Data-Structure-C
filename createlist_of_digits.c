#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct node
{
    int data;
    struct node *next;
} *head;

void crete(int n)
{

       int arr[MAX];
    int i = 0;
    int j, r;

    // Till N becomes 0
    while (n != 0)
    {

        // Extract the last digit of N
        r = n % 10;

        // Put the digit in arr[]
        arr[i] = r;
        i++;

        // Update N to N/10 to extract
        // next last digit
        n = n / 10;
    }

    struct node *tempNode, *newNode;
    int data = arr[0];
    head = (struct node *)malloc(sizeof(struct node));

    // printf("Enter the data of node 1: ");
    // scanf("%d", &data);
    head->data = data;
    head->next = NULL;

    tempNode = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        // printf("Enter data: ");
        // scanf("%d", &data);
        newNode->data = arr[i - 1];
        newNode->next = NULL;

        tempNode->next = newNode;
        tempNode = tempNode->next;
    }
}
void traverse()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("List is empty");
    }
    temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int n;
    printf("How many elements do you want in Linked List:");
    scanf("%d", &n);
    crete(n);

    printf("Data in the Linked list is:\n");
    traverse();
}