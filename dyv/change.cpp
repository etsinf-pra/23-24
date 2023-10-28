// change problem

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float coin[10] = {20,10,5,2,1,0.5,0.25, 0.1, 0.05, 0.01};
    int change[10];
    float paid;

    cout << "Cantidad: ";
    cin >> paid;

    for (int i = 0; i < 10; i++)
    {
        while (paid >= coin[i])
        {
            paid -= coin[i];
            change[i]++;
        }
    }
    for( int i : coin)
        cout << setfill(' ') << setw(2) << i << " ";
    cout << endl;
    for( int i : change)
        cout << setfill(' ') << setw(2) << i << " ";
    cout << endl;
    return 0;
}
