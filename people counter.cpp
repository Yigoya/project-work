#include <iostream>

using namespace std;

int main()
{
    int infant,child,teen,adult,input;
    int sum1=0,sum2=0,sum3=0,sum4=0;
    int l=0,n=0,m=0,p=0;
    cout << "***KEY***\n"
         <<"1 for infant\n"
         <<"2 for child\n"
         <<"3 for teenager\n"
         <<"4 for adult\n"
          <<"***Enter -ve Number to Exit***\n";
    cout<<"Enter number\n";

    int i=1;
    while(i>0){
     cin>>input;
     if(input>=1 && input<=4)
        {switch(input)
        {
          case 1: sum1+=5;
                  ++l;break;
          case 2: sum2+=10;
                   n++;break;
          case 3: sum3+=20;
                   m++;break;
          case 4: sum4+=20;
                   ++p;break;

          }
      }
    else if(input<0){break;}
    else{continue;}
        i++;}

    system("cls");
    cout<<endl;
    cout<<"There are "<<l<<" infant"<<endl;
    cout<<"There are "<<n<<" child"<<endl;
    cout<<"There are "<<m<<" teenager"<<endl;
    cout<<"There are "<<p<<" adult"<<endl;
    cout<<endl;
    cout<<"Total number of people that attend school closing function is "<<l+m+n+p<<endl;
    cout<<"The total ticket sale : "<<l+m+n+p<<endl;
    cout<<"Total fees collected = "<<sum1+sum2+sum3+sum4;

    system("pause>0");
}
