#pragma once
#include "SceneBase.h"
#include "Vec2.h" 

class SceneTest : public SceneBase
{
public:
	SceneTest();
	virtual ~SceneTest() {}

	virtual void init() override;
	virtual void end() override;

	virtual SceneBase* update() override;
	virtual void draw() override;

	// 上下左右端以外の線とのあたり処理
	void calcLine(Vec2 lineStart, Vec2 lineEnd);

private:
	Vec2	m_objPos;
	Vec2	m_objVec;
};