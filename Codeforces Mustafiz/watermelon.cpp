#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";
    int watermelon;

    cin >> watermelon;

    if (watermelon % 2 == 0 && watermelon > 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}