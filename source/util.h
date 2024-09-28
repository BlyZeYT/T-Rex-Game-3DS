#ifndef UTIL_H
#define UTIL_H

float getPosX(const sprite spr);

float getPosY(const sprite spr);

float getWidth(const sprite spr);

float getHeight(const sprite spr);

float getMid(const float num1, const float num2);

float getDiff(const float num1, const float num2);

bool isInRange(const float pos, const float start, const float end);

bool isColliding(const sprite spr1, const sprite spr2);

int getRandom(const int min, const int max);

#endif