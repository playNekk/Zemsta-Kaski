#ifndef HERO
#define HERO

#include "window.h"
#include "livingEntity.h"

class Hero : public LivingEntity{
public:
	//animacje
	static const string HERO_ANIM_UP;
	static const string HERO_ANIM_DOWN;
	static const string HERO_ANIM_LEFT;
	static const string HERO_ANIM_RIGHT;
	static const string HERO_ANIM_IDLE_UP;
	static const string HERO_ANIM_IDLE_DOWN;
	static const string HERO_ANIM_IDLE_LEFT;
	static const string HERO_ANIM_IDLE_RIGHT;
	static const string HERO_SLASH_ANIM_UP;
	static const string HERO_SLASH_ANIM_DOWN;
	static const string HERO_SLASH_ANIM_LEFT;
	static const string HERO_SLASH_ANIM_RIGHT;
	static const string HERO_ANIM_DIE;

	//stany
	static const int HERO_STATE_IDLE;
	static const int HERO_STATE_MOVE;
	static const int HERO_STATE_SLASH;
	static const int HERO_STATE_DEAD;

	Hero(AnimationSet *animSet);
	void update();
	void slash();
	void die();
	void revive();
	void changeAnimation(int newState, bool resetFrameToBeginning);
	void updateAnimation();
	void updateDamages();
};

#endif