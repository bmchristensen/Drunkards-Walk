#include "walker.h"

Walker::Walker() {
	this->walkerPosition = ofVec2f(0, 0);
	this->walkerDirection = ofVec2f(1, 1);
	this->size = 10;
	this->color = ofColor(static_cast<int>(ofRandom(0, 255)), static_cast<int>(ofRandom(0, 255)),
	                      static_cast<int>(ofRandom(0, 255)));

	this->time = ofRandom(0, 100);
	this->timeY = ofRandom(0, 100);
}

void Walker::move() {
	walkerDirection.set(ofMap(ofNoise(time), 0, 1, -180, 180), ofMap(ofNoise(timeY), 0, 1, -180, 180));
	//walkerDirection.rotate(ofMap(ofNoise(time),0, 1, -180, 180));
	walkerPosition += walkerDirection.normalize();

	time += 0.008;
	timeY += 0.008;
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}