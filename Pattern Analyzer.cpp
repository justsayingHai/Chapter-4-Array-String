#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    int n1 = text.length();

    string pattern;
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    
    int n2 = pattern.length();

    int temp = 0;
    
    for (int i = 0; i <= n1 - n2; i++)
    {
        bool match = true;

        for (int j = 0; j < n2; j++)
        {
            if (text[i + j] != pattern[j])
            {
                match = false;
                break;
            }
        }

        if (match)
        {
            cout << i;
            return i;
        }
    }

    return -1;

}


