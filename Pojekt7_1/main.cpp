#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand( time( NULL ) );

    cout << "Wylosowana liczba od 0 do 1: "<<(float)rand() / RAND_MAX<<endl;
}
