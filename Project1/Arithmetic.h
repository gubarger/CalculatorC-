#pragma once

#include "DefaultSettings.h"

#include <stdexcept>
#include <type_traits>
#include <math.h>

template<typename T, typename T2, typename T3, typename T4>
class Arithmetic
{
	DefaultSettingsStruct<T, T2, T3, T4> settings;
public:
	Arithmetic(T num_1, T2 num_2, T3 num_int_1, T4 num_int_2)
	{
		settings.num_1 = num_1;
		settings.num_2 = num_2;

		settings.num_int_1 = num_int_1;
		settings.num_int_2 = num_int_2;
	}

	auto Inputing()
	{
		std::cout << "Input operation: ";
		std::cin >> settings.input_operation;

        switch (settings.input_operation)
        {
        case '%':
            Mod();
            return -1;
            break;
        case '^':
            std::cout << "The first number is the number that we are building" << " - " << "The second number is the power of the number being raised!" << std::endl;
            break;
        case 'h':
            Help();
            return -1;
            break;
        }
        
		std::cout << "Input number one(double): ";
		std::cin >> settings.num_1;

		std::cout << "Input number two(double): ";
		std::cin >> settings.num_2;

		double result;

		// Basic arithmetic operations //
        switch (settings.input_operation)
        {
        case '+':
            Sum();
            break;
        case '-':
            Deduction();
            break;
        case '/':
            Division();
            break;
        case '*':
            Multiplication();
            break;
        case '^':
            Exponentiation();
            break;
        }
	}

	// Basic arithmetic operations //
	auto Sum() const {
		std::cout << settings.num_1 + settings.num_2 << std::endl;
		return -1;
	}
	auto Deduction() const {
		std::cout << settings.num_1 - settings.num_2 << std::endl;
		return -1;
	}
	auto Division() {
        std::cout << settings.num_1 / settings.num_2 << std::endl;
		if (settings.num_2 == 0) {
			system("cls");
			std::cout << settings.OutlogMain;
			throw std::runtime_error("Division by zero");
		}
		return -1;
	}
	auto Multiplication() const {
		std::cout << settings.num_1 * settings.num_2 << std::endl;
		return -1;
	}
	auto Mod() {

		system("cls");

		std::cout << "Input number one(int): ";
		std::cin >> settings.num_int_1;

		std::cout << "Input number two(int): ";
		std::cin >> settings.num_int_2;

		std::cout << settings.num_int_1 % settings.num_int_2 << std::endl;
		return -1;
	}
    auto Exponentiation() {
        std::cout << pow(settings.num_1, settings.num_2) << std::endl;
        return -1;
    }
    void Help() {
        system("cls");
        std::cout << "Arithmetic operations: +(sum), - (deduction), / (division), * (multiply), % (mod), ^ (exponentiation)" << std::endl;
    }
};