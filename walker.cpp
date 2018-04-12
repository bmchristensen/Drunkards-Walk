#include "Walker.h"

Walker::Walker() {

}

Walker::Walker(int x, int y, int size, ofColor color) {
	this->x = x;
	this->y = y;
	this->size = size;
	this->color = color;
}

void Walker::move() {
	int direction = rand()%4;

	if (direction == 0) {
		--y;
	} else if (direction == 1) {
		++x;
	} else if (direction == 2) {
		++y;
	} else {
		--x;
	}
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(x, y, size);
}