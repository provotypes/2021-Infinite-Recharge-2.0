
#include "BindableJoystick.h"


void BindableJoystick::bind(BoolSupplier condition, Runnable action) {
	boundActions.push_back(std::pair<BoolSupplier, Runnable>(condition, action));
}

void BindableJoystick::run() {
	for (auto action : boundActions) {
		if (action.first()) {
			action.second();
		}
	}
}

