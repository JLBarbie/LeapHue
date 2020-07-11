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

    /// @brief Return current light
    HueLight getCurrentLight();

    /// @brief Get name of light at index
    std::string getName(int index);

    /// @brief Select previous light
    void previousLight();

    /// @brief Select next light
    void nextLight();


protected:
    std::shared_ptr<LinHttpHandler> mHandler;

private:
    std::vector<HueLight> mListLight;
    int mCurrentIndex = 0;
};
