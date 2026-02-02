#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text[200];
    cin.getline(text, 200);

    int length = strlen(text);
    int left_index = 0;
    int right_index = length - 1;

    while (left_index < right_index)
    {
        char temp = text[left_index];
        text[left_index] = text[right_index];
        text[right_index] = temp;

        left_index++;
        right_index--;
    }

    for (int i = 0; i < length; i++)
    {
        cout << text[i];
    }

    cout << endl;

    return 0;
}



