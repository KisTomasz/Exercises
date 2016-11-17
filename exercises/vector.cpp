#include <iostream>
#include <vector>






int main(){

	std::vector<int> vec = {1,2,3,4,5,6};
	vec.erase(vec.begin());
	vec.push_back(5);
	vec.emplace(vec.begin(), 12);
	
	std::cout << "Size = " << vec.size() << std::endl;
	std::cout << "Size = " << vec.max_size() << std::endl;
	
	for(auto i : vec)
		{
			std::cout << i << " ";
		}
	std::cout << std::endl;
	
	vec.clear();
	std::cout << "Size = " << vec.size() << std::endl;

return 0;
}
