#include"header.h"
#include"decleration.h"

int display(que* q)
{
int data=-1,pos=0;
while(1)
{
	
if(isqueempty(q))
{
	printf("Que is Empty\n");
	return(1);
}
else
{
	pos=q->front;
	data=q->array[q->front];
	if(q->front==q->rear)
		q->front=q->rear=-1;
	else
		q->front=(q->front+1)%q->capacity;

printf("Value:%d At position :%d\n",data,pos);
}
}

}
