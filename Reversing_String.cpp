#include<iostream>
#include<string>
#include<vector>
using namespace std;

char astring[] = "Sore was I ere I saw Eros";

void reverse(char*str)
{
	int i = 0;
	i = strlen(str);
	vector<int>temp(i);
	for (int j = 0; j < i; j++)
	{
		temp[j] = str[(i-1) - j];
	}
	for (int a = 0; a < i; a++)
	{
		str[a] = temp[a];
	}
}

int main()
{
	reverse(astring);
	for (int b = 0; b < strlen(astring); b++)
	{
		cout << astring[b];
	}
	system("pause");
	return 0;

}