#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        int c=0;
        while(c<=i){
            cout<<"  ";
            c++;
        }
        for(int j=n-i;j>=0;j--){
            cout<<j<<' ';
        }
        for(int j=1;j<=n-i;j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        int c=1;
        while(c<=i){
            cout<<"  ";
            c++;
        }
        for(int j=n-i+1;j>=0;j--){
            cout<<j<<' ';
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }


    return 0;
}
