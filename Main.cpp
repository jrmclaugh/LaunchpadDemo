/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "Launchpad.h"

void drawSweep(Launchpad *launchpad);


//==============================================================================
int main (int argc, char* argv[])
{
	Launchpad launchpad;

	// test changing file 2
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
/*		launchpad.set_map_XY();
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
		launchpad.writeBufNow();*/
		launchpad.resetLaunchpad();

//		for(int i = 0; i < 8; i++)
//		{
//			for(int j = 0; j < 8; j++)
//			{
//				launchpad.setKey(i, j, Launchpad::LaunchpadKey::Amber, false);
//			}
//		}
//		launchpad.writeBufNow();
		while(1)
		{
			drawSweep(&launchpad);
		}
		launchpad.resetLaunchpad();
	}

    return 0;
}

void drawSweep(Launchpad *launchpad)
{
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			launchpad->setKey(i, j, Launchpad::LaunchpadKey::Red, false);
		}
		launchpad->writeBufNow();
	}

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			launchpad->setKey(i, j, Launchpad::LaunchpadKey::Green, false);
		}
		launchpad->writeBufNow();
	}
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			launchpad->setKey(j, i, Launchpad::LaunchpadKey::Red, false);
		}
		launchpad->writeBufNow();
	}
	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			launchpad->setKey(j, i, Launchpad::LaunchpadKey::Green, false);
		}
		launchpad->writeBufNow();
	}
}
