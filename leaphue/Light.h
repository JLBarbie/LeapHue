#pragma once

#include <vector>
#include <HueLight.h>

class Light
{
public:
    Light();
    ~Light();

    std::vector<HueLight> listLight;
    HueLight primaryLight;
};
