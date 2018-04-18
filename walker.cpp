#include "Walker.h"

Walker::Walker() {
	this->walkerPosition;
	this->walkerDirection;
	this->size = 10;
	this->color = ofColor((int)ofRandom(0, 255), (int)ofRandom(0, 255), (int)ofRandom(0, 255));
	this->timeX = ofRandom(0, 10000);
	this->timeY = ofRandom(0, 10000);
}

void Walker::move() {
	walkerDirection.set(ofDegToRad(ofMap(ofNoise(timeX), 0, 1, -360, 360)), ofDegToRad(ofMap(ofNoise(timeY), 0, 1, -360, 360)));
	walkerPosition += walkerDirection.normalize();

	timeX += 0.005;
	timeY += 0.005;
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}