#include<bits/stdc++.h>
#define S 10
using namespace std;

struct multistacks
{
    int topA=-1,topB=S-1;
    int arr[S];
};

//arr -- 10  stackA --5   ,stackB  -- 5
void pushA(struct multistacks* p, int n)
{
    if(p->topA==(S/2)-1)
        cout<<"OverFlow\n";
    else 
    {
        p->topA++;
        p->arr[p->topA]=n;
    }
}

void pushB(struct multistacks* p,int n)
{
    if(p->topB==(S/2)-1)
    {
        cout<<"OverFlow\n";
    }
    else 
    {
        p->topB--;
        p->arr[p->topB]=n;
    }
}


void popA(struct multistacks* p)
{
    if(p->topA==-1)
    cout<<"UnderFlow\n";
    else{
        p->topA--;
    }
}

void popB(struct multistacks* p)
{
    if(p->topB==S)
        cout<<"Underflow\n";
    else{
        p->topB--;
    }
}

void displayA(struct multistacks* p)
{
    if(p->topA==-1)
        cout<<"UnderFlow\n";
    else{
        for(int i=0;i<=p->topA;i++)
        {
            cout<<p->arr[i]<<" ";
        }
        cout<<endl;
    }
}

void displayB(struct multistacks* p)
{
    if(p->topB==S-1)
        cout<<"UnderFlow\n";
    else{
        for(int i=S-2;i>=p->topB;i--)
        {
            cout<<p->arr[i]<<" ";
        cout<<endl;
        }
    }
}
int main()
{
struct multistacks s1;
  while(1)
{
   int ch;
    cout<<"Press 1 for PushA\n";
    cout<<"Press 2 for PushB\n";

    cout<<"Press 3 for PopA\n";
    cout<<"Press 4 for PopB\n";

    cout<<"Press 5 for DisplayA\n";
    cout<<"Press 6 for DisplayB\n";

    cout<<"Press 7 for Exit\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            int n;
            cout<<"Enter the number ";
            cin>>n;
            pushA(&s1,n);
            break;
        }
        case 2:
        {
            int n;
            cout<<"Enter the number ";
            cin>>n;
            pushB(&s1,n);
            break;
        }
        case 3:
        {
            popA(&s1);
            cout<<"Number is poped\n";
            break;
        }
        case 4:
        {
            popB(&s1);
            cout<<"Number is poped\n";
            break;
        }

        case 5:
        {
            cout<<"Stack is\n";
            displayA(&s1);
            break;
        }
        case 6:
        {
            cout<<"Stack is\n";
            displayB(&s1);
            break;
        }

        

        default :
        break;
    }

}

    return 0;
}