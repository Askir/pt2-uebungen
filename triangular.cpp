
#include <cstdlib>
#include <iostream>


int triangular(int number)
{
	// ToDo: Exercise 1.a - return triangular number
	int sum = 0;
	for(int i = 1; i<=number; i++){
		sum += i;
	}
	return sum;
}

void pretty_print(int decimal)
{
	// ToDo: Exercise 1.c - print number with decimal marks to console
	std::string numWithPoints = std::to_string(decimal);
	int insertPosition = numWithPoints.length() - 3;
	while (insertPosition > 0) {
		numWithPoints.insert(insertPosition, ".");
		insertPosition-=3;
	}
	std::cout << numWithPoints;
}

int main(int argc, char * argv[])
{
	if(argc != 2)
		return 1;	// invalid number of parameters

	int n = std::atoi(argv[1]);

	if(n > 65535){
		std::cout << "domain = [<1>;<65.535>] codomain = [<1>;<";
		pretty_print(triangular(65535));
		std::cout << ">]" ;
		return 0;
	}	
	// ToDo: Exercise 1.c - print all numbers with decimal marks

	// ToDo: Exercise 1.b - check if n is in domain, if not print valid domain and codomain and return 2

	// ToDo: Exercise 1.a - print triangular number to console

	pretty_print(triangular(n));

	return 0;
}
