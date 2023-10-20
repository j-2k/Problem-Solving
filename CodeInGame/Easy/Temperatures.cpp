//https://www.codingame.com/ide/puzzle/temperatures
//100%
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();

    //int closestZero = (n == 0) ? 0 : abs(n);
    if(n==0)
    {
        cout << 0 << endl;
        return 0;
    }

    int closestZero;
    int closestZeroAbs;

    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        cerr << "Debug messages..." << t << endl;


        if(closestZeroAbs >= abs(t))
        {
            if(closestZero == t * -1)
            {
                closestZero = abs(closestZero);
                continue;
            }
            closestZeroAbs = abs(t);
            closestZero = t;
            continue;
        }
        if(i==0){closestZero = t; closestZeroAbs = abs(t);}
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    
    
    cout << closestZero << endl;
}