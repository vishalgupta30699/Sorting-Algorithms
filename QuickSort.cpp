#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of array:";
    cin>>n;
    vector<int> x(n);
    int stack[n][2],top=n,lb,ub,e,f,g,pp,i;
    for(i=0;i<n;++i)
    {
        cout<<"Enter a value:";
        cin>>x[i];
    }
    stack[--top][0]=0;
    stack[top][1]=n-1;
    while(top!=n)
    {
        lb=stack[top][0];
        ub=stack[top++][1];
        e=lb;
        f=ub;
        while(e<f)
        {
            while(e<ub&&x[lb]>=x[e]) e++;
            while(x[f]>x[lb]) f--;
            if(e<f)
            {
                g=x[e];
                x[e]=x[f];
                x[f]=g;
            }
            else
            {
                g=x[lb];
                x[lb]=x[f];
                x[f]=g;
                pp=f;
            }
        }
        if(pp-1>lb)
        {
            stack[--top][0]=lb;
            stack[top][1]=pp-1;
        }
        if(pp+1<ub)
        {
            stack[--top][0]=pp+1;
            stack[top][1]=ub;
        }
    }
    cout<<"Array after Quick Sort:\n";
    for(i=0;i<n;++i)
    {
        cout<<x[i]<<"\t";
    }
    return 0;
}