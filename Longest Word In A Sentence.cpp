#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    cout << "Enter your sentence: ";
    getline(cin, sentence);

    int n = sentence.length();

    int longest_word_start = 0;
    int longest_word_length = 0;

    int current_word_start = 0;
    int current_word_length = 0;

    for (int i = 0; i <= n; i++)
    {
        if (i == n || sentence[i] == ' ')
        {
            if (current_word_length > longest_word_length)
            {
                longest_word_length = current_word_length;
                longest_word_start = current_word_start;
            }

            current_word_length = 0;
            current_word_start = i + 1;
        }
        else
        {
            current_word_length++;
        }
    }

    cout << "Longest word is: ";
    for (int i = 0; i < longest_word_length; i++)
    {
        cout << sentence[longest_word_start + i];
    }

    return 0;
}
