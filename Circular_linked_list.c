#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};
void insertatBeg(struct node **, struct node **);
// void insertMiddle(struct node *);
void insertatEnd(struct node **, struct node **);
void DeleteatBeg(struct node **, struct node **);
void DeleteatEnd(struct node **, struct node **);
// void DeleteMiddle(struct node **);
void Display(struct node *);
int count(struct node *);
void main()
{
    struct node *p, *first, *last;
    first = NULL;
    last = NULL;
    int choice, n = 0;
    p = NULL;
    char ch = 'y' || 'Y';
    do
    {
        printf("\n Operation on Doubly Linked List");
        printf("\n 1. Insertion at beginning of Linked List");
        printf("\n 2. Insertion at Middle Of Linked List");
        printf("\n 3. Insertion at End Of Linked List");
        printf("\n 4. Deletion at beginning Of Linked List");
        printf("\n 5. Deletion at End Of Linked List");
        printf("\n 6. Deletion at Middle Of Linked List");
        printf("\n 7. Display");
        printf("\n 8. Count number of nodes");
        printf("\n Enter your choice");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertatBeg(&first, &last); // &p = **f
            break;
        case 2:
            // insertMiddle(p);
            break;
        case 3:
            insertatEnd(&first, &last);
            break;
        case 4:
            DeleteatBeg(&first, &last);
            break;
        case 5:
            DeleteatEnd(&first, &last);
            break;
        case 6:
            // DeleteMiddle(&first,&last);
            break;
        case 7:
            Display(first);
            break;
        // case 8:
        //     n=count(p);
        //     printf("\n the number of nodes on the Doubly linked list is %d", n);
        //     break;
        default:
            printf("\n Invalid choice ");
        }
        printf("\n Do you want to continue :-");
        fflush(stdin);
        scanf("%c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));
    getch();
}
void insertatBeg(struct node **f, struct node **l)
{
    struct node *temp;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    if ((*f) == NULL)
    {
        temp->data = num;
        temp->next = temp;
        (*f) = temp;
        (*l) = temp;
    }
    else
    {
        temp->data = num;
        temp->next = *f;
        (*l)->next = temp;
        (*f) = temp;
    }
}
void Display(struct node *q)
{
    struct node *temp;
    temp = q;
    if (temp == NULL)
    {
        printf("\n List is Empty");
        return;
    }
    do
    {
        printf("\t %d", temp->data);
        temp = temp->next;
    } while (temp != q);
}
void insertatEnd(struct node **f, struct node **l)
{
    struct node *temp;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    if ((*f) == NULL)
    {
        temp->data = num;
        temp->next = temp;
        (*f) = temp;
        (*l) = temp;
    }
    else
    {
        temp->data = num;
        temp->next = *f;
        (*l)->next = temp;
        (*l) = temp;
    }
}
void DeleteatBeg(struct node **f, struct node **l)
{
    struct node *temp;
    if (*f == NULL)
    {
        printf("List is Empty");
        return;
    }
    temp = *f;
    if (*f == *l)
    {
        printf("The deleted number is %d ", temp->data);
        *f = NULL;
        *l = NULL;
        free(*f);
    }
    else
    {
        printf("The deleted number is %d ", temp->data);
        temp = temp->next;
        temp->next = *l;
        (*l)->next = temp;
        free(*f);
        (*f) = temp;
    }
}
void DeleteatEnd(struct node **f, struct node **l)
{
    struct node *temp,*old;
    if (*f == NULL)
    {
        printf("List is Empty");
        return;
    }
    temp = *f;
    if (*f == *l)
    {
        printf("The deleted number is %d ", temp->data);
        *f = NULL;
        *l = NULL;
        free(*l);
    }
    else
    {
        while (temp->next != (*f))
        {
            old=temp;
            temp = temp->next;
        }
        old->next = (*f);
        printf("The deleted number is %d ", (*l)->data);
        free(*l);
        (*l) = old;
    }
}