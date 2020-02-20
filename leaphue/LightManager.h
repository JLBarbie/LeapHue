#pragma once

#include <vector>

#include <Hue.h>
class HueLight;
class LinHttpHandler;

class LightManager
{
public:
    LightManager();
    ~LightManager();

    /// @brief : get light by id
    HueLight getLight(int index);
    HueLight getCurrentLight();
    std::string getName(int index);

    void previousLight();
    void nextLight();


protected:
    std::shared_ptr<LinHttpHandler> handler;

private:
    std::vector<HueLight> listLight;
    int mCurrentIndex = 0;
};
