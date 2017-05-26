#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
    //描画する画面の大きさを設定
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
    
    //Runすると新しいDebugのやつでする
    ofRunApp(new ofApp());

}