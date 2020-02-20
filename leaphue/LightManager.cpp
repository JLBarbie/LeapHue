#include "LightManager.h"

#include <Hue.h>
#include <HueLight.h>
#include <LinHttpHandler.h>

#define USERNAME "0rTQpy-JBdHHH9g59E7NmvP5PCxEtLidmCydnloE"
#define IP_ADDRESS "192.168.1.35"
#define MAC_ADDRESS "EC:B5:FA:00:64:DB"

LightManager::LightManager()
{
    handler = std::make_shared<LinHttpHandler>();
    HueFinder finder(handler);

    std::vector<HueFinder::HueIdentification> bridges = finder.FindBridges();
    if (bridges.empty())
    {
        bridges.push_back({ IP_ADDRESS, MAC_ADDRESS });
    }
    finder.AddUsername(bridges[0].mac, USERNAME);

    Hue bridge = finder.GetBridge(bridges[0]);
    for (HueLight light : bridge.getAllLights()) // iterate over array fibonacci
        listLight.push_back(light);
}

LightManager::~LightManager()
{

}

HueLight LightManager::getLight(int index)
{
    return listLight[index];
}

HueLight LightManager::getCurrentLight()
{
    return listLight[mCurrentIndex];
}

std::string LightManager::getName(int index)
{
    return listLight[index].getName();
}

void LightManager::nextLight()
{
    if (mCurrentIndex >= listLight.size() - 1)
        mCurrentIndex = 0;
    else
        mCurrentIndex++;
}

void LightManager::previousLight()
{
    if (mCurrentIndex == 0)
        mCurrentIndex = listLight.size() - 1;
    else
        mCurrentIndex--;
}

// light1.On();
// light1.setBrightness(120);
// light1.alertHueSaturation(25500, 255);
// light1.setColorLoop(true);
// light1.setColorRGB(255, 128, 0);
// lights[1].Off();
// lights.at(1).setColorHue(4562);
