#include "Walker.h"

Walker::Walker() {
	this->walkerPosition;
	this->walkerDirection;
	this->size = 10;
	this->color = ofColor((int)ofRandom(0, 255), (int)ofRandom(0, 255), (int)ofRandom(0, 255));
}

void Walker::move() {
	walkerDirection.set(ofDegToRad(ofRandom(-360, 360)), ofDegToRad(ofRandom(-360, 360)));
	walkerPosition += walkerDirection.normalize();
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}