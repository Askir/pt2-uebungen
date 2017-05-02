
#include <cstdlib>
#include <iostream>

void change(const int due, const int paid)
{
	// ToDo: return set of change tuples

}

int main(int argc, char * argv[])
{
	if(argc != 3)
		return 1;	// invalid number of parameters

	const int due  = std::atoi(argv[1]);
	const int paid = std::atoi(argv[2]);

	// ToDo: catch invalid arguments

	change(due, paid);

	// ToDo: print change data as CSV to console

	return 0;
}
