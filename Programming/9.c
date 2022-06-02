#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;

    return ptr;
}

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 8;
    head->next = second;
    second->data = 12;
    second->next = third;
    third->data = 36;
    third->next = fourth;
    fourth->data = 86;
    fourth->next = NULL;

    printf("Linked List before Insertion\n");
    linkedListTraversal(head);
    printf("\n");

    printf("Linked List after Insertion at Beginning\n");
    head = insertAtfirst(head, 56);
    linkedListTraversal(head);
    printf("\n");

    printf("Linked List after Insertion at Index\n");
    head = insertAtIndex(head, 76, 1);
    linkedListTraversal(head);
    printf("\n");

    printf("Linked List after Insertion at End\n");
    head = insertAtEnd(head, 128);
    linkedListTraversal(head);
    printf("\n");

    printf("Linked list after Insertion of Node\n");
    head = insertAfterNode(head, third, 45);
    linkedListTraversal(head);
    printf("\n");

    return 0;
}
