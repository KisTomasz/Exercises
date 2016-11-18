#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <iterator>

int main()
{
	size_t initSize = 20;	
	std::vector<int> vec(initSize);
	srand(time(NULL));
	
	
	for(auto iterator = vec.begin(); iterator < vec.end(); iterator++)
	{
		*(iterator) = random() % 100;
	}

	std::sort(vec.begin(), vec.end());
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ") );
	std::cout << std::endl;
	
	auto it = std::unique(vec.begin(), vec.end());
	vec.resize(std::distance(vec.begin(),it));
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ") );
	std::cout << std::endl;
	
	std::reverse(vec.begin(), vec.end());
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " ") );
	std::cout << std::endl;
	
	return 0;
}
