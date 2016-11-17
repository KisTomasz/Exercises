#include <iostream>
#include <array>



int main(){

	std::array<int, 10> array1;
	array1.fill(5);
	array1.at(3) = 3;

	std::array<int, 10> array2{};
	array2.swap(array1);

	for(auto i: array1){

		std::cout<< i << " ";
	}	
	std::cout << std::endl;

	for(auto i: array2){

		std::cout<< i << " ";
	}	
	std::cout << std::endl;

return 0;
}
