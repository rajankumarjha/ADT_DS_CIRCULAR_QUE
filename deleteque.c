#include"header.h"
#include"decleration.h"

void deleteque(que* q)
{
if(q)
{
	if(q->array)
	{
		free(q->array);
	}
	free(q);
}



}
