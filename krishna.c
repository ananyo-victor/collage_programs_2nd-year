#include<stdio.h>
// #include<conio.h>
void Insert();
void Delete();
void Display();
int maxsize=2,item,queue[10],front=-1,rear=-1;
void main()
{
char ch='Y'|| 'y';
int n;
// clrscr();
do
{
printf("\n 1.Insertion in queue");
printf("\n 2.Deletation in queue");
printf("\n 3.Display");
printf("\n enter your choice");
scanf("%d",&n);
switch (n)
{case 1:Insert();
         break;
case 2:Delete();
         break;
case 3:Display();
        break;
  default:printf("\n user has given a wrong choice");
}
printf("\n Do you want to continue:=");
fflush(stdin);
scanf("%c",&ch);
}
while((ch=='y')||(ch=='Y'));
//
}
void Insert()
{
if (rear==maxsize-1)
{
printf("\n queue is full or queue is overflow");
//
return;
}
if(front==-1)
{
front=0;
rear=0;
}
else
{rear=rear+1;
}
printf("\n Enter the item");
scanf("%d",&item);
queue[rear]=item;
}
void Delete()
{
if (front==-1)
{
printf("\n queue is empty or queue is underflow");
return;
}
item=queue[front];
printf("\n The delete d item is %d",item);
if (front==rear)
{
front=-1;
rear=-1;
}
else
{
front=front+1;
}
}
void Display()
{
int i;
printf("The element are");
for(i=front;i<=rear;i++)
    {
    printf("\t %d",queue[i]);
    }
   }