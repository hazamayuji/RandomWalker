#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //各種最初の設定
    ofSetFrameRate(60);
    ofBackground(0,0,0);
    ofEnableAlphaBlending();

    
    //画面更新をせずに加算合成に
    ofSetBackgroundAuto(false);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
  
    //ランダムに色の３原色をNUM個生成
    for(int i = 0; i < NUM; i++){
        red[i]  = ofRandom(0,255);
        green[i]  = ofRandom(0,255);
        blue[i]  = ofRandom(0,255);
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    //透明の表現を与える
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    
    //-----------------いろんな色の色を書く----------------//

    for(int i = 0; i < NUM; i++){
        //色をランダムで生成
        ofSetColor(red[i], green[i], blue[i], 63);
        
        //RandomWalkerのクラス内のdrawという関数をi回実行
        walker[i].draw();
    }
    
    
    //-----------------フェードアウトの処理----------------//

    //透明の表現を与える
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    //透明よりの黒に設定
    ofSetColor(0, 0, 0, 3);
    //その色の四角形を画面全体に何度も生成
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    
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
