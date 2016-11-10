#include<iostream>
using namespace std;
void sort_dept(int* sort)
{
	for (int i = 0; i < 6; i++)
	{
		int a = i;
		while (a != 6)
		{
			if (sort[i] > sort[a])
			{
				int temp = sort[i];
				sort[i] = sort[a];
				sort[a] = temp;
			}
			a++;
		}
	}
}

int main()
{
	int arr_time[6] = { 900,940,950,1100,1500,1800 };
	int dep_time[6] = { 910,1510,1520,1530,1900,2000 };

	sort_dept(dep_time);

	int* a = arr_time;
	int* b = dep_time;
	int count = 0;
	int result = 0;
	bool stop = true;
	int c = 0;
	int d = 0;
	while (stop)
	{
		if (c != 6 && *a <= *b)
		{
			count++;
			a++;
			c++;
		}
		else
		{
			count--;
			b++;
			d++;
		}
		if (count > result)
		{
			result = count;
		}
		if (c == 6 && d == 6)
		{
			stop = false;
		}
	}
	
		cout << result << endl;
	
	system("pause");
	return 0;
		


}