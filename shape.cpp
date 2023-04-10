#include <iostream>

using namespace std;

int main()
{
    for(int i=0;i<=9;i++){
        int c=0;
        while(c<=i){
            cout<<"  ";
            c++;
        }
        for(int j=9-i;j>=0;j--){
            cout<<j<<' ';
        }
        for(int j=1;j<=9-i;j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    for(int i=9;i>=1;i--){
        int c=1;
        while(c<=i){
            cout<<"  ";
            c++;
        }
        for(int j=9-i+1;j>=0;j--){
            cout<<j<<' ';
        }
        for(int j=1;j<=9-i+1;j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }


    return 0;
}
