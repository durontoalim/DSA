//Implement the code of "Queue" as given, rewrite it by using Structure.
#include <bits/stdc++.h>
using namespace std;


void insert();
void delet();
void display();
#define MAX 4
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        cout<<"1.Insert element to queue \n";
        cout<<"2.Delete element from queue \n";
        cout<<"3.Display all elements of queue \n";
        cout<<"4.Quit \n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            cout<<"Wrong choice \n";
        }
    }
}
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    cout<<"Queue Overflow \n";
    else
    {
        if (front == - 1)
        front = 0;

        cout<<"Inset the element in queue : ";
        cin>>add_item;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}


void display()
{
    int i;
    if (front == - 1)
        cout<<"Queue is empty \n";
    else
    {
        cout<<"Queue is : \n";
        for (i = front; i <= rear; i++)
            cout<<queue_array[i]<<" ";
        cout<<"\n";
    }
}


void delet()
{
    if (front == - 1 || front > rear)
    {
        cout<<"Queue Underflow \n";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is : " << queue_array[front]<<" " << endl;
        front = front + 1;
    }
}