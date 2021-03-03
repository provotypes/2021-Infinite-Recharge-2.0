#pragma once

#include <frc/Joystick.h>

#include <utility>
#include <vector>

class BindableJoystick : public frc::Joystick {
private:
    typedef void(*Runnable)();
	typedef bool(*BoolSupplier)();

	std::vector<std::pair<BoolSupplier, Runnable>> boundActions;



public:

	BindableJoystick(int port) : Joystick(port) {}

	void bind(BoolSupplier condition, Runnable action);

	void run();


};
