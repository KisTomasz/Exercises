#include <iostream>
#include <algorithm>
#include <string>


bool is_palindrome(std::string argString){
	
	
	auto iteratorFirstB = argString.begin();
	auto iteratorFirstE = argString.end();
	auto iteratorSecondB = argString.rbegin();
	
	auto pair = std::mismatch(iteratorFirstB, iteratorFirstE, iteratorSecondB);
	if(pair.first == argString.end()) //every character was identical
	{
		return true;
	}
	else return false;

}

int main(int argc, char** argv)
{
	
	std::cout << is_palindrome(argv[1]) << std::endl;

	return 0;
}
