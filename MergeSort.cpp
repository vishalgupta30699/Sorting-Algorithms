#include<bits/stdc++.h>
using namespace std;
void merge(int x[],int low,int high,int mid)
{
    int t[10],i1,i2,i3;
    i1=low;
    i2=mid+1;
    i3=low;
    while(i1<=mid&&i2<=high)
    {
        if(x[i1]>x[i2])
        {
            t[i3]=x[i2];
            i2++;
        }
        else
        {
            t[i3]=x[i1];
            i1++;
        }
        i3++;
    }
    while(i1<=mid)
    {
        t[i3]=x[i1];
        i3++;
        i1++;
    }
    while(i2<=high)
    {
        t[i3]=x[i2];
        i3++;
        i2++;
    }
    i1=low;
    while(i1<i3)
    {
        x[i1]=t[i1];
        i1++;
    }
}
void mergesort(int x[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(x,low,mid);
        mergesort(x,mid+1,high);
        merge(x,low,high,mid);
    }
}
int main()
{
    int x[10],y;
    y=0;
    while(y<=9)
    {
        cout<<"Enter number:";
        cin>>x[y];
        y++;
    }
    mergesort(x,0,9);
    for(y=0;y<=9;y++) cout<<x[y]<<"\t";
    return 0;
}