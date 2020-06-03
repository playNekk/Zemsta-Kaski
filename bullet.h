#ifndef BULLET
#define BULLET

#include <cstdlib>
#include "livingEntity.h"


class Bullet : public LivingEntity{
public:
	static const string BULLET_ANIM_BULLET; //parametr dla animacji wystrzelania kuli

	Bullet(AnimationSet* animSet, int x, int y);
	void update();
	void die(){};
	void changeAnimation(int newState, bool resetFrameToBeginning);
	void updateAnimation();
	void updateDamages(){ ; }
	void hitLanded(LivingEntity* entity);
	virtual void crashOntoSolid();
};

#endif