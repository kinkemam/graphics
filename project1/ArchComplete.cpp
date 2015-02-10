#define _USE_MATH_DEFINES
#include "ArchComplete.h"
#include <cmath>
//#include <glm/gtx/vector_angle.hpp>

Arch3 leg1;
Arch3 leg2;
arc arch;

ArchComplete::~ArchComplete(){
  glDeleteBuffers(1,&v_buf);
  glDeleteBuffers(1,&i_buf);
}

void ArchComplete::build(
  float x, float y, float z,
  float height, float width, float depth)
{
  leg1.build(1,1,2,3,1,2);
  leg2.build(1,1,-4,3,1,2);
  arch.build(1,3,0,0,0,5,3);
}


void ArchComplete::render() const{
  leg1.render();
  leg2.render();
  arch.render();
}

//g++ -std=c++11 -IC:/GLFW/include -IC:/GLEW/include -IC:/GLM -LC:/GLFW/lib-mingw -LC:/GLEW/lib/Release/x64 ArchComplete.cpp -o test C:/GLFW/lib-mingw/glfw3dll.a -lglew32s -lglfw3 -lopengl32 -lglu32 -lgdi32
