#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	cin >> text;

	int length = text.length();
	int left_index = 0;
	int right_index = length - 1;

	for (left_index, right_index; left_index < length, right_index >= 0; left_index++, right_index++)
	{
		if (text[left_index] == text[right_index])
		{
			cout << "Palindrome";
			break;
		}
		else
		{
			cout << "Not Palindrome";
			break;
		}
	}

	if (length == 1)
	{
		cout << "Palindrome";
	}

	return 0;

}


