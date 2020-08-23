#include "rayengine.hpp"

#include "core/entry.hpp"

class sandbox : public rayengine::application
{
    public:
    
    sandbox()
    {
    }
    
    ~sandbox()
    {
    }
    
};

rayengine::application* rayengine::createApplication()
{
    return new sandbox();
}