#include <iostream>

using namespace std;


int main()
{
    int n,i,a,j;
    cout<<"Enter the Number\n";
    cin>>n;
    cout<<"Prime Numbers are: \n";
    for(i=1; i<=n; i++)
    {
        a=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
               {a++;}
        }
        if(a==2)
            {cout<<i<<",";}
    }
    return 0;
}

