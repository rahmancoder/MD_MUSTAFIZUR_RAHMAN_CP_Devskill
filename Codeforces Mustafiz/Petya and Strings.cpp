#include <iostream>
using namespace std;

int main()
{
    // cout<<"hello world";

    string word1, word2;

    cin >> word1 >> word2;

    for (int i = 0; i < word1.size(); i++)
    {
        //checking the uppercase then converting to lowercase in ascii
        if (word1[i] < 91)
        {
            word1[i] = word1[i] + 32;
        }
        if (word2[i] < 91)
        {
            word2[i] = word2[i] + 32;
        }
    }

    if (word1 < word2)
    {
        cout << -1;
    }
    if (word1 > word2)
    {
        cout << 1;
    }
    if (word1 == word2)
    {
        cout << 0;
    }

    return 0;

    // problem Link= https://codeforces.com/problemset/problem/112/A

    // input
    // aaaa
    // aaaA

    // output
    // 0

    // input
    // abs
    // Abz

    // output
    // -1

    // input
    // abcdefg
    // AbCdEfF

    // output
    // 1
}