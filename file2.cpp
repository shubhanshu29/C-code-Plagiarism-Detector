#include<iostream>
using namespace std;

int main()
{
    int a[10];
    int i;
    cout<<"Enter the 10 array elements:\n";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
            a[i]=1111;
        else if(a[i]<0)
            a[i]=-2222;
        else
            a[i]=2222;
        cout<<"\nThe resultant is"<<a[i]<<"\n";
    }
    return 0;
}
