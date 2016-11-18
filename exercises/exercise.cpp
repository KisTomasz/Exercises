#include <iostream>
#include <vector>
#include <map>
#include <ctime>
#include <cstdlib>


int main()
{
	srand(time(NULL));

	std::map< int, std::vector<int> > map;
	
	for(int i = 0; i < 10; ++i)
	{
		std::vector<int> tmpVector;
		for(int j = 0; j < 5; ++j)
		{
			tmpVector.push_back(rand() % 10);
		}
		map.insert(std::pair<int, std::vector<int>>(i, tmpVector));
	}

	for(auto it = map.begin(); it != map.end(); ++it)
    {
        std::cout <<"Key "<< (*it).first << ": ";
        for(auto element : (*it).second)
        {
            std::cout << element << " ";
        }
        std::cout<<std::endl;
    }

	return 0;
}
