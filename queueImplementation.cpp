#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    public:
    int front, back;
    int maxSize, size;
    int* array;
    Queue(int mSize = 10);
};
Queue::Queue(int mSize)
{
    front=-1;back=-1;size=0;
    maxSize = mSize;
    array = new int[maxSize];
}
void enQueue(Queue* pol, int x)
{
    if(pol->size>=pol->maxSize)
    {
        cout<<"Overflow";
        return;
    }
    if(pol->front == -1)
        (pol->front)++;
    pol->array[(pol->back)+1] = x;
    (pol->back)++;(pol->size)++; 
}
void deQueue(Queue* pol)
{
    if(pol->size == 0)
    {
        cout<<"Underflow";
        return;
    }
    pol->front++;pol->size--;
}
void printQueue(Queue* pol)
{
    for(int i=0; i<pol->size; i++)
    {
        cout<<pol->array[(pol->front)+i];
    }
    cout<<endl;
}
int main()
{
    Queue pol(10);
    enQueue(&pol, 2);
    enQueue(&pol, 3);
    enQueue(&pol, 4);
    enQueue(&pol, 5);
    enQueue(&pol, 6);
    deQueue(&pol);
    printQueue(&pol);
}


