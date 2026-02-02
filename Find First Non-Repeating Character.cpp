#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	cin >> text;
	string first_unique_char = "";

	int n = text.length();

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (text[i] == text[j] && i != j)
			{
				count++;
				break;
			}
		}
		
		if (count == 0)
		{
			first_unique_char = text[i];
			break;
		}
	}

	if (first_unique_char.empty())
	{
		cout << "None" << endl;
	}
	else
	{
		cout << first_unique_char << endl;
	}
	
	return 0;
}

