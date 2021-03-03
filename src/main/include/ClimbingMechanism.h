#ifndef CLIMBING_MECH
#define CLIMBING_MECH
// #include "TalonSRX.h"

class ClimbingMechanism {

private:
    static ClimbingMechanism* instance;
    // TalonSRX climberWinch = new TalonSRX(6);
    // TalonSRX climberElevator = new TalonSRX(5);

    double ELEVATOR_SPEED = 0.2;
    double WINCH_SPEED = 0.05;

    

    ClimbingMechanism() {}

    enum ClimbingMechanismModes {
            
    };

public:
    ClimbingMechanism getInstance() {}

    

// private:
    // ClimbingMechanismModes mode = ClimbingMechanismModes.off;

};

#endif