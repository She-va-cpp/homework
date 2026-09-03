#include <iostream>
#include <string>
#include "str_array.h"


str_array::~str_array() {
	delete[] data;
}

void str_array::add(std::string el) {
    std::string* new_data = new std::string[len + 1];

    for (int i = 0; i < len; i++) {
        new_data[i] = data[i];
    }

    new_data[len] = el;
    delete[] data;
    data = new_data;

    len++;
}
void str_array::print() {
	for (int i = 0; i < len; i++) {
		cout << data[i] << endl;
	}
}
