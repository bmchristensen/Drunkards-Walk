#include "ofApp.h"
#include "sound.h"

static const int NUM_WALKERS = 100;

void ofApp::setup() {
	//ofSetFrameRate(60);

	// Seed rand func
	srand(NULL);

	mySound.load("chariotFire.mp3");
	mySound.play();

	ofSetBackgroundColor(65);

	for (int i = 0; i < NUM_WALKERS; ++i) {
		walkers.push_back(new Walker());
	}
}

void ofApp::update() {
	for (int i = 0; i < NUM_WALKERS; ++i) {
		walkers[i]->move();
	}
}

void ofApp::draw() {
	ofSetColor(255);
	ofDrawBitmapString("fps: " + ofToString(ofGetFrameRate()), 10, 15);
	ofDrawBitmapString("frames: " + ofToString(ofGetFrameNum()), 10, 30);

	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);

	for (int i = 0; i < NUM_WALKERS; ++i) {
		walkers[i]->draw();
	}
}

void ofApp::keyPressed(int key) {

}

void ofApp::keyReleased(int key) {

}

void ofApp::mouseMoved(int x, int y ) {

}

void ofApp::mouseDragged(int x, int y, int button) {

}

void ofApp::mousePressed(int x, int y, int button) {

}

void ofApp::mouseReleased(int x, int y, int button) {

}

void ofApp::mouseEntered(int x, int y) {

}

void ofApp::mouseExited(int x, int y) {

}

void ofApp::windowResized(int w, int h) {

}

void ofApp::gotMessage(ofMessage msg) {

}

void ofApp::dragEvent(ofDragInfo dragInfo) { 

}