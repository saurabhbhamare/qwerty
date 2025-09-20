#pragma once
#include</Programming/qwerty/qwerty/src/window/qwindow.h>

class Qwerty
{
public:
	bool isQwertyRunning = true;
	QWindow* qwindow; 
	
public: 
	
public: 
	Qwerty()
	{
		qwindow = new QWindow();
	}

	void Init(); 
	void Update();
};