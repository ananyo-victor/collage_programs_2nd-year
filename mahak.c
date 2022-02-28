#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
float stack[10];
int top = -1;
void push(char);
float pop();
float eval(char[], float);
void main()
{
    int i = 0;
    char suffix[20];
    float value[20], result;
    clrscr();
    printf("enter a value of postfix expression:");
    gets(suffix);
    // while
    while (suffix[i] != '\0')
    {
        if (isalpha(suffix[i]))
        {
            fflush(stdin);
            printf("\n enter the value of %c:", suffix[i]);
            scanf("%f", &value[i]);
        }
        i++;
    } // closing of while
    result = eval(suffix, value);
    printf("\n the result of %s is %f", suffix, result);
    getch();
}

float eval(char suffix[], float) // evaluation function
{
    int i = 0;
    float op1, op2, res;
    char ch;
    while (suffix[i] != '\0')
    {
        ch = suffix[i];
        if (isalpha(suffix[i]))
        {
            push(data[i]);
        }
        else
        {
            op2 = pop();
            op1 = pop();

            switch (ch)
            {
            case '+':
                push(op1 + op2);
                break;
            case '-':
                push(op1 - op2);
                break;
            case '*':
                push(op1 * op2);
                break;
            case '/':
                push(op1 / op2);
                break;
            case '^':
                push(op1 ^ op2);
                break;
            }
        }
        i++;
    }
    res = pop();
    return (res);
}

void push(char num) // push function
{
    top = top + 1;
    stack[top] = num;
}

float pop() // pop function
{
    float num;
    num = stack[top];
    top = top - 1;
    return (num);
}