#include<bits/stdc++.h>
#define S 5

using namespace std;

int rear=-1, front=-1;
    int cq[S];


// IMPORTANT 
void insert()
{
    int n;
    if((front==0 && rear==S-1) || (front==rear+1))  //  (front==rear+1)  showing the overflow condition after when
    //  array fully complete and then one element delete and than one element inserted in that time front and rear
    // not getting the overflow condition without this statement
    {
        cout<<"\n\nOverflow\n\n\n";
        return;
    }
    else{
        if(front==-1)
        {
            front=0;// reset the front for exact number will get to print becase all the numbers in queue in between 
            // front and rear

            //rear=0;        //okay 
        }
        cout<<"Input\n";
        cin>>n;
        rear=(rear+1)%S; //circular increment
        cq[rear]=n;
    }   
}

void pop()
{
    if(front==-1)
    {
        cout<<"\n\n\n\nUnderflow_pop\n\n\n";
        return;
    }
    cout<<"Element deleted "<<cq[front];
    if(front==rear)
    {
        front=-1; //reset the queve
        rear=-1;
    }
    else{
        front=(front+1)%S; //circular increment
    }
    
}

void disp()
{

    int i=front;
    int j=rear;


    if(front==-1)
    {
        cout<<"Queue is empty\n\n";
        return;
    }

    cout<<"Queue elements are: \n\n";
    if(i<=j)// when queve elements simply between front rear, but front <= rear 
    {
        while(i<=j)
        {
            cout<<cq[i]<<" ";
            i++;
        }

    }
    else// when queve element is just inserted in 0th position after the (MAX-1)th position 
    {
        while(i<=S-1) // front< = MAX-1 
        {
            cout<<cq[i]<<" ";
            i++;
        }
        i=0;//for other left value which is recently upgraded
        while(i<=j) // 0th position to rear(after the (MAX-1)th )
        {
            cout<<cq[i]<<" ";
            i++; 
        }
    }
    cout<<"\n\n";
}



int main()
{
    int ch;

    cout<<"\n\n CONTRIBUTED BY VINAY GUPTA\n\n\n";
   while(1)
   {
     cout<<"\n\n1. PUSH\n2. POP\n3.DISPLAY\n4.EXIT\n\n\n\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
            insert();
            break;
        case 2:
            pop();
            break;
        case 3:
            disp();
            break;
        case 4:
            exit(0);
            
        default:
            break;
    }
   }
    return 0;
}