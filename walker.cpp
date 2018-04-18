#include "walker.h"

Walker::Walker() {
	this->walkerDirection.set(ofRandom(-10, 10), ofRandom(-10, 10));
	this->walkerDirection.normalize();
	this->size = 10;
	this->color = ofColor(static_cast<int>(ofRandom(0, 255)), static_cast<int>(ofRandom(0, 255)),
	                      static_cast<int>(ofRandom(0, 255)));

	this->time = ofRandom(0, 10000);
}

void Walker::move() {
	walkerDirection.rotate(ofMap(ofNoise(time), 0, 1, 0, 2 * PI));
	walkerPosition += walkerDirection.normalize();

	time += 0.01;
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}