/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Launchpad.h"


//==============================================================================
int main (int argc, char* argv[])
{
	Launchpad launchpad;

	Logger::outputDebugString("!!Hellow World!!");

	Logger::outputDebugString("Default Layout");
	launchpad.print_keys();
	launchpad.set_map_XY();
	Logger::outputDebugString("XY Layout");
	launchpad.print_keys();
	launchpad.set_map_DrumRack();
	Logger::outputDebugString("DrumRack Layout");
	launchpad.print_keys();

	if(launchpad.isOutputOpen())
	{
		launchpad.resetLaunchpad();
		launchpad.set_map_XY();
		launchpad.turnOnAllLow();
		launchpad.turnOnAllMed();
		launchpad.turnOnAllHigh();
		launchpad.resetLaunchpad();
		launchpad.setKey(0, 0, Launchpad::LaunchpadKey::Green, true);
		launchpad.setKey(0, 7, Launchpad::LaunchpadKey::Green, true);
		launchpad.setKey(7, 0, Launchpad::LaunchpadKey::Green, true);
		launchpad.setKey(7, 7, Launchpad::LaunchpadKey::Green, true);
		launchpad.resetLaunchpad();
		launchpad.setKey(0, 0, Launchpad::LaunchpadKey::Green, false);
		launchpad.setKey(0, 7, Launchpad::LaunchpadKey::Green, false);
		launchpad.setKey(7, 0, Launchpad::LaunchpadKey::Green, false);
		launchpad.setKey(7, 7, Launchpad::LaunchpadKey::Green, false);
		launchpad.writeBufNow();
		launchpad.resetLaunchpad();
		launchpad.sendRawMessage(0xB0, 0x00, 0x31);
		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i != 3 && j != 4)
				{
					launchpad.setKey(i, j, Launchpad::LaunchpadKey::Green, false);
				}
			}
		}
		launchpad.writeBufNow();
		launchpad.sendRawMessage(0xB0, 0x00, 0x34);
		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i != 3 && j != 4)
				{
					launchpad.setKey(i, j, Launchpad::LaunchpadKey::Red, false);
				}
			}
		}
		launchpad.writeBufNow();
		launchpad.sendRawMessage(0xB0, 0x00, 0x31);
		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i != 3 && j != 4)
				{
					launchpad.setKey(i, j, Launchpad::LaunchpadKey::Amber, false);
				}
			}
		}
		launchpad.writeBufNow();
		launchpad.sendRawMessage(0xB0, 0x00, 0x34);
		launchpad.resetLaunchpad();
	}

    return 0;
}
