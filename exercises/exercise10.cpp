#include <iostream>
#include <algorithm>
#include <deque>
#include <ctime>
#include <cstdlib>
#include <iterator>

int main()
{
	srand(time(NULL));
	std::deque<int> deq;
	auto f = [=](){return std::modulus<int>{}(std::rand(),7); };
	//std::generate_n(std::back_inserter(deq), 14, f);
	deq.push_back(0);
	std::generate_n(deq.begin(), 14, f);
	
	std::cout<<deq.size() << std::endl;
	std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout <<std::endl;
	
	std::sort(deq.begin(), deq.end());
	std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout <<std::endl;

	auto it = std::unique(deq.begin(), deq.end());
	deq.resize(std::distance(deq.begin(), it));
	std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout <<std::endl;


	std::rotate(deq.begin(), deq.begin() + deq.size() / 2 , deq.end());
	std::copy(deq.begin(), deq.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout <<std::endl;

	return 0;
}


