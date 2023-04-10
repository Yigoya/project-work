#include <iostream>
#include <windows.h>
using namespace std;
void ticket(int x){
    system("cls");

        cout<<"\t\t\t-----------------------------------------"<<endl;
        cout<<"\t\t\t\tentrance ticket number "<<x<<" succesful"<<endl;

        cout<<"\t\t\t\ttake your ticket"<<endl;
        cout<<"\t\t\t-----------------------------------------"<<endl;
        Sleep(1000);
        system("cls");


}
int main()
{
    int c;
    int inftotal=0, infnum=0;//inf means infant
    int chitotal=0, chinum=0;//chi means child
    int teentotal=0, teennum=0;//teen means teenager
    int adutotal=0, adunum=0;//adu mean adult
    m:
    cout<<"\t\t\t-----------------------------------------"<<endl;Sleep(100);
    cout<<"\t\t\t|\tentrance ticket number     price|"<<endl;Sleep(100);
    cout<<"\t\t\t|  (1) for infant                 10 ETB|"<<endl;Sleep(100);
    cout<<"\t\t\t|  (2) for child                   5 ETB|"<<endl;Sleep(100);
    cout<<"\t\t\t|  (3) for teenager               20 ETB|"<<endl;Sleep(100);
    cout<<"\t\t\t|  (4) for adult                  20 ETB|"<<endl;Sleep(100);
    cout<<"\t\t\t|  (5) see total information            |"<<endl;Sleep(100);
    cout<<"\t\t\t-----------------------------------------"<<endl;Sleep(100);
    cin>>c;
    if(c<0){
        exit(0);
    }
    switch(c){
    case 1:
        ticket(c);
        inftotal+=10;
        infnum++;
        break;
    case 2:
        ticket(c);
        chitotal+=5;
        chinum++;
        break;
    case 3:
        ticket(c);
        teentotal+=20;
        teennum++;
        break;
    case 4:
        ticket(c);
        adutotal+=20;
        adunum++;
        break;
    case 5:
        goto i;
    default:
        cout<<"invalid input"<<endl;
    }
    system("cls");
    goto m;
    i:
    system("cls");
    int total_people = infnum+chinum+teennum+adunum;
    int total_sold = inftotal+chitotal+teentotal+adutotal;
    int* tp = &total_people;
    int* ts = &total_sold;
    cout<<"/-------------------------------------------------------------------------------------------------- "<<endl;Sleep(200);
    cout<<"total number of people attend the function |      "<<*tp<<endl;
    cout<<"total number of ticket             :       |      "<<*tp<<"  total sold "<<*ts<<" ETB"<<endl;
    cout<<"                                           |      "<<endl;
    cout<<"list of people                             |      "<<endl;
    cout<<"\tinfants:                           |      "<<infnum<<endl;
    cout<<"\tchildren:                          |      "<<chinum<<endl;
    cout<<"\tteenagers:                         |      "<<teennum<<endl;
    cout<<"\tadults:                            |      "<<adunum<<endl;
    cout<<"----------------------------------------------------------------------------------------------------/"<<endl;Sleep(200);











    return 0;
}
