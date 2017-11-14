#include"header.h"
#include"decleration.h"

struct arrque* createqueue(int capacity)
{
que *q;
q=(struct arrque*)malloc(sizeof(struct arrque));
if(!q)
	return(NULL);
q->capacity=capacity;
q->front=q->rear=-1;
q->array=(int*)malloc(sizeof(int)*5);
if(!q->array)
	return(NULL);
return(q);

}
