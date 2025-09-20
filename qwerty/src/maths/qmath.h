//#pragma once
//#include<vector>
//#include<iostream>
//namespace qmath
//{
//	struct vec3
//	{
//		float x; 
//		float y;
//		float z; 
//
//		std::vector<float> values;
//
//
//		// default constructor
//
//		vec3():x(0.0f), y(0.0f), z(0.0f) 
//		{
//			values.push_back(x);
//			values.push_back(y);
//			values.push_back(z);
//		}
//
//		// parameterised constructor
//
//		vec3(float x, float y, float z):x(x),y(y),z(z)
//		{
//			values.push_back(x);
//			values.push_back(y);
//			values.push_back(z);
//		}
//		vec3(float value):x(value),y(value),z(value)
//		{
//			values.push_back(x);
//			values.push_back(y);
//			values.push_back(z);
//		}
//		
//	};
//
//	struct mat4
//	{
//		float x, y, z, w;
//		//std::vector<std::vector<float>> values;
//		//std::vector<float> values[4][4];
//		float values[4][4];
//
//		
//		mat4(float value)
//		{
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (i == j)
//					{
//						values[i][j] = value;
//					}
//					else
//					{
//						values[i][j] = 0.0f;
//					}
//				}
//			}
//		}
//	};
//
//	//translation and scaling
//	void Translate(qmath::mat4 matrix, qmath::vec3& vector);
//}