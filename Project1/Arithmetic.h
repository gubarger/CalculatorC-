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

		std::cout << "Input number one: ";
		std::cin >> settings.num_1;

		std::cout << "Input number two: ";
		std::cin >> settings.num_2;

		double result;

		// Basic arithmetic operations //
		if (settings.input_operation == "+") { Sum(); }
		else if (settings.input_operation == "-") { Deduction(); }
		else if (settings.input_operation == "/") { Division(); }
		else if (settings.input_operation == "*") { Multiplication(); }
		else if (settings.input_operation == "mod") { Mod(); }
		else
		{
			system("cls");
			std::cout << settings.OutlogMain << std::endl;
			return -1;
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

		std::cout << "Write an integer one: ";
		std::cin >> settings.num_int_1;

		std::cout << "Write an integer two: ";
		std::cin >> settings.num_int_2;

		std::cout << settings.num_int_1 % settings.num_int_2 << std::endl;
		return -1;
	}
};