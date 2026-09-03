#pragma once
#include <string>

using std::cout;
using std::endl;
using std::string;

class str_array {
private:
	int len;
	std::string* data;
public:
	str_array() : len(0), data(nullptr) {}

	~str_array();

	void add(std::string el);

	void print();

};