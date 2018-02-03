#include <iostream>
#include <vector>
#include <stdexcept>

#include "figures.h"
#include "utils.h"

int main(const int argc, const char* const argv[]) {
	if(argc != 2) {
		std::cout << "Invalid arguments." << std::endl;
		return 1;
	}
	try {
		std::vector<Figure*> figures = vectorFromFile(argv[1]);
		for(int i = 0; i < figures.size(); i++) {
			figures[i]->show();
		}
		deAllocVector(figures);
	}
	catch(std::bad_alloc& e) {
		std::cout << e.what() << std::endl;
		return -1;
	}
	catch(...) {
		return -2;
	}
	return 0;	
}