#include <bits/stdc++.h>
using namespace std;

int main () {
	vector < int > v;
	v.resize(100);
	for (int i=0; i<100; i++) {
		cin >> v[i];
	}
	cout << *max_element(v.begin(),v.end()) << endl;
	cout <<  max_element(v.begin(), v.end()) - v.begin() << endl;
	return 0;
}


