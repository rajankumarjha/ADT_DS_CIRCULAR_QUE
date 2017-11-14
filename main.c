#include"header.h"
#include"decleration.h"


int main()
{
int key,qsize=0,qdata=0,presentsize=0;
que *q=NULL;

createque=createqueue;
qusize=quesize;
isempty=isqueempty;
isfull=isquefull;
enque=insertque;
deque=dequeue;
delptr=deleteque;
dis=display;
printf("Circular Queue Program Initiated %s\n",__func__);

printf("\n---Enter Que Size---\n");
scanf("%d",&qsize);

while(1)
{
printf("1.Create Circular Queue. \n");
printf("2.Insert in Queue. \n");
printf("3.Delete in Queue. \n");
printf("4.Size of Queue. \n");
printf("5.Display que. \n");
printf("6.Delete Entire Queue and Exit. \n");
printf("\n---Enter a key---\n");
scanf("%d",&key);
switch(key)
{
	case 1:
		q=(*createque)(qsize);
		break;
	case 2:
		printf("\n---Enter value to be inserted---:\n");
		scanf("%d",&qdata);
		(*enque)(q,qdata);
		break;
	case 3:
		qdata=(*deque)(q);
		printf("\nValue :%d Queue position now is : %d\n",qdata,q->front);
		break;
	case 4:
		presentsize=(*qusize)(q);
		printf("\nQueue Present Size is:%d\n",presentsize);
		break;
	case 5:
		(*dis)(q);
		break;
	case 6:
		(*delptr)(q);
		printf("\n---Entire Queue Is Deleted---\n");
		return(0);


}

}

printf("Circular Queue Program END %s\n",__func__);
}
