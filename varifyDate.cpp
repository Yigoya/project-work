#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

bool leap(int y){
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)){
        return true;
    }
    return false;
}
void load(){
    cout<<endl;
    cout<<"\tloading ";
    for(int i=0; i<30;i++){
        cout<<"- ";Sleep(100);
    }
    cout<<endl;
}

int main() {

   int day,month,year;
   bool isvalid=false;
   string date;
   cout<<"Please enter a date (dd mm yyyy eg. 01072023): ";
   cin>>date;
   day = stoi(date.substr(0,2));
   month = stoi(date.substr(2,2));
   year = stoi(date.substr(4));
   int* d = &day;
   int* m = &month;
   int* y = &year;

    load();
    system("cls");
    if((*d<=31 &&*d>=1) && (*m<=12&& *m>=1)){

       switch(*d){
        case 29: if(leap(*y)==false){cout<<"Invalid day of month 29"; break;}
        case 28:

            if(*m==2){
                isvalid = true;
            }

            break;
        case 30:
            if(*m==4 || *m==6 || *m==9 || *m==11 ){
                isvalid = true;
            }
            break;
        case 31:
            if(*m==1 || *m==3 || *m==5 || *m==7 || *m==8 || *m==10 || *m==12){
                isvalid = true;
            }
            break;
        default:
            if(day<=27){
            isvalid = true;
            }
            break;
       }
    }

    else{
        if(*d>31){
            cout<<"\tInvalid day: "<<*d<<endl;
        }
        if(*m>12){
            cout<<"\tInvalid month: "<<*m<<endl;
        }
    }



    if(isvalid && leap(*y)){
        cout<<"\t"<<*d<<"/"<<*m<<"/"<<*y<<" is a valid date and also a Leap Year"<<endl;
    }
    else if(isvalid && leap(*y)==false){
        cout<<"\t"<<*d<<"/"<<*m<<"/"<<*y<<" is a valid date but not a Leap Year"<<endl;
    }
    else{
        cout<<"\tinvalid date "<<*d<<"/"<<*m<<"/"<<*y<<endl;
    }
    if(leap(*y)&&isvalid){
        int leap_year = *y;
            cout<<"\tHere is below the next twenty Leap years are: "<<endl;
        for(int i=0;i<20;i++){
            if(i%4==0){
                cout<<endl;
            }
            leap_year+=4;
            cout<<"\t"<<leap_year;
        }
    }
    string c;
    cout<<"do you want to try again (yes) or (no)"<<endl;
    cin>>c;
    if(c=="yes"){
        system("cls");
        main();
    }
    return 0;
}
