#pragma once

#include "ofMain.h"
#include "RandomWalker.hpp"//追加するクラスを読み込む

#define NUM 1000
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

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
    
    //クラスからインスタンス（オブジェクト)を生成
    RandomWalker walker[NUM];
    
    int red[NUM];
    int green[NUM];
    int blue[NUM];
    
};