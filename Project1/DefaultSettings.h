#pragma once
#include <string>

template<typename T, typename T2, typename T3, typename T4>
struct DefaultSettingsStruct
{
	/* default numbers */
	T num_1;
	T2 num_2;

	T3 num_int_1;
	T4 num_int_2;

	/* input comand */
	std::string input_operation;

	/* default outlog */
	std::string OutlogMain = "Nothuing result";
};