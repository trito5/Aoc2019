#include <iostream>
#include <math.h>  
#include <fstream>
#include <sstream>

class Aoc19_1b {
public:

	void run()
	{
		std::ifstream infile("Input_day1.txt");
		int fuel = 0;
		int mass;
		while (infile >> mass)
		{
			std::istringstream iss(mass);
			fuel = calcFuel(mass, fuel);
		}
		std::cout << "Day2a: " << fuel << std::endl;
	}

	int calcFuel(int mass, int fuel)
	{
		int massFuel = floor(mass / 3) - 2;
		if (massFuel > 0) {
			fuel += massFuel;
			calcFuel(massFuel, fuel);
		}
		else
		{
			return fuel;
		}
	}
};