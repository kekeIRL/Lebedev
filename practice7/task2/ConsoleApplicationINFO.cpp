#include <iostream>
#include <set>
#include <algorithm>

std::set<int> cool_intersection(std::set<int> A, std::set<int> B)
{
	std::set<int> result;
	std::set_intersection(A.begin(), A.end(),
						  B.begin(), B.end(),
						  std::inserter(result, result.begin()));
	std::set<int> result2;
	for(int i : result)
	{
		if (i > 0)
			result2.insert(i);
	}
	return result2;
}

int main()
{
	std::set<int> A;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input A element " << i << ": ";
		int a; std::cin >> a;
		A.insert(a);
	}
	std::set<int> B;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input B element " << i << ": ";
		int a; std::cin >> a;
		B.insert(a);
	}

	std::cout << "result C: ";
	std::set<int> C = cool_intersection(A, B);
	for (int i : C)
		std::cout << i << ' ';
}