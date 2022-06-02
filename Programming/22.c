#include <stdio.h>
#include <stdlib.h>

struct circular_queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circular_queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isFull(struct circular_queue *q)
{
    if (((q->r + 1) % q->size) == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circular_queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is Full\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element : %d\n", val);
    }
}
int dequeue(struct circular_queue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("This queue is empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circular_queue q;
    q.size = 64;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // Enqueue few elements
    enqueue(&q, 16);
    enqueue(&q, 8);
    enqueue(&q, 32);
    enqueue(&q, 27);
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    printf("Dequeuing element is %d\n", dequeue(&q));
    enqueue(&q, 64);
    enqueue(&q, 81);

    if (isEmpty(&q))
    {
        printf("Queue is Empty\n");
    }
    if (isFull(&q))
    {
        printf("Queue is Full\n");
    }
    return 0;
}
