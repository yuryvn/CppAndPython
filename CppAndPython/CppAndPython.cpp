// CppAndPython.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <pybind11/embed.h>
namespace py = pybind11;

int main()
{
	
    std::cout << "Hello World!\n"; 
	py::scoped_interpreter guard{};//start the interpreter and keep it alive
	py::print("hello world");
	py::module sys = py::module::import("sys");
	py::print(sys.attr("version"));

	py::module plotting = py::module::import("plotting");
	double *OX;
	double *OY;
	OX = new double(10);
	OY = new double(10);
	for (int i = 0; i < 10; i++) {
		OX[i] = (double)i;
		OY[i] = 1.0;
	}
	py::object result = plotting.attr("add")(1, 2 );
	int n = result.cast<int>();
	assert(n == 3);

	//py::object result = plotting.attr("plot1graph")();
	delete OX, OY;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
