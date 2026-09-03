#include <iostream>
#include <string>
#include "str_array.h"


int main(){
	str_array names;

	names.add("Bob");
	names.add("Alex");
	names.add("John");

	names.print();
}