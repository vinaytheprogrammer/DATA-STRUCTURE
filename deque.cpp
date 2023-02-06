#include<bits/stdc++.h>
#define MAX 5
using namespace std;

int front=-1;
int rear=-1, q[MAX];



//NOT WORKING 



void insert_back()
{
    if((front==0 && rear==MAX-1) ||(front==rear+1))
    {
        cout<<"\n\nOverflow_back\n\n";
        return;
    }
    
        if(front==-1)
            front=0;//rear=0;
        
        int n;
        cout<<"\n\nInput\n";

        cin>>n;
        rear=(rear+1)%MAX;
        q[rear]=n;
        
    
}

void delete_front()
{
    if(front==-1)
    {   
        cout<<"\n\nUnderflow_front\n\n";
        return;

    }
   
    cout<<"\n\nElement Deleted from front "<<q[front];

        if(front==rear)
        {
            rear=-1;front=-1;
        }
        else
        front=(front+1)%MAX;
}



void insert_front()
{
    if((front==0 && rear==MAX-1) || (front==rear+1))
    {
            cout<<"\n\nOverflow_front\n\n";
            return;
    }

    if(front==-1)
        {
            front=0;rear=0;
        }
    
        // front=(front-1)%MAX;
        else if(front==0)
            front=MAX-1;
        else
            front--;

        int n;
        cout<<"\n\nInput\n";
        cin>>n;
        q[front]=n;
      
       
    
}


void delete_back()
{
    if(front==-1)
    {
        cout<<"\n\nUnderflow_back\n\n";
        return;
    }    
    
    cout<<"\n\nElement delete from back "<<q[rear];

        if(front==rear)
            {
                front=-1;rear=-1;
            }
        //rear=(rear-1)%MAX;
        else if(rear==0)
            rear= MAX-1;
        else
            rear--;

}





void display()
{

    int a=front;
    int b=rear;

    if(front==-1)
        {
            cout<<"\n\nOverflow\n\n";
            return;
        }
    cout<<"\n\nQueue elements\n\n";

    if(a<=b)
    {
        while(a<=b)
        {
            cout<<q[a]<<" ";
            a++;
        }
    }
    else{
        while(a<=MAX-1)
        {
            cout<<q[a]<<" ";
            a++;
        }
        a=0;
        while(a<=b)
        {
            cout<<q[a]<<" ";
            a++;
        }

    }
cout<<"\n";
}





int main()
{
int ch1,ch2;


 cout<<"\n\n 1.  INPUT RESTRICTED\n\n 2.  OUTPUT RESTRICTED\n\n 3.  EXIT\n\n";
 cin>>ch1;
 switch(ch1)
 {
    case 1:
    {
       while(1)
       {
        cout<<"\n\n1.  PUSH_FRONT \n2.  DELETE_FRONT\n3.  DELETE_BACK\n4.  EXIT\n5.  DISPLAY\n\n";
        cout<<"\n\nENter choice\n\n";
        cin>>ch2;


        switch(ch2)
        {
        case 1:
            insert_front();
            break;
        case 2:
            delete_front();
            break;
        case 3:
            delete_back();
            break;
        case 4:
            exit(0);
        case 5:
            display();
            break;
        // case 6:
        //     insert_back();
        //     break;              // we can run all four function in one run, it cause no problem.
        default:
            break;
        }
        
       }
       break;
    }
    case 2:
    {
        while(1){
            cout<<"\n\n1.  PUSH_FRONT \n2.  PUSH_BACK\n3.   DELETE_BACK\n4.  EXIT\n5.  DISPLAY\n\n";
        cout<<"\n\nENter choice\n\n";
        cin>>ch2;


        switch(ch2)
        {
        case 1:
            insert_front();
            break;
        case 2:
            insert_back();
            break;
        case 3:
           
            delete_back();
            break;
        case 4:
            exit(0);
        case 5:
            display();
            break;
        default:
            break;
        }
        }
        break;

    }
    case 3:
        exit(0);    
 }



return 0;

}