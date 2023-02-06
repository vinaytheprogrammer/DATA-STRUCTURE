#include<bits/stdc++.h>
#define CAPACITY 10
using namespace std;
int queue_array[CAPACITY];
int rear = - 1;
int front = - 1;
void insert()
{
    int element;
    if (rear == CAPACITY - 1)
    cout<<"Queue is full\n";
    else
    {
        if (front == - 1)
        
        front = 0;
        cout<<"Enter element which is to be inserted ";
        cin>>element;
        rear = rear + 1;
        queue_array[rear] = element;
    }
} 
 
void delet()
{
    if (front == - 1 || front > rear)
    {
        cout<<"Queue is empty we cannot delete an element  \n";
        return ;
    }
    else
    {
        cout<<"Element deleted from queue is : ";
        cout<<queue_array[front];
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front==-1 || front > rear)
       cout<<"Queue is empty \n";
    else
    {
        cout<<"Elements of Queue are: \n";
        for (i = front; i <= rear; i++)
            cout<<queue_array[i]<<" ";
        cout<<endl;
    }
}



int main()
{
    int choice;
    while (1)
    {
        cout<<"1.Enter 1 to insert element to queue \n";
        cout<<"2.Enter 2 to delete element from queue \n";
        cout<<"3.Enter 3 to display all elements of queue \n";
        cout<<"4.Enter 4 to quit \n";
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
    return 0;
} 
 
