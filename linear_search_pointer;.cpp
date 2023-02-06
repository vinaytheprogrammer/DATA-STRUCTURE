#include<bits/stdc++.h>
using namespace std;


//Linear search on 1 D simple Array
int linear_search1(int *p,int n)
{
    for(int i=0;i<6;i++)
    {
        if(a[i]==n)
         return i;
        
    }
    return -1;
}

int main()
{
    cout<<"Linear Search by VINAY GUPTA\n";
int n,a[7]={1,2,3,7,4,5,6};
int *p=a;
for(int i=0;i<6;i++)
cout<<a[i]<<" ";
cout<<"\nEnter the Wishing to Find "<<endl;
cin>>n;
int x=linear_search1(p,n);
cout<<"Index of value is "<<x;

return 0;

}