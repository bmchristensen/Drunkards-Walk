#include "walker.h"

Walker::Walker() {
	this->walkerPosition = ofVec2f(0, 0);
	this->walkerDirection = ofVec2f(ofRandom(-1, 1), ofRandom(-1, 1));
	this->walkerDirection.normalize();
	this->size = 10;
	this->color = ofColor(static_cast<int>(ofRandom(0, 255)), static_cast<int>(ofRandom(0, 255)),
	                      static_cast<int>(ofRandom(0, 255)));

	this->time = ofRandom(0, 10000);
}

void Walker::move() {
	walkerDirection.rotate(ofMap(ofNoise(time), 0, 1, -10, 10));
	walkerPosition += walkerDirection;
	time += 0.001;
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}