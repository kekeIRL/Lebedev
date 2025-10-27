#include <iostream>
#include <vector>

std::vector<double> array_treshold(double array[10], double t)
{
	std::vector<double> result;
	for (int i = 0; i < 10; i++)
		if (array[i] > t)
			result.push_back(array[i]);
	return result;
}

int main()
{
	double A[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << "please input array element " << i;
		double a; std::cin >> a;
		A[i] = a;
	}
	double t; std::cin >> t;
	
	std::vector<double> B = array_treshold(A, t);
	std::cout << "result: ";
	for(double i : B)
	{
		std::cout << i << " ";
	}

	std::cin.get();
	std::cin.get();
}