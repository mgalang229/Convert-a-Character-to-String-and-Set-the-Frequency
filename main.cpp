#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	char a = 'a';
	char b = 'b';
	// string(first argument, second argument)
	// first argument = number of times the character will repeat
	// second argument = the character itself
	cout << string(1, a) + string(1, b) << '\n';
	return 0;
}
