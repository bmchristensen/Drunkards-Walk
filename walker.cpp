#include "walker.h"

Walker::Walker() {
	this->walkerPosition = ofVec2f(0, 0);
	this->walkerDirection = ofVec2f(1, 1);
	this->size = 10;
	this->color = ofColor(static_cast<int>(ofRandom(0, 255)), static_cast<int>(ofRandom(0, 255)),
	                      static_cast<int>(ofRandom(0, 255)));

	this->time = ofRandom(0, 10000);
}

void Walker::move() {
	walkerDirection.rotateRad(ofMap(ofNoise(time), 0, 1, -PI, PI));
	walkerPosition += walkerDirection.normalize();

	time += 0.05;
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}