#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_text;
    string unique_characters;

    cin >> input_text;

    for (int i = 0; i < input_text.length(); i++)
    {
        bool repeated = false;

        for (int j = 0; j < unique_characters.length(); j++)
        {
            if (input_text[i] == unique_characters[j])
            {
                repeated = true;
                break;
            }
        }

        if (!repeated)
        {
            unique_characters.push_back(input_text[i]);
        }
    }

    cout << unique_characters << endl;

    return 0;
}
