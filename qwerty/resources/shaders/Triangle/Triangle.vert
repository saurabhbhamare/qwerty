#version 330 core
layout(location = 0 ) in vec3 aPos;
layout (location = 1) in vec2 aTexCoords;
//layout(location = 1) in vec3 aColorValues;
//out vec3 aColorPos;
//uniform mat4 aTrans;
//uniform mat4 view;
//uniform mat4 projection; 
uniform mat4 model; 
uniform mat4 view;
uniform mat4 projection;
out vec2 TexCoord; 
void main()
{		
	//gl_Position =  view * aTrans * vec4(aPos.x,aPos.y,aPos.z,1.0f);
	//gl_Position = aTrans * vec4(aPos.x,aPos.y,aPos.z,1.0f);


	TexCoord = aTexCoords; 
	gl_Position = projection*view*model*vec4(aPos.x,aPos.y,aPos.z,1.0f);  //plain triangle

	//gl_Position = projection * view * model * vec4(aPos.x,aPos.y,aPos.z,1.0f);  





	//gl_Position =  projection  * view * model *  vec4(aPos.x,aPos.y,aPos.z,1.0f);
	//aColorPos = aColorValues;	
}