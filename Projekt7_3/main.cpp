#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "podaj liczbe a"<<endl;
    cin>>a;
    cout << "podaj liczbe b"<<endl;
    cin>>b;

    if( b!=0)
    {
        if ( a%b==0)
        {
            cout << "liczba " << a <<" jest podzielna przez "<< b<<endl;
        }
        else
        {
            cout <<"liczba " <<a<< " nie jest podzielna przez "<<b<<endl;
        }
    }
    else
    {
        cout << "nie dzielimy przez zero!"<<endl;
    }
}
