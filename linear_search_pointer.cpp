#include<bits/stdc++.h>
#define S 3
using namespace std;


//Linear search on 2 D simple Array using pointer

int * linear_search1(int (*p)[S],int n)
{
    static int arr[2];
    for(int i=0;i<S;i++)
    {
        for (int j=0;j<S;j++)
        {
        if((*(*(p+i)+j))==n)
         {
            arr[0]=i;
            arr[1]=j;
          }
        }       
    }
    return arr;
}


int main()
{
    cout<<"Linear Search by VINAY GUPTA\n";
    int n,a[S][S]={1,2,3,4,5,6,7,8,9};
    int (*p)[S]=a;
    for(int i=0;i<S;i++)
    {
      for(int j=0;j<S;j++)
        cout<<*(*(p+i)+j)<<" ";
        cout<<endl;
    }



    cout<<"\nEnter the Wishing to Find "<<endl;
    cin>>n;
    int *ret=linear_search1(p,n);
    cout << "Position is ";
    for ( int i = 0; i < 2; i++ ) 
      cout<<*(ret + i);
   
    return 0;

}