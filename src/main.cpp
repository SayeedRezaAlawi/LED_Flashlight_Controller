// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required

using namespace std;

// Add your project's header files here
// #include "CFraction.h"
#include "CPushButton.h"
#include "CEventQueue.h"
#include "CEeprom.h"
#include "CFlashlightLed.h"
#include "CTimer.h"
#include "CVoltageMeter.h"
#include "CWarningLed.h"
#include "global.h"
#include "flashlightController.h"

// Main program
int main ()
{
	CPushButton pushButton;
	CTimer timer;
	CFlashlightLed light;
	CWarningLed hbu;
	CVoltageMeter bat;
	CEeprom eeprom;

	flashlightController controller(&pushButton,&timer,&light,&hbu, &bat, &eeprom);
	cout << "flashlight_Controller started." << endl << endl;

	controller.run();

	return 0;
}
