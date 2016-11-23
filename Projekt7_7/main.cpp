#include <iostream>

using namespace std;

int main()
{
    string nick;
    int zloto =100;
    int marchewki =0;

    cout << "Podaj nick bohatera"<<endl;
    cin>> nick;

    cout <<"Nick: "<<nick<<endl;
    cout <<"Ilosc zlota: "<<zloto<<endl;
    cout <<"Ilosc marchewek: "<<marchewki<<endl;

    string klawisz;

    while (zloto >=0 && zloto <500 && marchewki >=0)
    {
        cout << "podaj klawisz, wybor zatwierdz enterem"<<endl;
        cin>>klawisz;
        if (klawisz == "A" || klawisz =="a")
        {
            zloto -= 20;
            marchewki +=30;
        }
        else if (klawisz == "S" || klawisz =="s")
        {
            zloto += 50;
            marchewki -=10;
        }
        else if (klawisz == "D" || klawisz =="d")
        {
            zloto += 250;
            marchewki -=5;
        }
        else if (klawisz == "F" || klawisz =="f")
        {
            zloto -= 100;
            marchewki +=35;
        }
        else
        {
            cout << "bledny klawisz"<<endl;
        }

        cout <<"Ilosc zlota: "<<zloto<<endl;
        cout <<"Ilosc marchewek: "<<marchewki<<endl;

    }

    cout << "koniec gry!"<<endl;




}
