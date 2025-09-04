#pragma once
#include<vector>
#include<iostream>
namespace qmath
{
	struct vec3
	{
		float x; 
		float y;
		float z; 

		std::vector<float> values;


		// default constructor

		vec3():x(0.0f), y(0.0f), z(0.0f) 
		{
			values.push_back(x);
			values.push_back(y);
			values.push_back(z);
		}

		// parameterised constructor

		vec3(float x, float y, float z):x(x),y(y),z(z)
		{
			values.push_back(x);
			values.push_back(y);
			values.push_back(z);
		}
		
	};

	struct mat4
	{
		float x, y, z, w;
		std::vector<float> values;
		
	};

	//translation and scaling
	qmath::vec3 Translate(qmath::vec3 value);
	
}