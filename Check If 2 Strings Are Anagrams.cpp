#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string first_word(100, ' ');
    cout << "Enter the first word: ";
    cin >> first_word;

    int n1 = first_word.length();

    string second_word(100, ' ');
    cout << "Enter the second word: ";
    cin >> second_word;

    int n2 = second_word.length();

    int first_count[26] = { 0 };
    int second_count[26] = { 0 };

    for (int i = 0; i < n1; i++)
    {
        int position = first_word[i] - 'a';
        first_count[position]++;
    }

    for (int i = 0; i < n2; i++)
    {
        int position = second_word[i] - 'a';
        second_count[position]++;
    }

    bool is_anagram = true;

    for (int i = 0; i < 26; i++)
    {
        if (first_count[i] != second_count[i])
        {
            is_anagram = false;
            break;
        }
    }

    if (is_anagram)
    {
        cout << "Anagram!" << endl;
    }
    else
    {
        cout << "Not Anagram!" << endl;
    }

    return 0;
}


