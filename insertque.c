#include"header.h"
#include"decleration.h"

void insertque(que* q, int data)
{
if(isquefull(q))
	printf("Que Overflow\n");
else
{
	q->rear=(q->rear+1)%q->capacity;
	q->array[q->rear]=data;
	if(q->front==-1)
		q->front=q->rear;
}

}
