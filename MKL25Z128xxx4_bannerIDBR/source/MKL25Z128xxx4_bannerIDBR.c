#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"
#include "fsl_debug_console.h"
#include "LCD.h"

int main(void) {
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
    BOARD_InitDebugConsole();
    LCD_Activate(1u,1u,0u);
    LCD_Set(1u,0u,0u);
    LCD_Clear();

    while(1) {
    	Line(1);
        LCD_Mode(1, 1);
		LCD_Write('M');
		LCD_Write('i');
		LCD_Write('c');
		LCD_Write('r');
		LCD_Write('o');
		LCD_Write('s');
		LCD_Write(' ');
		LCD_Write('I');
		LCD_Write('s');
		LCD_Write('i');
		LCD_Write('s');
		LCD_Write(' ');
		LCD_Write('6');
		LCD_Write('A');
    }
    return 0 ;
}
