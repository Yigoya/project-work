#include <iostream>

using namespace std;

int main()
{
    int day,month,year;
    cout << "Enter date month and year dd/mm/yyyy" << endl;
    cout<<"Day :";
    cin>>day;
    cout<<"Month :";
    cin>>month;
    cout<<"Year :";
    cin>>year;
    cout<<endl;
    cout<<endl;
    bool flag=true;

               if(year>=1)
                    {
                      switch(month)
                      {
                       case 2: if(year%4==0 && year%100!=0 || year%400==0){if(day>=1&&day<=29)
                                        {cout<<day<<"/"<<month<<"/"<<year<<" is a valid date and also a Leap Year\n";


                                        }
                                        else {cout<<"Invalid day:"<<day<<endl; flag=false;}}
                                else{
                                         if(day>=1 && day<=28)
                                             cout<<day<<"/"<<month<<"/"<<year<<" is a valid date but not a Leap Year"<<endl;
                                        else{cout<<"Invalid day:"<<day<<endl;flag=false;}}

                                      break;

                        case 4:
                        case 6:
                        case 9:
                        case 11:if(year%4==0 && year%100!=0 || year%400==0){if(day>=1&&day<=30)
                                        cout<<day<<"/"<<month<<"/"<<year<<" is a valid date and also a Leap Year\n";
                                        else {cout<<"Invalid day:"<<day<<endl;flag=false;}}
                                else{
                                         if(day>=1 && day<=30)
                                             cout<<day<<"/"<<month<<"/"<<year<<" is a valid date but not a Leap Year"<<endl;
                                        else{cout<<"Invalid day:"<<day<<endl;flag=false;}}

                                      break;
                        case 1:
                        case 3:
                        case 5:
                        case 7:
                        case 8:
                        case 10:
                        case 12:if(year%4==0 && year%100!=0 || year%400==0){if(day>=1&&day<=31)
                                        cout<<day<<"/"<<month<<"/"<<year<<" is a valid date and also a Leap Year\n";
                                        else {cout<<"Invalid day:"<<day<<endl;flag=false;}}
                                else{
                                         if(day>=1 && day<=31)
                                             cout<<day<<"/"<<month<<"/"<<year<<" is a valid date but not a Leap Year"<<endl;
                                        else{cout<<"Invalid day:"<<day<<endl;flag=false;}}

                                      break;

                        default: (cout<<"Invalid month:"<<month)<<endl;flag=false;

                      }cout<<endl;

                    if((year%4==0 && year%100!=0 || year%400==0)&& flag)
                       {
                          cout<<"Here is below the next twenty Leap years are: ";
                          for(int i=1;i<=20;i++)
                          {
                              year+=4;
                              if(year%100==0)
                                {
                                   cout<<year<<",";
                                    continue;}
                              cout<<year<<",";
                          }
                      }
                }

    else{cout<<"Invalid year:"<<year;}


    system("pause>0");
}
