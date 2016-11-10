#include<iostream>
using namespace std;

int max_index(char* str)
{
	char* temp = str;
	int count = 0;
	int i = 0;
	int ans = 0;
	int index = 0;
	while (*str != '\0')
	{
		temp++;
		while (*temp != '\0')
		{
			if (*str == *temp)
			{
				count++;
			}
			temp++;
		}
		if (count > ans)
		{
			ans = count;
			index = i;
		}
		count = 0;
		i++;
		str++;
		temp = str;
	}
	return index;
}

int main()
{
	char arr[] = "mynameizzzzzzsparthaaaazzzzzaaaa";
	int y = max_index(arr);
	cout << "highest freq char in this string is : " << arr[y] << endl;
	system("pause");
	return 0;
}