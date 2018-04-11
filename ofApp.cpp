#include "ofApp.h"
#include "sound.h"

static const int NUM_WALKERS = 100;

void ofApp::setup() {
	mySound.load("chariotFire.mp3");
	mySound.play();
	ofSetBackgroundColor(55);
	for (int i = 0; i < NUM_WALKERS; ++i) {
		walkers.push_back(new Walker(ofGetWidth() / 2, ofGetHeight() / 2, 10, ofColor((int)ofRandom(0, 255), (int)ofRandom(0, 255), (int)ofRandom(0, 255))));
	}
}

void ofApp::update() {
	for (int i = 0; i < NUM_WALKERS; ++i) {
		walkers[i]->move();
	}
}

void ofApp::draw() {
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