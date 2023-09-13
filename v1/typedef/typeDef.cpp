#include <vector>
#include<list>
#include <iostream>

typedef std::vector<int> my_type;
int main()
{
	my_type vec = {7, 5, 1, 3, 12};

	my_type::iterator it;

	for(it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << " ";

	return 0;
}
