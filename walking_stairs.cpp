
#include <cstdlib>
#include <iostream>


// ToDo: Exercise 2.d - adapt and implement combinations

int combinations(int number)
{
	if(number==1)
		return 1;
	if(number==2)
		return 2;
	int value1 = 1;
	int value2 = 2;
	for(int i = 0; i < number-2; i++){
		value2 = value1+value2;
		value1 = value2-value1;
	}
	return value2;
}


int main(int argc, char * argv[])
{
	if(argc != 2)
		return 1;	// invalid number of parameters

	int n = std::atoi(argv[1]);

	std::cout << combinations(n);

	return 0;
}
