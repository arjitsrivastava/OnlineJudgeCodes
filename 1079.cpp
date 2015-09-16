#include <bits/stdc++.h>
using namespace std;

int main () {
	int tc;
	scanf("%d",&tc);
	while (tc--) {
		double a, b, c;
		cin >> a >> b >> c;
		a = a*2;
		b = b*3;
		c = c*5;
		double avg = 0.0;
		avg = (a+b+c)/10.0;
		cout << fixed << setprecision(1) << avg << endl;
	}
	return 0;
}


