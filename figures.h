#ifndef H_FIGURES
#define H_FIGURES

class Figure {
public:
	Figure();
	virtual ~Figure();

	virtual float area() = 0;
	virtual void show() = 0;
};

class Square : public Figure {
public:
	Square(float x = 0.F);
	float area();
	void show();
private:
	float a;
};

class Rectangle : public Figure {
public:
	Rectangle(float x = 0.F, float y = 0.F);
	float area();
	void show();
private:
	float a;
	float b;
};

class Circle : public Figure {
public:
	Circle(float x = 0.F);
	float area();
	void show();
private:
	float a;
};

#endif