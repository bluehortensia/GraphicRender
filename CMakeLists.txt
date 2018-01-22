cmake_minimum_required(VERSION 3.9)
project(lab1)

set(CMAKE_CXX_STANDARD 11)

add_executable(lab1 main.cpp Camera.cpp Camera.h Nodes/Node.cpp Nodes/Node.h Nodes/Group.cpp Nodes/Group.h Nodes/Transform.cpp Nodes/Transform.h Nodes/Geometry.cpp Nodes/Geometry.h Nodes/StateData/State.cpp Nodes/StateData/State.h Nodes/StateData/Material.cpp Nodes/StateData/Material.h Nodes/StateData/Texture.cpp Nodes/StateData/Texture.h Nodes/StateData/Light.cpp Nodes/StateData/Light.h Visitors/NodeVisitor.cpp Visitors/NodeVisitor.h Visitors/RenderVisitor.cpp Visitors/RenderVisitor.h Visitors/UpdateVisitor.cpp Visitors/UpdateVisitor.h Visitors/UpdateCallback.cpp Visitors/UpdateCallback.h Reader.cpp Reader.h)