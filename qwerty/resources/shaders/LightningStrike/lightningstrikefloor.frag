
#version 330 core
out vec4 FragColor;
uniform sampler2D floorTexture;
in vec2 TexCoords;
in vec3 Normal;
in vec3 FragPos;
uniform vec3 lightningStrikePosition;


void main()
{
		//FragColor = vec4(0.0f,1.0f,0.0f,1.0f);

		//ambient
		
		float ambientStrength = 0.01f;
		vec3 ambient = vec3(1.0f,1.0f,1.0f)*ambientStrength;
		

		//diffuse
		float diffuseStrength = 0.5f;
		vec3 norm = normalize(Normal);
		vec3 lightDir = normalize(lightningStrikePosition - FragPos);
		float diff = max(dot(norm,lightDir),0.0f);
		vec3 diffuse = vec3(0.8f,0.30f,0.25f)*diff*diffuseStrength;




		//specular

		vec3 lighting = ambient  + diffuse; 
		FragColor = vec4(texture(floorTexture,TexCoords)) *vec4(lighting,1.0f);		
}