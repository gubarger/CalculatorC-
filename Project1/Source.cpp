#include <iostream>
#include <math.h>

#include "Arithmetic.h"
#include "DefaultSettings.h"

using namespace std;

int main() {
    std::cout << "I recommend reading the list of commands; the command being called - h" << std::endl;
	Arithmetic<double, double, int, int> number{ 0, 0, 0, 0 };
	number.Inputing();
}