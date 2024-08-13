#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	int arr[4] = {5, 100, 23, 15};
	std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));

	int value = 17;
	bool vector = easyfind(vect, value);

	if (vector)
		std::cout << value << " has been found in vector" << std::endl;
	else
		std::cout << value << " has not been found in vector" << std::endl;

	std::list<int> lst;
	lst.push_back(75);
	lst.push_back(123);
	lst.push_back(17);
	lst.push_back(2);
	bool list = easyfind(lst, value);

	if (list)
		std::cout << value << " has been found in list" << std::endl;
	else
		std::cout << value << " has not been found in list" << std::endl;
}