#pragma once
#include<glad/glad.h>-
#include<glfw3.h>
#include<iostream>


class QWindow
{
public: 
	int height = 1200; 
	int width = 800;
	void CreateWindow();
	GLFWwindow* GetWindow(); 
	bool isWindowOpened = true; 

public: 
	GLFWwindow* qWindow;

};
