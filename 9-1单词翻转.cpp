#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string s, a, b;
	getline(cin, s);
	vector<string> v;
	string pattern = " ";
	s = s + pattern;
	for(int i = 0; i < s.size(); i++) {
		int pos = s.find(pattern, i);
		if(pos < s.size()) {
			string ss = s.substr(i, pos - i);
			v.push_back(ss);
			i = pos + pattern.size() - 1;
		}
	}
	vector<string>::iterator it;
	for(it = v.begin(); it != v.end(); it++) {
		for(int i = (*it).length() - 1; i >= 0; i--) {
			cout << (*it)[i];
		}
		cout << " ";
	}
	cout << endl;
	return 0;
} 