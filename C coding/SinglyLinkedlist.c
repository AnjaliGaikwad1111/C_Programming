#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void addNode(int data)
{
    struct node *newNode = NULL;
    newNode = malloc(sizeof(struct node));
    newNode->value = data;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void printLinkedlist()
{
    struct node *p;
    p = head;
    while (p != NULL)
    {
        printf("Value: %d ", p->value);
        printf("Next %u ", p->next);
        printf("\n");
        p = p->next;
    }
}

int main()
{
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    printLinkedlist();
}