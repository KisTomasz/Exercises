#include <iostream>
#include <vector>


int main(){

	std::vector<int> vec{};
	
	std::cout << "size = " << vec.size() << std::endl;
	std::cout << "capacity = " << vec.capacity() << std::endl;
	
	vec.resize(10, 5);
	
	std::cout << "size = " << vec.size() << std::endl;
	std::cout << "capacity = " << vec.capacity() << std::endl;

	vec.reserve(20);
	
	std::cout << "size = " << vec.size() << std::endl;
	std::cout << "capacity = " << vec.capacity() << std::endl;
	
	vec.shrink_to_fit();

	std::cout << "size = " << vec.size() << std::endl;
	std::cout << "capacity = " << vec.capacity() << std::endl;

	
	
return 0;
}
