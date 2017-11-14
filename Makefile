CircularQue: createqueue.o deleteque.o main.o dequeue.o insertque.o isqueempty.o isquefull.o quesize.o display.o header.h decleration.h
	gcc -o CircularQue createqueue.c deleteque.c main.c dequeue.c insertque.c isqueempty.c isquefull.c quesize.c display.c
createqueue.o:createqueue.c decleration.h header.h
	gcc -c createqueue.c
main.o:main.c decleration.h header.h
	gcc -c main.c
deleteque.c:deleteque.c decleration.h header.h
	gcc -c deleteque.c
dequeue.c:dequeue.c decleration.h header.h
	gcc -c dequeue.c
insertque.c:insertque.c decleration.h header.h
	gcc -c insertque.c
isqueempty.c:isqueempty.c decleration.h header.h
	gcc -c isqueempty.c
isquefull.c:isquefull.c decleration.h header.h
	gcc -c isquefull.c
quesize.c:quesize.c decleration.h header.h
	gcc -c quesize.c
display.c:display.c decleration.h header.h
	gcc -c display.c


