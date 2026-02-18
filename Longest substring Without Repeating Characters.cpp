#include <iostream>
#include <string>

using namespace std;

int main()
{
	char input_text[300];
	cout << "Enter a string: ";
	cin.getline(input_text, 300);

	bool visited[256] = { false };

	int start = 0;
	int max = 0;
	int end = 0;

	while (input_text[end] != '\0')
	{
		char current_char = input_text[end];

		while (visited[current_char] == true)
		{
			char left_char = input_text[start];
			visited[left_char] = false;
			start++;
		}

		visited[current_char] = true;

		int current_length = end - start + 1;
		if (current_length > max)
		{
			max = current_length;
		}

		end++;
	}

	cout << "Result: " << max << endl;

	return 0;

}
