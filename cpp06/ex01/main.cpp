#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data dave = {"david", 26};
	Data *p = &dave;
	std::cout << "raw pointer : " << p << std::endl;
	uintptr_t intptr = Serializer::serialize(p);
	std::cout << "serialized pointer : " << intptr << std::endl;
	Data *dp = Serializer::deserialize(intptr);
	std::cout << "deserialized pointer : " << dp << std::endl;
	std::cout << "age : " << dp->age << std::endl;
}