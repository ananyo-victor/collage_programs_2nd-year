#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

float stack[10];
int top = -1;
void push(char);
float pop();
float eval(char[], float[]);

void main()
{
    int i = 0;
    char suffix[20];
    float value[20], result;
    // clrscr();
    printf("Enter a valid Postfix Expression ");
    gets(suffix);
    while (suffix[i] != '\0')
    {
        if (isalpha(suffix[i]))
        {
            fflush(stdin);
            printf("\n Enter the value of %c ", suffix[i]);
            scanf("%f", &value[i]);
        }
        i++;
    }
    result = eval(suffix, value);
    printf("\n The result of %s is %f ", suffix, result);
    getch();
}
float eval(char suffix[], float data[])
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
                push(pow(op1, op2));
                break;
            } // switch
        }     // else
        i++;
    } // while
    res = pop();
    return (res);
}
void push(char num)
{
    top += 1;
    stack[top] = num;
}
float pop()
{
    float num;
    num = stack[top];
    top -= 1;
    return (num);
}