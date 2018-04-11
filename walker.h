#pragma once
#include "ofmain.h"

class Walker {

public:
	int x;
	int y;
	int size;
	ofColor color;
	Walker();
	Walker(int x, int y, int size, ofColor color);
	void move();
	void draw();
};
