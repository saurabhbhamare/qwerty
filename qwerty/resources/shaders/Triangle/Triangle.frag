#version 330 core
out vec4 FragColor; 
uniform vec3 color;
in vec3 aColorPos; 
uniform int ourTexture;
uniform sampler2D  texture1;
in vec2 TexCoord;
 
void main()
{
	//FragColor = vec4(color,1.0f);	
	//FragColor = vec4(aColorPos,1.0f);	
	//FragColor = vec4(1.0f,0.0f,1.0f,1.0f);	
	//FragColor = vec4(0.0f,0.0f,0.0f,1.0f);	
	FragColor = vec4(1.0f,1.0f,1.0f,1.0f);	
	//FragColor = texture(texture1,TexCoord);	
}