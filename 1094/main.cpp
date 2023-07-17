#include <bits/stdc++.h>

using namespace std;

int main() {
	int n; 
	long prev = -1, curr = -1, count = 0;
	scanf("%d", &n);
	scanf("%ld", &prev);
	n--;
	while (n--) {
		scanf("%ld", &curr);
		if (curr < prev) {
			long diff = prev - curr;
			count += diff;
			curr += diff;
		}
		prev = curr;
	}
	cout << count << endl;
	return 0;
}
