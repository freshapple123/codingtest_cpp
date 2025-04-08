#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	vector<int> v = { 1,2,2,3,3,3,4,4,5,5,5 };

	auto newEnd = unique(v.begin(), v.end());

	for (auto it = v.begin(); it != newEnd; it++)
	{
		cout << *it << " ";
	}

	return 0;
}