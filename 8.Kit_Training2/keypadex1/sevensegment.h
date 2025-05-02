#ifndef SEVENSEGMENT_H_
#define SEVENSEGMENT_H_
#include "Std_Types.h"


#define SEVENSEGMENT_DEC								1
#define SEVENSEGMENT_WITHOUTDEC							0

#define SEVENSEGMENT_COMMONANODE						1
#define SEVENSEGMENT_COMMONCATHODE						0

#if(SEVENSEGMENT_COMMONCATHODE ==1)
#define SEVENSEGMENT_PORTCATHODE_ID	 				 PORTB_ID
#define SEVENSEGMENT_PINCATHODE_ID					 PIN0_ID
#elif(SEVENSEGMENT_COMMONANODE ==1)
#endif
#define SEVENSEGMENT_PORTID				 			 PORTC_ID
#if(SEVENSEGMENT_DEC == 1)

#define SEVENSEGMENT_PIN0ID				  			 PIN0_ID
#define SEVENSEGMENT_PIN1ID				  			 PIN1_ID
#define SEVENSEGMENT_PIN2ID				  			 PIN2_ID
#define SEVENSEGMENT_PIN3ID				  			 PIN3_ID

#elif(SEVENSEGMENT_WITHOUTDEC ==1)

#define SEVENSEGMENT_PIN0ID				  			 PIN0_ID
#define SEVENSEGMENT_PIN1ID				  			 PIN1_ID
#define SEVENSEGMENT_PIN2ID				  			 PIN2_ID
#define SEVENSEGMENT_PIN3ID				  			 PIN3_ID
#define SEVENSEGMENT_PIN4ID				  			 PIN4_ID
#define SEVENSEGMENT_PIN5ID				  			 PIN5_ID
#define SEVENSEGMENT_PIN6ID				  			 PIN6_ID

#define SEVENSEGMENT_ZER0 							   0x3F  		  /*   0011 1111    */
#define SEVENSEGMENT_ONE 							   0x06    		  /*   0000 0110    */
#define SEVENSEGMENT_TWO 							   0x5B			  /*   0101 1011	*/
#define SEVENSEGMENT_THREE 							   0x4F			  /*   0100 1111    */
#define SEVENSEGMENT_FOUR 							   0x66			  /*   0110 0110    */
#define SEVENSEGMENT_FIVE 							   0x6D			  /*   0110 1101    */
#define SEVENSEGMENT_SIX 							   0x7C			  /*   0111 1101	*/
#define SEVENSEGMENT_SEVEN 							   0x07			  /*   0000 0111	*/
#define SEVENSEGMENT_EIGHT 							   0x7F			  /*   0111 1111	*/
#define SEVENSEGMENT_NINE 							   0x67			  /*   0110 0111    */

#endif


void SEVENSEGMENT_init(void);
void SEVENSEGMENT_increment(void);
void SEVENSEGMENT_decrement(void);
void SEVENSEGMENT_setNum(uint8 a_num);
void SEVENSEGMENT_reset(void);

#endif /* SEVENSEGMENT_H_ */
