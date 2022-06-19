#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void push(struct node **s, int item);

int pop(struct node **s);

int main()
{
    struct node *top;
    int t, i, item;

    top = NULL;

    push(&top, 45);
    push(&top, 28);
    push(&top, 63);
    push(&top, 55);

    item = pop(&top);
    printf("Popped : %d\n", item);

    item = pop(&top);
    printf("Popped : %d\n", item);

    return 0;
}

void push(struct node **s, int item)
{
    struct node *q;
    q = (struct node *)malloc(sizeof(struct node));
    q->data = item;
    q->link = *s;
    *s = q;
}

int pop(struct node **s)
{
    int item;
    struct node *q;

    if (*s == NULL)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        q = *s;
        item = q->data;
        *s = q->link;
        free(q);

        return (item);
    }
}
