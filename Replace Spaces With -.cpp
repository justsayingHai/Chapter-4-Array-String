#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

    int n = text.length();

    for (int i = 0; i < n; i++)
    {
        if (text[i] == ' ')
        {
            text[i] = '-';
        }
    }

    cout << text;
    return 0;
}
