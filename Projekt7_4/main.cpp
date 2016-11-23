#include <iostream>

using namespace std;

int main()
{
    int wysokosc;
    int szerokosc;

    cout << "Podaj wysokosc"<<endl;
    cin>>wysokosc;

    cout <<"Podaj szerokosc"<<endl;
    cin>>szerokosc;

    for (int j =1; j <= wysokosc;j++)
    {

        for (int i =1; i< szerokosc;i++)
        {
            cout <<"X";
        }
        cout <<"X"<<endl;
    }
}
