#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

// #include <frc/smartdashboard/smartdashboard.h>
#include "rev/CANSparkMax.h"
#include "rev/CANEncoder.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>
#include <cmath>


class Drivetrain : public frc::DifferentialDrive {
private:
// Declaring CAN Encoders 
    rev::CANEncoder frontLeftEncoder;
    rev::CANEncoder rearLeftEncoder;
    rev::CANEncoder frontRightEncoder;
    rev::CANEncoder rearRightEncoder;

// Declaring CAN Spark Max Motor Controllers
    rev::CANSparkMax frontLeft;
    rev::CANSparkMax rearLeft;
    rev::CANSparkMax frontRight;
    rev::CANSparkMax rearRight;

// Declaring the Speed Controller Groups
    frc::SpeedControllerGroup leftGroup;
    frc::SpeedControllerGroup rightGroup;

// Private Constructor
    Drivetrain();

public:
// Declaring the calibrated distance per motor rotation 
    // const static double DISTANCE_PER_ROTATION = 1.0/8.0 * 6.1 * M_PI;

    static Drivetrain &getInstance();

    void setLeftRightDriveSpeed(double left, double right);

};

#endif