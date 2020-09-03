#if !defined(OPTOPLATE_H)
#define OPTOPLATE_H

#include <Windows.h>
#include <stdio.h>
#include <string>


#ifdef LUCIA_CALLBACK_EXPORTS
    #define LUCIA_CALLBACK_API __declspec(dllexport)
#else
    #define LUCIA_CALLBACK_API __declspec(dllimport)
#endif

// Estabish connection to the OptoPlate on the COM port - int portNumber
extern "C" LUCIA_CALLBACK_API int OptoPlateConnect(int portNumber);
// Estabish connection to the OptoPlate on any connected COM port
extern "C" LUCIA_CALLBACK_API int OptoPlateConnectAuto();
// Disconnect from the  OptoPlate. Must be called at the end of session
extern "C" LUCIA_CALLBACK_API int OptoPlateDisconnect();

// Disable well. A is index 0-11, B is index 12-23 and so on
extern "C" LUCIA_CALLBACK_API int OptoPlateDisableLED(int LEDindex);
// Enable well. A is index 0-11, B is index 12-23 and so on
extern "C" LUCIA_CALLBACK_API int OptoPlateEnableLED(int LEDindex);

// Disable well in an inversed pattern. A is index 11-0, B is index 23-12, and so on. Used to when imaging upside down
extern "C" LUCIA_CALLBACK_API int OptoPlateDisableLEDinv(int LEDindex);
// Ensable well in an inversed pattern. A is index 11-0, B is index 23-12, and so on. Used to when imaging upside down
extern "C" LUCIA_CALLBACK_API int OptoPlateEnableLEDinv(int LEDindex);

#endif //OPTOPLATE_H