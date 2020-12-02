/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <vasilydavydov.h>

// Function for assignment 1-1
void assignment_week3_1(void) {


motor_start();
motor_forward(0, 0);
    
    // Track navigation
    motor_forward(255, 1310);
    motor_turn(200, 0, 262);
    motor_forward(255, 1020);
    motor_turn(200, 0, 262);
    motor_forward(255, 1040);
    motor_turn(255, 0, 250);
    motor_forward(255, 250);
    motor_turn(255, 200, 600);
    motor_turn(255, 0, 31);
    motor_forward(255, 390);
    
    // Shut down robot
    shut();

}


/*void start(bool motor, bool IR, bool reflectance, bool ultrasonic, bool led){
    BatteryLed_Write(0);
    while (true) {
      if (SW1_Read() == 0) {
         led = !led;
         BatteryLed_Write(led);
         if (led) {
            printf("Led is ON\n");
         } else {
            printf("Led is OFF\n");
         }
         Beep(1000, 150);
         while(SW1_Read() == 0) vTaskDelay(10); // Wait while button is being pressed
      }        
   }

motor_start();              
motor_forward(0, 0);
 }
*/
void shut (void){
    motor_forward(0,0);
    motor_stop();
}
    

/* [] END OF FILE */
