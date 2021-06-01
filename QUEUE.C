#include<stdio.h>  //header file
#include<conio.h>  //header file
#define max 5
//front is use to fecth the data
//rear is use to insert the data
int rear=-1,front=0,queue[max]; //global varible
void inqueue(int queue[],int data)
{
	if(rear==(max-1))
	{
	printf("Queue is full");
	sleep(2);
	}
	else
	{
	  rear++;
	  queue[rear]=data;
	}
}
void dequeue(int queue[])
{
	int num;
	if(front==(rear+1))
	printf("Queue is empty");
	else
	{
	  num=queue[front];
	  front++;
	  printf("Dequeue data=%d",num);
	}
	sleep(2);
}
void display(int queue[])
{
     int i;
     if(front==(rear+1))
     printf("Queue is empty");
     else
     {
       for(i=front;i<=rear;i++)
	 printf("%3d",queue[i]);
     }
sleep(2);

}
void main()  //main function
{
	int ch,data;
	while(1)
	{
	   clrscr();
	   printf("1.inqueue\n");
	   printf("2.dequeue\n");
	   printf("3.Display\n");
	   printf("4.exit\n");
	   printf("Enter your choice=");
	   scanf("%d",&ch);
	   switch(ch)
	   {
	      case 1:
		printf("Enter data=");
		scanf("%d",&data);
		inqueue(queue,data);break;
	      case 2:
		 dequeue(queue);break;
	      case 3:
		 display(queue);break;
	      case 4:
		 exit(0);break;
	   }
	}
}
