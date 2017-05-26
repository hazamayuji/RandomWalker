//
//  RandomWalker.hpp
//  2017_0523_random_walk
//
//  Created by 狭間祐至 on 2017/05/23.
//
//



//インクルードガード -> ヘッダファイルの重複インクルード排除
#pragma once
//ライブラリを読み込む
#include "ofMain.h"


//RandomWalkerというclassを生成
class RandomWalker{

    //publicの上にかくのは全部private
    
public:
    //コンストラクタ(クラスと同じ名前の関数)を生成
    RandomWalker();
    
    //drawという関数を生成
    void draw();
    
    //ofVec2f:x軸、y軸を扱うためのクラス
    //そのクラスからpotionというインスタンスを生成
    ofVec2f postion;
    
    //leftなどの実数を生成
    float left, right, top, bottom;
};


