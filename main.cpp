#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int lzt,uczniowie,cukierki; //lzt - liczba zestawow testowych
    cin>>lzt;
    for(int i=0;i<lzt;i++)
    {
        cin>>uczniowie>>cukierki;
        if(uczniowie==1) cout<<"TAK"<<endl;
        else if (uczniowie>1) {
        int zjedzone_cukierki=floor(cukierki/(uczniowie-1));
        int zostalo=cukierki-(zjedzone_cukierki*(uczniowie-1));
        if(zostalo>=1) cout<<"TAK"<<endl;
        else cout<<"NIE"<<endl;
        }
    }
    return 0;
}


