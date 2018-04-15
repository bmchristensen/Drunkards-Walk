#include "Walker.h"

Walker::Walker() {
	this->walkerLocation;
	this->size = 10;
	this->color = ofColor((int)ofRandom(0, 255), (int)ofRandom(0, 255), (int)ofRandom(0, 255));
}

void Walker::move() {
	int direction = rand() % 4;

	if (direction == 0) {
		--walkerLocation.y;
	} else if (direction == 1) {
		++walkerLocation.x;
	} else if (direction == 2) {
		++walkerLocation.y;
	} else {
		--walkerLocation.x;
	}
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerLocation, size);
}