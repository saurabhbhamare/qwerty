#version 330 core
out vec4 FragColor;
uniform vec3 viewPos;
uniform vec3 lightSourceColor;
uniform vec3 cubeColor;
uniform vec3 lightPos;
in vec3 Normal;
in vec3 FragPos;
void main()
{

	//ambient light 
	float ambientStrength = 0.085f; 
	vec3 ambient = ambientStrength* lightSourceColor;


	//diffuse light 

	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos - FragPos);

	float diff = max(dot(norm,lightDir),0.0f);
	vec3 diffuse  = diff* lightSourceColor;

	

	//FragColor = vec4(lightSourceColor*cubeColor*0.2f,1.0f);
	//FragColor = vec4(lightSourceColor*cubeColor*ambientStrength,1.0f);

	vec3 normalTest = normalize(Normal);
    //FragColor = vec4(norm * 0.5 + 0.5, 1.0); // visualize normals


	//specular light
	float specularStrength = 1.5f; 
	vec3 viewDir = normalize(viewPos-FragPos);
	vec3 reflectDir = reflect(-lightDir,norm);

	float spec = pow(max(dot(viewDir,reflectDir),0.0),32);
	vec3 specular = specularStrength*spec*lightSourceColor;



	vec3 result = (ambient+diffuse+specular)*cubeColor;
	FragColor = vec4(result,1.0f);
}