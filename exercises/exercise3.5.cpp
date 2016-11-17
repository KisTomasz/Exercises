#include <iostream>
#include <list>
#include <numeric>
#include <vector>

int main(){

/*
	std::list<int> list1; //1 milions
	int i = 0;
	list1.resize(1000000);
	std::iota(list1.begin(), list1.end(), ++i); //real	0m0.181s


	std::list<int>::iterator iterator = list1.begin();
	for(int i = 0; i < 500000; ++iterator, ++i );
	std::cout << *(iterator) << std::endl; //real	0m0.155s

	*/
	std::vector<int> vec;
	vec.resize(1000000);
	for(int i = 0; i < 1000000; vec.push_back(++i));
	std::cout << vec.at(500000) << std::endl; //real	0m0.029s


	return 0;
}
