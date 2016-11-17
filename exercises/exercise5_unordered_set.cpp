#include <iostream>
#include <unordered_set>



int main(){
	
	std::unordered_set<int> unordered_set;
	for(int i = 0; i < 10; i++)
	{
		unordered_set.insert(i);
	}
	size_t bucket = unordered_set.bucket(5);

	std::cout << bucket << std::endl;
	std::cout << unordered_set.bucket_size(bucket) << std::endl;
	std::cout << unordered_set.bucket_count() << std::endl;
	return 0;
}
