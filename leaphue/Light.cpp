#include "Light.h"

Light::Light()
{
    handler = std::make_shared<IHttpHandler>();
    HueFinder finder(handler);
    std::vector<HueFinder::HueIdentification> bridges = finder.FindBridges();
    if (bridges.empty())
    {
    	bridges.push_back({ "<ip address>", "<mac address>" });
    }
    Hue bridge = finder.GetBridge(bridges[0]);
    primaryLight = bridge.getLight(0);
}

Light::~Light()
{

}

// light1.On();
// light1.setBrightness(120);
// light1.alertHueSaturation(25500, 255);
// light1.setColorLoop(true);
// light1.setColorRGB(255, 128, 0);
// lights[1].Off();
// lights.at(1).setColorHue(4562);
