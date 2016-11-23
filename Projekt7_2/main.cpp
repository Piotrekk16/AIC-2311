#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( time(NULL));

    int losowaLiczba = rand()%1000+1;
    int wpisanaLiczba;
    int iloscProb=0;

    do
    {
        cout << "podaj liczbe"<<endl;
        cin>>wpisanaLiczba;
        iloscProb++;

        int roznica = abs(wpisanaLiczba-losowaLiczba);

        if (roznica >=15)
        {
            cout <<"zimno"<<endl;
        }
        else if (roznica >=10 && roznica <15)
        {
            cout <<"letnio"<<endl;
        }
        else if ( roznica >=5 && roznica <10)
        {
            cout <<"goraco"<<endl;
        }
        else if (roznica <5 && roznica >0)
        {
            cout <<"bardzo goraco"<<endl;
        }
        else if (roznica ==0)
        {
            cout << "Brawo - odgadnieto liczbe"<<endl;
        }

        if ( wpisanaLiczba > losowaLiczba)
        {
            cout << "Wpisana liczba jest za duza"<<endl;
        }
        else if ( wpisanaLiczba < losowaLiczba)
        {
            cout << "Wpisana liczba jest za mala"<<endl;
        }


    }
    while (wpisanaLiczba != losowaLiczba && iloscProb <=10);


}
