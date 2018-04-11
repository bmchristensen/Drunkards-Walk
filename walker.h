#pragma once
#include "ofmain.h"

class Walker {

public:
	Walker();
	Walker(int x, int y, int size, ofColor color);
	void move();
	void draw();

private:
	int x;
	int y;
	int size;
	ofColor color;
};