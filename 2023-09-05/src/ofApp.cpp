#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofSetWindowTitle("openFrameworks");

	ofBackground(255);
	ofEnableDepthTest();
	ofSetRectMode(ofRectMode::OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update(){
	ofSeedRandom(39);
}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	auto rotate_seed = ofRandom(1000);
	for (float z = 0; z < 300; z += 30) {

		ofPushMatrix();	// À•WŒn‘€ì

		ofRotateZ(ofMap(ofNoise(rotate_seed, z * 0.0035 + ofGetFrameNum() * 0.02), 0, 1, -20, 20));
		ofRotateY(ofMap(sin(z * 0.0035 + ofGetFrameNum() * 0.04), -1, 1, -20, 20));
		ofRotateX(ofMap(cos(z * 0.0035 + ofGetFrameNum() * 0.04), -1, 1, -20, 20));

		auto diff = ofNoise(rotate_seed, z * 0.0035 + (ofGetFrameNum()+1) * 0.04) - ofNoise(rotate_seed, z * 0.0035 + ofGetFrameNum() * 0.04);
		auto diff_abs = ofMap(abs(diff), 0, 1, 1.0, 5.0);

		ofNoFill();
		ofSetColor(0, ofMap(300 - z, 300, 30, 155, 85));

		ofDrawCircle(0, 0, z, (40 * (z/300) + 5) * diff_abs);

		ofPopMatrix();	//À•WŒn‘€ìI—¹
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
