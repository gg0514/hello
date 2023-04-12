#include<iostream>
#include<Poco/HashSet.h>

int main(void) 
{
	Poco::HashSet<int> hs;
		
	hs.insert(5);
	hs.insert(7);
	hs.insert(4);
	hs.insert(8);
	hs.insert(9);
	
	for (auto& i: hs) {
		std::cout << i << " ";
	}
	
	std::cout << std::endl;
		
	return 0;
}