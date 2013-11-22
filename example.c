/************************************
 * Author: C2C Caleb Ziegler
 * Date: 21 NOV 13
 * Description: Moves robot forward,
 * backward, right (by an angle less
 * than 45 degrees), and left (by an
 * angle greater than 45 degrees.
 ***********************************/

#include <msp430.h> 
#include "motor.h"


void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer

    //Delays dictate how long each function is executed. To move forward or backward a further distance,
    //increase the delay after the moveRobotForward or moveRobotBackward functions. To turn larger angles,
    //increase the delay after the turnRobotRight or turnRobotLeft functions.

    initRobot();
    __delay_cycles(3000000); //Delay here to give user time to get robot to floor
    moveRobotForward();
    __delay_cycles(1000000);
    stopRobot();
    __delay_cycles(1000000);
    turnRobotRight();
    __delay_cycles(300000);
    stopRobot();


    while(1){} //traps CPU in infinite loop to prevent crashing

}
