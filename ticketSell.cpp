#include <iostream>

using namespace std;

int main()
{
    int c;
    int inftotal=0, infnum=0;
    int adutotal=0, adunum=0;
    int chitotal=0, chinum=0;
    int teentotal=0, teennum=0;
    m:

    cout<<"are you \n (1) for infant\n (2) for child\n (3) for teenager\n (4) for adult \n (5) see total information"<<endl;
    cin>>c;
    if(c<0){
        exit(0);
    }
    switch(c){
    case 1:
        cout<<"take your ticket"<<endl;
        inftotal+=10;
        infnum++;
        break;
    case 2:
        cout<<"take your ticket"<<endl;
        chitotal+=5;
        chinum++;
        break;
    case 3:
        cout<<"take your ticket"<<endl;
        teentotal+=20;
        teennum++;
        break;
    case 4:
        cout<<"take your ticket"<<endl;
        adutotal+=20;
        adunum++;
        break;
    case 5:
        goto i;
    }
    system("cls");
    goto m;
    i:
    system("cls");
    cout<<"total number of people attend the function: "<<infnum+chinum+teennum+adunum<<endl;
    cout<<"total number of ticket the function: "<<inftotal+chitotal+teentotal+adutotal<<endl;
    cout<<"list of people"<<endl;
    cout<<"infants: "<<infnum<<endl;
    cout<<"children: "<<chinum<<endl;
    cout<<"teenagers: "<<teennum<<endl;
    cout<<"adults: "<<adunum<<endl;











    return 0;
}
