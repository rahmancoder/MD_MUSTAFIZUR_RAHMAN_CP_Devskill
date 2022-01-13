#include <bits/stdc++.h>

using namespace std;

int main()
{

    int testcase;
    int sumx = 0, sumy = 0, sumz = 0, total = 0;
    cin >> testcase;

    while (testcase--)
    {

        int x, y, z;
        cin >> x >> y >> z;
        sumx = sumx + x;
        sumy = sumy + y;
        sumz = sumz + z;

        // total=sumx+sumy+sumz;
    }

    // x=x1+x2+x3 , y=y1+y2+y3, z=z1+z2+z3
    // equilibrium is when all are (x,y,z)=(0,0,0)

    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}