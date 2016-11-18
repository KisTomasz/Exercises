#include <iostream>
#include <functional>
	




int main()
{


	std::function<int(int)> multipleBy5 = std::bind(std::multiplies<int>(), std::placeholders::_1, 5);
	std::cout << multipleBy5(4) << std::endl;

	multipleBy5 = [] (int x) { return x * 5; };
	std::cout << multipleBy5(4) << std::endl;

	return 0;
}
