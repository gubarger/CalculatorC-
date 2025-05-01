#pragma once

#include <iostream>
using namespace std;

template<typename T, typename T2, typename I, typename R>
class Arithmetic
{
public:
	/* default numbers */
	T num_1;
	T2 num_2;

	/* input comand */
	I input_operation;

	/* result */
	R result;

	/* default outlog */
	string OutlogMain = "Nothuing result";

	Arithmetic(T p_num_1, T2 p_num_2)
	{
		num_1 = p_num_1;
		num_2 = p_num_2;
	}

	auto Inputing() 
	{
		cout << "Input operation: ";
		cin >> input_operation;

		cout << "Input number one: ";
		cin >> num_1;

		cout << "Input number two: ";
		cin >> num_2;

		double result;

		// Basic arithmetic operations //
		if (input_operation == "+") { Sum(); }
		else if (input_operation == "-") { Deduction(); }
		else if (input_operation == "/") { Division(); }
		else if (input_operation == "*") { Multiplication(); }
		else
		{
			system("cls");
			cout << OutlogMain << endl;
			return -1;
		}
	}

	// Basic arithmetic operations //
	auto Sum() { cout << num_1 + num_2 << endl; return num_1 + num_2; }
	auto Deduction() { cout << num_1 - num_2 << endl; return num_1 - num_2; }
	auto Division() { cout << num_1 / num_2 << endl; return num_1 / num_2; }
	auto Multiplication() { cout << num_1 * num_2 << endl; return num_1 * num_2; }
};