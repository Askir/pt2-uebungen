
#include <cstdlib>
#include <iostream>

int summations = 0;
int fibonacci(int number)
{
	// ToDo: Exercise 2.c - count number of calculation steps

	// ToDo: Exercise 2.b - return 0 on bad arguments
	if(number==0 || number > 46)
		return 0;
	// ToDo: Exercise 2.b - retrieve nth fibonacci number iteratively
	int lastsum = 0;
	int sum = 1;
	for(int i = 1; i<number; i++){
		summations++;
		sum = lastsum+sum;
   		lastsum = sum-lastsum;
	}	
	return sum;
}

int main(int argc, char * argv[])
{
	if(argc != 2)
		return 1;	// invalid number of parameters

	int n = std::atoi(argv[1]);

	// ToDo: Exercise 2.c - print calculation steps

	std::cout << n << " : " << fibonacci(n) << " : #";
	std::cout << summations;

	return 0;
}
