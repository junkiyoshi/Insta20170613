#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofBackground(0);
	ofSetWindowTitle("20170613");

	this->noise_value = ofRandom(10);
	ofSetLineWidth(1.0);
	ofSetColor(0, 0, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	float x, y;
	float value, len;
	float tmp_noise_value = this->noise_value;

	for (int radius = 1024; radius > 50; radius -= 10) {
		tmp_noise_value += 0.05;
		for (float p = 0; p < 360; p += 3) {
			x = radius * cos(p * DEG_TO_RAD);
			y = radius * sin(p * DEG_TO_RAD);

			value = ofNoise(tmp_noise_value, p * 0.05);
			len = 1024 * (value - 0.75);
			if (value > 0.75) {
				ofBox(ofVec3f(x, y, len / 2), 4, 4, len);
			}
			else {
				ofBox(ofVec3f(x, y, 0), 2);
			}
		}
	}

	this->noise_value += 0.025;

	this->cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
