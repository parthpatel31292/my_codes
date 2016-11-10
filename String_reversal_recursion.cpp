#include<iostream>

#define MAX 100
using namespace std;

char* getReverse(char[]);

int main() {

	char str[MAX], *rev;

	cout << "enter string" << endl;
	cin >> str;

	rev = getReverse(str);

	cout << rev;
	system("pause");
	return 0;
}

char* getReverse(char str[]) {

	static int i = 0;
	static char rev[MAX];

	if (*str) {
		getReverse(str + 1);
		rev[i++] = *str;
	}

	return rev;
}