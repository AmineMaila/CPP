#include <iostream>
#include "Array.hpp"

int main()
{
	{
		Array<int> nums(15);
		int* nums2 = new int[17];
		try
		{
			for (int i = 0; i < 17; i++)
			{
				nums[i] = i;
				nums2[i] = i;
			}
		}
		catch (std::exception &err)
		{
			std::cout << err.what() << std::endl;
		}
    	delete [] nums2;
	}
	Array<int> nums1(5);
	for (int i = 0; i < 5; i++)
		nums1[i] = i;
	Array<int> nums2;
	nums2 = nums1;
	for (int i = 0; i < 5; i++)
		std::cout << nums2[i] << std::endl;

	nums1[1] = 150;
	std::cout << nums2[1] << std::endl;
	
    return 0;
}