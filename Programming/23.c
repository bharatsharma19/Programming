#include <stdio.h>
#include <stdlib.h>

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    printf("Printing the elements of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        printf("Queue is full\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
};

int dequeue()
{
    int val1 = -1;
    struct Node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val1 = ptr->data;
        free(ptr);
    }
    return val1;
};

int main()
{
    linkedListTraversal(f);
    printf("Dequeuing elements %d\n", dequeue());
    enqueue(16);
    enqueue(32);
    enqueue(64);
    enqueue(27);
    enqueue(343);
    enqueue(81);
    printf("Dequeuing elements %d\n", dequeue());
    printf("Dequeuing elements %d\n", dequeue());
    printf("Dequeuing elements %d\n", dequeue());
    linkedListTraversal(f);
    return 0;
}
