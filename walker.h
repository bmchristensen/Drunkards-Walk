#pragma once
#include "ofmain.h"

class Walker {

public:
	Walker();
	void move();
	void draw();

private:
	ofVec2f walkerLocation;
	int size;
	ofColor color;
};