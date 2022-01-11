#include <iostream>

using namespace std;

int main()
{
    // cout<<"Hello World";

    int testcase;

    cin >> testcase;

    while (testcase--)
    {
        string long_number_word;
        cin >> long_number_word;

        if (long_number_word.size() <= 10)
        {
            cout << long_number_word << endl;
        }
        else
        {
            cout << long_number_word[0] << long_number_word.size() - 2 << long_number_word[long_number_word.size() - 1] << endl;
        }
    }

    return 0;

    // Problem link- https://codeforces.com/problemset/problem/71/A

    // Input

    // 4
    // word
    // localization
    // internationalization
    // pneumonoultramicroscopicsilicovolcanoconiosis

    // Output

    // word
    // l10n
    // i18n
    // p43s
}