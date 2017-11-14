#include"header.h"
#include"decleration.h"

int dequeue(que* q)
{
int data=-1;
if(isqueempty(q))
{
	printf("Que is Empty");
	return(-1);
}
else
{
	data=q->array[q->front];
	if(q->front==q->rear)
		q->front=q->rear=-1;
	else
		q->front=(q->front+1)%q->capacity;

}
return data;

}
