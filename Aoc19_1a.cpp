#include <iostream>
#include <math.h>  
#include <fstream>
#include <sstream>
int main()

{
	std::ifstream infile("Input_day1.txt");
	int fuel = 0;
	int mass;
	while (infile >> mass)
	{
		std::istringstream iss(mass);
		fuel = fuel + floor(mass / 3) - 2;
	}

	std::cout << fuel << std::endl;
	return 0;
}