#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    cout << "Enter the text: ";
    cin >> text;

    for (int i = 0; text[i] != '\0';)
    {
        char current_char = text[i];
        int count = 0;

        while (text[i] == current_char)
        {
            count++;
            i++;
        }
        cout << current_char << count;
    }

    return 0;
}

