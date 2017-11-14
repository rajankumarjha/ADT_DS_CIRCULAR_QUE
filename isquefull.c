#include"header.h"
#include"decleration.h"

int isquefull(que* q)
{
return((q->rear+1)%q->capacity==q->front);



}
