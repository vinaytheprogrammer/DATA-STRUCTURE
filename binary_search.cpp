#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int l,int r,int x)
{
    if(r>=l){
        int mid = l + (r-l)/2; 
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return binarysearch(a,l,mid-1,x);
        else
            return binarysearch(a,mid+1,r,x);
    }
    return -1;
}

//Binary Search 
int main()
{
    cout<<"\nBINARY SEARCH by VINAY GUPTA\n\n\n";
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int x;
    cout<<"Input Number to be Found ";
    cin>>x;
    int result=binarysearch(a,0,n-1,x);

    if(result==-1)
        cout<<"Element not found\n";
    else 
        cout<<"Element found at Index "<<result;

    return 0;
}