#include <iostream>
#include "mylib.h"

int main(int argc, char** argv)
{
	print_circle(12);
	std::cout << count_steps(13) << "\n";

	return EXIT_SUCCESS;
}