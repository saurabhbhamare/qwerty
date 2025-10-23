#version 330 core
//layout(location = 0) in vec3 aPos;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{

	//gl_Position = projection*view*model*vec4(aPos,1.0f);
    vec3 pos;

    if (gl_VertexID == 0) pos = vec3(-0.5, -0.5, 0.5f);
    else if (gl_VertexID == 1) pos = vec3(0.5, 0.5, 0.0);

    gl_Position = vec4(pos, 1.0);
}