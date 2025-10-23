#version 330 core 
layout(lines) in; 
layout(line_strip,max_vertices = 18) out; 
uniform mat4 view; 
uniform mat4 projection;
uniform vec3 lightningStrikePosition;
uniform mat4 model;


//
//vec3 p0 = gl_in[0].gl_Position.xyz;
//
//
//vec3 p1 = gl_in[1].gl_Position.xyz;

vec3 p0 = vec3(0.1f,0.2f,-0.3f);
vec3 p1 = vec3(-0.8f,31.9f,0.3f);

int subdivisions = 5; 
float jitter_strength = 4.0f; 


void main()
{
	for(int i = 0 ; i<= subdivisions ; ++i)
	{
		float t = float(i) / float(subdivisions);
		//float t =1.0f;
//
//
		vec3 pos = mix(p0,p1,t);
//
//		vec3 dir = normalize(p1-p0);
//		vec3 up = vec3(0.0,0.0,1.0f);
//		vec3 right = normalize(cross(dir,up));
	pos+= (sin(t*15.0)*jitter_strength);
//
		gl_Position = projection*view*model*vec4(pos,1.0f); 
		EmitVertex();
	}
	EndPrimitive();
}