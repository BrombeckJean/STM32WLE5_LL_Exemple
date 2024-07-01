/********************************************************************************
  * @file           : RNG.h
  * @brief          : Header for RNG.c file.
  *******************************************************************************/

//------------------ SPECIAL DEFINE ------------------------------------------------------------------------- SPECIAL DEFINE ---------------------------------------------------*/
#ifndef PROJECT_FOLDERS_USER_PERIPHERAL_RNG_H_
#define PROJECT_FOLDERS_USER_PERIPHERAL_RNG_H_


//------------------ INCLUDE -------------------------------------------------------------------------------- INCLUDE ----------------------------------------------------------*/
	/* LL include */
	#include "full_ll_include.h"
	#include "project_option.h"

//------------------ DEFINE --------------------------------------------------------------------------------- DEFINE -----------------------------------------------------------*/


//------------------ PROTOTYPE ------------------------------------------------------------------------------ PROTOTYPE --------------------------------------------------------*/
	void RNG_Init (void);
	uint32_t Get_RNG_Number (void);


//------------------ END SPECIAL DEFINE --------------------------------------------------------------------- END SPECIAL DEFINE -----------------------------------------------*/
#endif /* PROJECT_FOLDERS_USER_PERIPHERAL_RNG_H_ */
