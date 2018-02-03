#include <vector>
#include <iostream>
#include <fstream>

#include "figures.h"
#include "utils.h"

std::vector<Figure*> vectorFromFile(const char* const path) {
	std::vector<Figure*> tmpVector;
	std::ifstream fin(path, std::ios::in);
	while(!fin.eof()) {
		char figureType = ' ';
		float x = 0.F;
		float y = 0.F;
		fin >> figureType >> x >> y;
		if(figureType == 's') {
			Square* tmpFigure = new Square(x);
			tmpVector.insert(tmpVector.end(), tmpFigure);
		} else if(figureType == 'r') {
			Rectangle* tmpFigure = new Rectangle(x, y);
			tmpVector.insert(tmpVector.end(), tmpFigure);
		} else if(figureType == 'c') {
			Circle* tmpFigure = new Circle(x);
			tmpVector.insert(tmpVector.end(), tmpFigure);
		} else {
			std::cout << "Invalid argument.";
		}
	}
	return tmpVector;
}

void deAllocVector(std::vector<Figure*>& vect) {
	for(int i = 0; i < vect.size(); i++) {
		delete vect[i];
	}
	vect.clear();
}