#pragma once

#include "ofMain.h"
#include "Walker.h"

class ofApp : public ofBaseApp {

	public:
		vector<Walker*> walkers;
		void setup();
		void update();
		void draw();

		ofTrueTypeFont verdana30;

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);	
};