#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H

#include "Drivetrain.h"

// Using intializer lists for the motors, speed controllers, and encoders.
Drivetrain::Drivetrain() : frontLeft(3, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
                           rearLeft(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
                           frontRight(4, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
                           rearRight(1, rev::CANSparkMaxLowLevel::MotorType::kBrushless),
                        
                        // Getting the encoders from the motors                       
                           frontLeftEncoder(frontLeft.GetEncoder()),
                           rearLeftEncoder(frontLeft.GetEncoder()),
                           frontRightEncoder(frontLeft.GetEncoder()),
                           rearRightEncoder(frontLeft.GetEncoder()),

                        // Grouping motor controllers together
                           leftGroup(frontLeft, rearLeft),
                           rightGroup(frontRight, rearRight),
                        
                           DifferentialDrive(leftGroup, rightGroup) {


    
      

}

#endif

