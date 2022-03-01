#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};
void insertBeg(struct node **);
void insertMiddle(struct node *);
void insertEnd(struct node **);
void Display(struct node *);
int count(struct node *);
void deletenode(struct node **);
void main()
{
    struct node *p;
    int choice, n = 0;
    p = NULL;
    char ch = 'y' || 'Y';
    do
    {
        printf("\n Operation on Linked List");
        printf("\n 1. Insertion at beginning of Linked List");
        printf("\n 2. Insertion at Middle Of Linked List");
        printf("\n 3. Insertion at End Of Linked List");
        printf("\n 4. Display");
        printf("\n 5. Count number of nodes");
        printf("\n 6. Deletion of specified node ");
        printf("\n Enter your choice");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertBeg(&p); // &p = **q
            break;
        case 2:
            insertMiddle(p);
            break;
        case 3:
            insertEnd(&p);
            break;
        case 4:
            Display(p);
            break;
        case 5:
            count(p);
            printf("\n the number of nodes on the linked list is %d", n);
            break;
        case 6:
            deletenode(&p);
            break;
        default:
            printf("\n Invalid choice ");
        }
        printf("\n Do you want to continue :-");
        fflush(stdin);
        scanf("%c", &ch);
    } while ((ch == 'y') || (ch == 'Y'));
    getch();
}
void insertBeg(struct node **q)
{
    struct node *temp;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = *q;
    *q = temp;
}
void insertEnd(struct node **q)
{
    struct node *temp, *r;
    int num;
    printf("\n Enter the element");
    scanf("%d", &num); // 10 //20 //30
    if (*q == NULL)    // If the node is empty and creating first node
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = num;
        temp->next = NULL;
        *q = temp; // globally it makes *q as First Node
    }
    else
    {
        temp = *q;
        // Go to Last Node
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        r = (struct node *)malloc(sizeof(struct node));
        r->data = num;
        r->next = NULL;
        temp->next = r;
    } // else
} // void insertEnd()

void insertMiddle(struct node *q)
{
    struct node *temp, *r;
    int i, loc, num;
    temp = q;
    printf("\n Enter the location you want to dd the node ");
    scanf("%d", &loc);
    for (i = 1; i < loc; i++)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("There are less than %d elements in list ", loc);
        getch();
        return;
    }
    printf("\n Enter the element ");
    scanf("%d", &num);
    r = (struct node *)malloc(sizeof(struct node));
    r->data = num;
    r->next = temp->next;
    temp->next = r;
}
void Display(struct node *q)
{
    while (q != NULL)
    {
        printf(" %d", q->data);
        q = q->next;
    }
}
int count(struct node *q)
{
    int c = 0;
    while (q != NULL)
    {
        q = q->next;
        c++;
    }
    return c;
}
void deletenode(struct node **q)
{
    struct node *old, *temp;
    int num;
    temp = *q;
    printf("\n Enter the number of node you ant to delete");
    scanf("%d", &num);
    while (temp != num)
    {
        if (temp->data == num)
        {
            if (temp == *q)
            {
                *q = temp->next;
            }
            else
            {
                old->next = temp->next;
            }
            printf("\n The deleted node is %d", temp->data);
            free(temp);
            return;
        }
        else
        {
            old = temp;
            temp = temp->next;
        }
    }
    printf("\n The Element %d is not found ", num);
}