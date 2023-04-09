#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
int i, j, k,m=0,c=1,n;
int b;

      for(m=0;m<=0;m++)
        {
        for(i=10;i>=1;i--)
        {
             b=i-1;

            for(j=10;j>i;j--)
            {
            cout<<setw(1)<<" ";
            }
            for(k=1;k<=i;k++)
            {
            cout<<setw(1)<<b;
            b--;
            }n=1;
            for(k=2;k<=i;k++)
            {
            cout<<setw(1)<<n;
            n++;
            }
            cout<<"\n";
            }
        }

        for(i=2;i<=10;i++)
        {
            for(j=10;j>i;j--)
            {
            cout<<setw(1)<<" ";
            } b=j-1;
            for(k=1;k<=i;k++)
            {
            cout<<setw(1)<<b;
            b--;
            }n=1;
            for(k=2;k<=i;k++)
            {
            cout<<setw(1)<<n;
            n++;
            }
            cout<<"\n";
        }
   system("pause>0");
}

