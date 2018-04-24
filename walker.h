#pragma once
#include "ofmain.h"

class Walker {

public:
	Walker();
	void move();
	void draw();

private:
	ofVec2f walkerPosition;
	ofVec2f walkerDirection;
	float time;
	int size;
	ofColor color;
};