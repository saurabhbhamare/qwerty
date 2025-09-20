#version 330 core
out vec4 FragColor;
float ambientStrength= 0.1f; 
//float diffuse; 
uniform vec3 lightSourcePosition; 
vec3 lightDir;
in vec3 Normal;
in vec3 FragPos; 
uniform vec3 viewerPosition;
void main()
{
	//ambient lighting 
	ambientStrength  = 0.1f; 

	//diffuse lighting 
	
	vec3 norm = normalize(Normal);
	lightDir = normalize((lightSourcePosition - FragPos));
	float diffuse = max(dot(norm,lightDir),0.0f);	

	//specular lighting
	vec3 viewDir = normalize(viewerPosition - FragPos);
	vec3 reflectDir = reflect(-lightDir, norm);
	float specularStrength = 2.5f;
	float spec = pow(max(dot(viewDir,reflectDir),0.0f),32);
	
	// final fragcolor 
	//FragColor = vec4(1.0f,0.0f,0.0f,1.0f)*(ambientStrength + diffuse + specularStrength);
	FragColor = vec4(1.0f,0.0f,0.0f,1.0f)*(ambientStrength + diffuse + spec*specularStrength);
}