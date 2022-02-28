#include <stdio.h>
#include <stdlib.h>

int top = -1, a[5], item, i, ch, maxsize = 5;
char k;
void push();
void pop();
void peep();
int main()
{
    for (int j = 2; j > 1; j++)
    {
        printf("Do you want to run the program ?");
        fflush(stdin);
        scanf("%c", &k);
        if (k == 'y')
        {

            printf("\n 1 PUSH");
            printf("\n 2 POP");
            printf("\n 3 PEEP");
            printf("\n Enter your choice");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peep();
                break;

            default:
                printf("\n Invalid Choice");
            }
        }
        else
        {
            exit(0);
        }
    }
    return 0;
}
void push()
{
    if (top == maxsize - 1)
    {
        printf("\n Stack is full");
    }
    else
    {
        printf("Enter the element");
        scanf("%d", &item);
        top += 1;
        a[top] = item;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Deleted element is %d", a[top]);
        top -= 1;
    }
}
void peep()
{
    if (top == -1)
    {
        printf("Stack is empty and there is no element to dispay");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf("\n %d", a[i]);
        }
    }
}