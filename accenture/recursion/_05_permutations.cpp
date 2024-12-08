#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> getPermutations(string p, string up)
{
	vector<string> list;
	if (up == "")
	{
		list.push_back(p);
		return list;
	}

	vector<string> list1;
	for (int i = 0; i < p.size() + 1; i++)
	{
		string first = p.substr(0, i);
		string second = p.substr(i);
		list1 = getPermutations(first + up[0] + second, up.substr(1));
		list.insert(list.end(), list1.begin(), list1.end());
	}
	return list;
}

int main()
{

	vector<string> permutations = getPermutations("", "abc");
	for (auto &a : permutations)
	{
		cout << a << endl;
	}
	return 0;
}
