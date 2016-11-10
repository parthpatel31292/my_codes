#include<iostream>
using namespace std;



void check(int a)
{
	int j;
	if (a == 2)
	{
		cout << "BuzzFizz" << endl;
	}
	else if (a % 3 == 0)
	{
		cout <<"Buzz"<< endl;
	}
	else if (a % 5 == 0)
	{
		cout <<"Fizz"<< endl;

	}
	else if ((a % 1 == 0) && (a%a == 0))
	{
		for (j = 2; j<a; j++)
		{
			if (a%j == 0)
			{
				cout << a << endl;
				break;

			}
			if (j == a - 1)
			{
				cout << "BuzzFizz" << endl;
			}
		}
	}

}


int main()
{
	int i, n, sum = 0;
	cout << "Enter value for n"<< endl;
	cin >> n;
	int sum_final, sum1 = 1;
	cout<<"fabonacci series:"<< endl;
	cout<< sum<< endl;
	cout<< sum1<< endl;


	for (i = 0; i <n - 2; i++)
	{
		sum_final = sum + sum1;
		sum = sum1;
		sum1 = sum_final;
		
			check(sum_final);


	}
	system("pause");
	return 0;
	
}




