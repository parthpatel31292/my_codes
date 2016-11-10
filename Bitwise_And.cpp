#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int t;
	cin >> t;

	for (int a0 = 0; a0 < t; a0++) {
	 int n;
		int k;

		cin >> n >> k;
		int result = 0;
		

		for (int a = 1; a <= n; a++) {
			int A = a;
			int B = a + 1;
			while (B <= n) {

				if (((A & B) < k) && ((A & B) > result)) {
					result = A & B;
				}
				B++;
			}
		}
		cout << result << endl;

	}
	system("pause");
	return 0;
	
}
