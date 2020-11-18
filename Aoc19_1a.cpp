#include <iostream>
#include <math.h>  
#include <fstream>
#include <sstream>

class Aoc19_1a {
	public:
	int fuel = 0;
	int mass;

	void run()
	{
		std::ifstream infile("Input_day1.txt");

		while (infile >> mass)
		{
			std::istringstream iss(mass);
			fuel += floor(mass / 3) - 2;
		}
		std::cout << "Day1a: " << fuel << std::endl;
	}

};
