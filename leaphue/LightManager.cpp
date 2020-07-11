#include "LightManager.h"

#include <Hue.h>
#include <HueLight.h>
#include <LinHttpHandler.h>

#include "Utils.h"

#define USERNAME "0rTQpy-JBdHHH9g59E7NmvP5PCxEtLidmCydnloE"
#define IP_ADDRESS "192.168.1.35"
#define MAC_ADDRESS "EC:B5:FA:00:64:DB"

LightManager::LightManager()
{
    mHandler = std::make_shared<LinHttpHandler>();
    HueFinder finder(mHandler);

    std::vector<HueFinder::HueIdentification> bridges = finder.FindBridges();
    if (bridges.empty())
    {
        bridges.push_back({ IP_ADDRESS, MAC_ADDRESS });
    }
    finder.AddUsername(bridges[0].mac, USERNAME);

    Hue bridge = finder.GetBridge(bridges[0]);
    for (HueLight light : bridge.getAllLights()) // iterate over array fibonacci
        mListLight.push_back(light);
}

LightManager::~LightManager()
{

}

HueLight LightManager::getLight(int index)
{
    return mListLight[index];
}

HueLight LightManager::getCurrentLight()
{
    return mListLight[mCurrentIndex];
}

std::string LightManager::getName(int index)
{
    return mListLight[index].getName();
}

void LightManager::nextLight()
{
    if (mCurrentIndex >= mListLight.size() - 1)
        mCurrentIndex = 0;
    else
        mCurrentIndex++;
}

void LightManager::previousLight()
{
    if (mCurrentIndex == 0)
        mCurrentIndex = mListLight.size() - 1;
    else
        mCurrentIndex--;
}
