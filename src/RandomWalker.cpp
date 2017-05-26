//
//  RandomWalker.cpp
//  2017_0523_random_walk
//
//  Created by 狭間祐至 on 2017/05/23.
//
//

#include "RandomWalker.hpp"

RandomWalker::RandomWalker(){
    
    //position = ofVec2fのインスタンス
    //position.x , position.y　= 0なので別の初期値を設定
    postion.x = ofGetWidth()/2;
    postion.y = ofGetHeight()/2;
    
    //leftなどの実数の値を設定
    left = ofRandom(0.9, 1.0);
    right = ofRandom(0.9, 1.0);
    top = ofRandom(0.9, 1.0);
    bottom = ofRandom(0.9, 1.0);
    
}

void RandomWalker::draw(){
    //色はofAppで生成するから書かなくて大丈夫
    
    //この処理を10回繰り返す->繰り返さないと遅くなる、繰り返しすぎると処理がおいつかなくなる
    for(int i = 0; i < 10; i++){
        
        //round　=　四捨五入できる//なくてもいける
        //positionという値にどんどんランダムの値を足していく
        postion.x += ofRandom(-left, right);
        postion.y += ofRandom(-bottom, top);
        
        //範囲を超えたら移動させる
        if(postion.x < 0){
            postion.x = ofGetWidth();
        }
        
        if(postion.x > ofGetWidth()){
            postion.x = 0;
        }
        
        if(postion.y < 0){
            postion.y = ofGetHeight();
        }
        
        if(postion.y > ofGetHeight()){
            postion.y = 0;
        }
        
        //円をかく
        ofDrawCircle(postion.x, postion.y, 2);
    
    }

}
