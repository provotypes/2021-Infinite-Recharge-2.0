#pragma once


#include <utility>

#include <vector>

class BindableJoystick {
private:
    typedef void(*Runnable)();
	typedef bool(*BoolSupplier)();

	std::vector<std::pair<BoolSupplier, Runnable>> boundActions;



public:

	void bind(BoolSupplier condition, Runnable action);

	void run();


};
