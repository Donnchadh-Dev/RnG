#ifndef __MAINMENU_SCENE_H__
#define __MAINMENU_SCENE_H__

#include "cocos2d.h"

class MainMenu : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
	
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(MainMenu);

	cocos2d::Sprite *mySprite;

	void Play(Ref *pSender);
	void Highscores(Ref *pSender);
	void Settings(Ref *pSender);

	void muteButton(Ref *pSender);
	void volumeButton(Ref *pSender);
	bool pressed;
	

};

#endif // __MAINMENU_SCENE_H__
