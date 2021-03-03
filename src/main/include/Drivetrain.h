
#include <frc/smartdashboard/smartdashboard.h>
#include "rev/CANSparkMax.h"
#include "rev/CANEncoder.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc/SpeedControllerGroup.h>

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
        rev::CANSparkMax rearReft;

    // Declaring the Speed Controller Groups
        frc::SpeedControllerGroup leftGroup;
        frc::SpeedControllerGroup rightGroup;
    
    // Singleton Instance
        Drivetrain* instance;
    
    // Private Constructor
        Drivetrain();


    public:
    
    // Declaring the calibrated distance per motor rotation 
        const double DISTANCE_PER_ROTATION;
    
    



};