typedef struct arrque
{
int front,rear;
int capacity;
int *array;
}que;

struct arrque* createqueue(int);
void deleteque(struct arrque*);
int dequeue(struct arrque*);
void insertque(struct arrque*, int);
int isqueempty(struct arrque*);
int isquefull(struct arrque*);
int quesize(struct arrque*);
int display(struct arrque*);



struct arrque* (*createque)(int);
int (*qusize)(struct arrque *);
int (*isempty)(struct arrque *);
int (*isfull)(struct arrque*);
void (*enque)(struct arrque*, int);
int (*deque)(struct arrque*);
int (*dis)(struct arrque*);
void (*delptr)(struct arrque*);
