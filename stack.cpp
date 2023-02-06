#include<bits/stdc++.h>
#define S 10
using namespace std;

struct stackS
{
    int top=-1;
    int stack[S];
};

void push(struct stackS* p, int n){
 if(p->top==S-1)
    cout<<"Overflow\n";
 else{
    p->top++;
    p->stack[p->top]=n;
 }   
}

void pop(struct stackS* p)
{
    if(p->top==-1)
        cout<<"Underflow\n";
    else{
        p->top--;
    }
}

void display(struct stackS* p)
{
    if(p->top==-1)
       cout<<"Underflow\n";
    else{
        for(int i=0;i<p->top;i++)
            cout<<p->stack[i]<<" ";
            cout<<endl;
    }
}

void peek(struct stackS* p)
{
    if(p->top==-1)
       cout<<"Underflow\n";
    else{
    cout<<p->stack[p->top];     
    }
}

int main()
{
    struct stackS s1;
    int ch;
    cout<<"Enter your choice \n";
// struct stack *p;   what wrong with this
do
{
    cout<<"Press 1 for Push\n";
    cout<<"Press 2 for Pop\n";
    cout<<"Press 3 for Display\n";
    cout<<"Press 4 for Peek\n";
    cout<<"Press 5 for Exit\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            int n;
            cout<<"Enter the number ";
            cin>>n;
            push(&s1, n);
            break;
        }

        case 2:
        {
            pop(&s1);
            cout<<"Number is poped";
            break;
        }

        case 3:
        {
            cout<<"Stack is\n";
            display(&s1);
            break;
        }

        case 4:
        {
            peek(&s1);
            break;
        }
       
        default :
            break;
    }

}while(ch!=5);
return 0;
}