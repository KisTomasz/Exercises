#include <set>
#include <iostream>
#include <string>
#include <algorithm>


int main(){

	std::set<std::string> set1;
	
	set1.insert("A");
	set1.insert("B");
	set1.insert("C");
	set1.insert("D");
	set1.insert("E");
	set1.insert("F");
	set1.insert("G");
	set1.insert("H");
	set1.insert("I");
	set1.insert("J");

	
	std::cout << std::distance(set1.begin(), std::lower_bound(set1.begin(), set1.end(), "G")) << std:: endl;
 	std::cout << std::distance(set1.begin(), std::upper_bound(set1.begin(), set1.end(), "G")) << std:: endl;
	std::cout << std::distance(set1.equal_range("G").first,set1.equal_range("G").second) << std::endl;

	return 0;
}
