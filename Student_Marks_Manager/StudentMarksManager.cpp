#include <bits/stdc++.h>
using namespace std;
int main()
{
	int LoopTime;
	std::cout << "Enter How Many Marks You Want to Add: ";
	std::cin >> LoopTime;
	vector<int> Marks;
	int MarksPushInt;
	for (int i = 1; i < LoopTime + 1; i++)
	{
		std::cout << "Enter Mark " << i << ": ";
		std::cin >> MarksPushInt;
		Marks.push_back(MarksPushInt);
	}
	for (int Mark : Marks) {
		std::cout << Mark << std::endl;
	}
	return 0;
}

// I didn't really added anything awsome I just added a random code never mind :) sorry for that.