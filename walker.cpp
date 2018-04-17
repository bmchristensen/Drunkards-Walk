#include "Walker.h"

Walker::Walker() {
	//this->walkerPosition;
	//this->walkerDirection;
	this->size = 10;
	this->color = ofColor((int)ofRandom(0, 255), (int)ofRandom(0, 255), (int)ofRandom(0, 255));
}

void Walker::move() {
	//walkerDirection.set(ofRandom(0, 2 * PI), ofRandom(0, 2 * PI));
	walkerDirection.set(ofRandom(-360, 360), ofRandom(-360, 360));
	walkerPosition += walkerDirection.normalize();
}

void Walker::draw() {
	ofSetColor(color);
	ofDrawCircle(walkerPosition , size);
}