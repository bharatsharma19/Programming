#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int item;
    struct queue *link;
};

struct queue *rear, *front;

void add(int item);

int del_queue();

int main()
{
    int item;

    rear = front = NULL;

    add(10);
    add(20);
    add(30);
    add(40);
    add(50);
    add(60);

    item = del_queue();
    printf("Deleted Item : %d\n", item);

    item = del_queue();
    printf("Deleted Item : %d\n", item);

    return 0;
}

void add(int item)
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));

    q->item = item;
    q->link = NULL;

    if (rear == NULL)
    {
        rear = q;
        front = q;
    }
    else
    {
        q->link = rear;
        rear = q;
    }
}

int del_queue()
{
    int item;
    struct queue *q = rear;

    if (front == NULL)
    {
        printf("Queue is Empty\n");
        return (-1);
    }
    else
    {
        if (front == rear)
        {
            item = q->item;
            front = rear = NULL;
            free(q);
        }
        else
        {
            while (q->link->link != NULL)
            {
                q = q->link;
            }
            item = q->link->item;
            free(q->link);
            front = q;
            q->link = NULL;
        }
    }
    return (item);
}
