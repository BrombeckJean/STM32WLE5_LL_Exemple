/********************************************************************************
 * @file           : main.c
 * @brief          : main project file.
 *********************************************************************************/

//------------------ INCLUDE -------------------------------------------------------------------------------- INCLUDE --------------------------------------------------------*/
	#include "main.h"

//------------------ GLOBAL STATEMENT ----------------------------------------------------------------------- GLOBLAL STATEMENT ----------------------------------------------*/
	LL_GPIO_InitTypeDef  GPIO_InitStruct;
	LL_I2C_InitTypeDef 	 I2C_InitStruct;

//------------------ MAIN FUNCTION -------------------------------------------------------------------------- MAIN FUNCTION --------------------------------------------------*/
	int main(void)
	{
		/*Initialization*/
		System_Clock_Config();
		Systick_Conf();
		Init_All_Periph();

		NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);

		while (1)
		{
			GPIO_Toggle(GPIOA,LL_GPIO_PIN_4);
			//Display_Temperature(30);
			HAL_Delay(500);
		}
	}

//------------------ ERROR HANDLER --------------------------------------------------------------------------- ERROR HANDLER -------------------------------------------------*/
	void Error_Handler(void)
	{
		/* User can add his own implementation to report the HAL error return state. */
		__disable_irq();
		while (1);
	}
