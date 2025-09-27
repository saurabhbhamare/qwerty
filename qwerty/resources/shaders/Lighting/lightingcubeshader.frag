#version 330 core

//old implementation of material structure



//struct Material
//{
//	vec3 ambient; 
//	vec3 diffuse; 
//	vec3 specular; 
//	float shininess; 
//};

//new imlementation of material structure

struct Material
{
	sampler2D diffuse; 
	sampler2D specular;
	float shininess; 
};

struct Light
{
	vec3 position; 
	vec3 ambient; 
	vec3 diffuse; 
	vec3 specular; 
};

uniform Material material;
uniform Light light;
out vec4 FragColor;
float ambientStrength= 0.1f; 
//float diffuse; 
uniform vec3 lightSourcePosition; 
vec3 lightDir;
in vec3 Normal;
in vec3 FragPos; 
in vec2 TexCoords;
uniform vec3 lightColor;

uniform vec3 viewerPosition;
void main()
{
	//light color

	//vec3 lightColor = vec3(1.0f,1.0f,1.0f);


	//ambient lighting 
	//vec3 ambient   = lightColor* material.ambient;    

	vec3 ambient = light.ambient * texture(material.diffuse,TexCoords).rgb;

	//diffuse lighting 
	vec3 norm = normalize(Normal);
	lightDir = normalize((light.position - FragPos));
	float diff =  max(dot(norm,lightDir),0.0f);
	vec3 diffuse = light.diffuse*diff*texture(material.diffuse,TexCoords).rgb;

	//specular lighting
	//vec3 viewDir = normalize(viewerPosition - FragPos);
	vec3 viewDir = normalize(viewerPosition - FragPos);
	vec3 reflectDir = reflect(-lightDir, norm);
	float spec = pow(max(dot(viewDir,reflectDir),0.0f),material.shininess);
	vec3 specular = light.specular*spec*vec3(texture(material.specular,TexCoords));
	
	// final fragcolor 
	//FragColor = vec4(1.0f,0.0f,0.0f,1.0f)*(ambientStrength + diffuse + specularStrength);

	//final result 
	vec3 result = ambient + diffuse + specular;
	FragColor = vec4(result,1.0f);
}