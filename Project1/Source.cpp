#include <iostream>
#include <math.h>

#include "Arithmetic.h"
#include "DefaultSettings.h"

using namespace std;

int main() {
	Arithmetic<double, double, int, int> number{ 0, 0, 0, 0 };
	number.Inputing();
}