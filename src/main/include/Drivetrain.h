
#include <frc/smartdashboard/smartdashboard.h>
#include "rev/CANSparkMax.h"
#include "rev/CANEncoder.h"
#include <DifferentialDrive.h>

class Drivetrain : public DifferentialDrive {
    private:
    
    // Declaring CAN Encoders 
        CANEncoder frontLeftEncoder;
        CANEncoder rearLeftEncoder;
        CANEncoder frontRightEncoder;
        CANEncoder rearRightEncoder;

    // Declaring CAN Spark Max Motor Controllers
        CANSparkMax frontLeft;
        CANSparkMax rearLeft;
        CANSparkMax frontRight;
        CANSparkMax rearLeft;

    // Declaring the Speed Controller Groups
        SpeedControllerGroup leftGroup;
        SpeedControllerGroup rightGroup;
    
    // Singleton Instance
        Drivetrain instance;
    
    // Private Constructor
        Drivetrain();


    public:
    
    // Declaring the calibrated distance per motor rotation 
        const double DISTANCE_PER_ROTATION;
    
    



};