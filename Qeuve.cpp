#include<bits/stdc++.h>
#define S 100
using namespace std;

struct queve
{
    int front=-1,rear=-1;
    int que[S];
};

void push( struct queve *p,int n)
{
    if(p->rear==S-1)
        cout<<"queve is Overflow\n";
    else{
      if(p->front == -1)
        p->front=0;/// why?
      
        p->rear=p->rear+1;
        p->que[p->rear]=n;
    }
} 

void pop(struct queve *p)
{
    if((p->front) == -1 || (p->front) > (p->rear))
       {
         cout<<"queve is empty\n";
         return ;
       }
    else{
        p->front++;
        
        
    }
}

void display(struct queve *p)
{
    if(p->front==-1)
        cout<<"queve is empty\n"; 
    else
    {       cout<<"Queve is\n";
        for(int i=(p->front);i<=(p->rear);i++)
            cout<<p->que[i]<<" ";
        cout<<endl;
    }
}
int main()
{
struct queve s1;

    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
             
            int n;
            cout<<"Enter the number ";
            cin>>n;
            push(&s1,n);
            break;
        
            case 2:
            pop(&s1);
            break;
            case 3:
            display(&s1);
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 

    return 0;
}