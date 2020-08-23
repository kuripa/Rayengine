#include "rayengine.hpp"

#include "core/entry.hpp"

#include <iostream>

class sandbox : public rayengine::application
{
    public:
    
    sandbox()
    {
        std::cout << "Sandbox";
    }
    
    ~sandbox()
    {
    }
    
};

rayengine::application* rayengine::createApplication()
{
    return new sandbox();
}