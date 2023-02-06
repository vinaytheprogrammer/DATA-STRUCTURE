#include<bits/stdc++.h>
#define S 3
using namespace std;

//2 D Array Implementation using pointer ,and function passing to a pointer
void print(int (*qtr)[S])
{
    cout<<"2D Array is\n";
    for(int i=0;i<S;i++)
    {
        for(int j=0;j<S;j++)
        // cout<<b[i][j]<<" ";
        cout<<*(*(qtr+i)+j)<<" ";
        
        cout<<"\n";
    }
}
void add(int (*ptr)[S],int (*qtr)[S])
{
    cout<<"Addition is\n";
    int temp[S][S];
    for(int i=0;i<S;i++)
    {
        for(int j=0;j<S;j++)
            {
                temp[i][j]=(*(*(ptr+i)+j))+(*(*(qtr+i)+j));
                cout<<*(*(temp+i)+j)<<" ";
            }
            cout<<endl;
    }
}
int main()
{
    // int a[S][S]={
    //     {1,2,3},{4,5,6},{7,8,9}
    // };
    int a[S][S];
    cout<<"Input a 2D Arrray a\n";
     for(int i=0;i<S;i++)
    {
        for(int j=0;j<S;j++)
        {
            cin>>a[i][j];
        }
    }
    int (*ptr)[S]; // ptr is an pointer to S=3 integer array
    ptr=a;
 //    cout << ptr<< " "<< ptr + 1<< " "<< ptr + 2 << endl;     -- throw error
 // cout << *ptr<< " "<< *(ptr + 1)<< " "<< *(ptr + 2)<< endl;   -- throw error
  //cout << **ptr<< " "<< *(*(ptr + 1) + 2)<< " "<< *(*(ptr + 2) + 3)<< endl;   
  //cout <<123 ptr[0][0]<< " "<< ptr[1][2]<< " "<< ptr[2][3]<< endl;

    int b[S][S];
    int (*qtr)[S]=b;
    cout<<"Input a 2D Arrray b\n";

    for(int i=0;i<S;i++)
    {
        for(int j=0;j<S;j++)
        {
            cin>>b[i][j];
        }
    }
    print(ptr);
    print(qtr);
    add(ptr,qtr);
    return 0;
}