#include "main.h"
Motor Flywheel = Motor(2, E_MOTOR_GEARSET_06, false);
Motor Intake = Motor(3, E_MOTOR_GEARSET_18, false);
ADIDigitalOut expansion1 = ADIDigitalOut(4);
ADIDigitalOut expansion2 = ADIDigitalOut(5);
Controller controller = Controller(E_CONTROLLER_MASTER);