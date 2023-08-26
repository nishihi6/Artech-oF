#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofSetWindowTitle("Artech-oF");

	ofBackground(0);
	ofEnableDepthTest();

	ofSetCircleResolution(100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	ofRotateX(0);

	auto radius = 200;
	auto deg_start = ofGetFrameNum() * 5;

	ofRotateX(45);
	ofRotateY(-45);

	for (int deg = deg_start; deg < deg_start + 90; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start, deg_start + 90, 0, 135));

		ofDrawSphere(radius * cos(deg * DEG_TO_RAD), 0, radius * sin(deg * DEG_TO_RAD), 8 * ((deg - deg_start) / 90.0));
	}
	for (int deg = deg_start + 90; deg < deg_start + 180; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start + 90, deg_start + 180, 135, 0));

		ofDrawSphere(radius * cos(deg * DEG_TO_RAD), 0, radius * sin(deg * DEG_TO_RAD), 8 * (1 - (deg - (deg_start + 90)) / 90.0));
	}

	ofRotateZ(-90);

	for (int deg = deg_start; deg < deg_start + 90; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start, deg_start + 90, 0, 135));

		ofDrawSphere(radius * cos((deg + 120) * DEG_TO_RAD), 0, radius * sin((deg + 120) * DEG_TO_RAD), 8 * ((deg - deg_start) / 90.0));
	}
	for (int deg = deg_start + 90; deg < deg_start + 180; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start + 90, deg_start + 180, 135, 0));

		ofDrawSphere(radius * cos((deg + 120) * DEG_TO_RAD), 0, radius * sin((deg + 120) * DEG_TO_RAD), 8 * (1 - (deg - (deg_start + 90)) / 90.0));
	}

	ofRotateX(90);

	for (int deg = deg_start; deg < deg_start + 90; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start, deg_start + 90, 0, 135));

		ofDrawSphere(radius * cos((deg + 180) * DEG_TO_RAD), 0, radius * sin((deg + 180) * DEG_TO_RAD), 8 * ((deg - deg_start) / 90.0));
	}
	for (int deg = deg_start + 90; deg < deg_start + 180; deg++) {

		ofFill();
		ofSetColor(255, ofMap(deg, deg_start + 90, deg_start + 180, 135, 0));

		ofDrawSphere(radius * cos((deg + 180) * DEG_TO_RAD), 0, radius * sin((deg + 180) * DEG_TO_RAD), 8 * (1 - (deg - (deg_start + 90)) / 90.0));
	}

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
