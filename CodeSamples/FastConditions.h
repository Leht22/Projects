#ifndef FASTCONDITIONS_H
#define FASTCONDITIONS_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/norm.hpp>

//when less than
float when_lt(float x, float y) 
{
	return glm::max( glm::sign(y - x) , 0.0f );
}

glm::vec2 when_ltv2( glm::vec2 x , glm::vec2 y )
{
	return glm::max(glm::sign(y - x), 0.0f);
}

glm::vec3 when_ltv3(glm::vec3 x, glm::vec3 y) 
{
	return glm::max(glm::sign(y - x), 0.0f);
}

glm::vec4 when_ltv4(glm::vec4 x, glm::vec4 y) 
{
	return glm::max(glm::sign(y - x), 0.0f);
}

//when greater than
float when_gt( float x, float y) {
	return glm::max(glm::sign(x - y), 0.0f);
}

//when greater than or equal to
float when_ge(float x, float y) {
	return 1.0f - when_lt(x, y);
}

//when less than or equal to
float when_le(float x, float y) {
	return 1.0f - when_gt(x, y);
}

//when equal to
float when_eq( float x , float y)
{
	return 1.0f - glm::abs(glm::sign(x-y));
}

//when not equal to
float when_neq(float x, float y) {
	return glm::abs(glm::sign(x - y));
}







#endif