#include <iostream>
#include <climits>
using namespace std;

int n, m, arr[26][26];
char v1, v2;
string is;

void floyd() {
	for (int p = 0; p < 26; p++) {
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < 26; j++) {
				if (i == j || j == p || i == p)
					continue;
				else if (arr[i][p] != INT_MAX && arr[p][j] != INT_MAX)
					arr[i][j] = min(arr[i][j], arr[i][p] + arr[p][j]);
			}
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> v1 >> is >> v2;
		arr[v1 - 'a'][v2 - 'a'] = 1;
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++) {
			if (arr[i][j] != 1)
				arr[i][j] = INT_MAX;
		}
	}

	floyd();

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> v1 >> is >> v2;
		if (arr[v1-'a'][v2-'a'] != INT_MAX)
			cout << "T" << endl;
		else
			cout << "F" << endl;
	}

	return 0;
}