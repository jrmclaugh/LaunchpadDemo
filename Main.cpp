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
		launchpad.set_map_DrumRack();
		launchpad.turnOnAllLow();
		launchpad.turnOnAllMed();
		launchpad.turnOnAllHigh();
		launchpad.resetLaunchpad();
	}

    return 0;
}
