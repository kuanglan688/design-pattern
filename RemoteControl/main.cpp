#include <iostream>
#include "remotecontrol.h"
#include "lightcommand.h"

using namespace std;

int main()
{

    RemoteControl *remotecontrol = new RemoteControl;
    Light *light1 = new Light("Living room");
    Light *light2 = new Light("Kitchen");
    LightOnCommand *livingON = new LightOnCommand(light1);
    LightOffCommand *livingOFF = new LightOffCommand(light1);
    LightOnCommand *kitchenON = new LightOnCommand(light2);
    LightOffCommand *kitchenOFF = new LightOffCommand(light2);

    remotecontrol->setCommand(0,livingON,livingOFF);
    remotecontrol->setCommand(2,kitchenON,kitchenOFF);

    cout << remotecontrol;

    remotecontrol->onButtonWasPushed(0);
    remotecontrol->offButtonWasPushed(0);
    remotecontrol->onButtonWasPushed(1);
    remotecontrol->offButtonWasPushed(1);
    remotecontrol->onButtonWasPushed(2);
    remotecontrol->onButtonWasPushed(2);
    remotecontrol->offButtonWasPushed(2);

    return 0;
}
