//#version 330 core
#version 330 core
layout(location = 0 ) in vec3 aPos;
layout(location = 1) in vec3 aNormal;

out vec3 FragPos; 
out vec3 Normal;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;
void main()
{


	//updating the normals	
	vec4 worldPos = model* vec4(aPos,1.0f);
	FragPos = vec3(worldPos);

	Normal = mat3(transpose(inverse(model)))* aNormal;

	//gl_Position = projection * view * model * vec4(aPos,1.0f);
	gl_Position = projection * view * model * worldPos;
	//Normal = aNormal; 
	//FragPos = vec3(model*vec4(aPos,1.0f));	

}