#pragma once

#include "application.hpp"

extern rayengine::application* rayengine::createApplication();

int main(int argc, char** argv)
{
    auto app = rayengine::createApplication();
    
    app->run();
    
    delete app;
}