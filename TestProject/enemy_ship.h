#pragma once
#include "base_ship.h"
class enemy_ship : public base_ship
{
public:
	enemy_ship();
	~enemy_ship();
	void move();
	void hit();
	void update_hitpoints();
	void fire(bullet** bullets_fired, int* num_of_bullets);
};

