#include <stdio.h>
#include <stdlib.h>

#define max_size 100

int queue[max_size];
int front = -1, rear = -1;

void insert()
{
    int item;
    printf("Enter the element: ");
    scanf("%d", &item);
    if (rear == max_size - 1)
    {
        printf("OVERFLOW");
        return;
    }
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }
    queue[rear] = item;
    printf("\nVALUE INSERTED\n");
}

void delete()
{
    int item;
    if (front == -1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        item = queue[front];
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = front + 1;
        }
    }
}

void display()
{
    if (rear == -1)
    {
        printf("\nEMPTY QUEUE\n");
    }
    else
    {
        printf("\nPRINTING THE VALUES...........");
        for (int i = front; i <= rear; i++)
        {
            printf("\n%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    while (choice != 4)
    {
        printf("**********************QUEUE OPERATION**************************\n");
        printf("\n1. INSERT AN ELEMENT\n2. DELETE AN ELEMENT\n3. DISPLAY THE QUEUE\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter a correct number and try again");
            break;
        }
    }
    return 0;
}
