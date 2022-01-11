#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Hello World";

    int i, j;

    //char word[100], new_word[100];

    string word, new_word;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        // checking consonants words
        if (word[i] != 'A' && word[i] != 'a' &&
            word[i] != 'E' && word[i] != 'e' &&
            word[i] != 'I' && word[i] != 'i' &&
            word[i] != 'O' && word[i] != 'o' &&
            word[i] != 'U' && word[i] != 'u' &&
            word[i] != 'Y' && word[i] != 'y')
        {
            new_word = new_word + '.';
            new_word = new_word + (char)tolower(word[i]);
        }
    }

    cout << new_word;

    return 0;

    // Problem link= https://codeforces.com/problemset/problem/118/A

    // Input
    // tour

    // Output
    // .t.r

    // Input
    // Codeforces

    // Output
    // .c.d.f.r.c.s
}