#include"header.h"
#include"decleration.h"

int quesize(que* q)
{
return((q->capacity-q->front+q->rear+1)%q->capacity);



}
