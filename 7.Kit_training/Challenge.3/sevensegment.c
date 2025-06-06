#include"sevensegment.h"
#include"gpio.h"

static uint8 g_num;





void SEVENSEGMENT_init(void)
{
#if(SEVENSEGMENT_DEC==1)
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, PIN_OUTPUT);
#elif(SEVENSEGMENT_WITHOUTDEC==1)

GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, PIN_OUTPUT);
GPIO_setupPinDirection(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, PIN_OUTPUT);
#endif

#if(SEVENSEGMENT_COMMONCATHODE ==1)
GPIO_setupPinDirection(SEVENSEGMENT_PORTCATHODE_ID,SEVENSEGMENT_PINCATHODE_ID, PIN_OUTPUT);
GPIO_writePin(SEVENSEGMENT_PORTCATHODE_ID,SEVENSEGMENT_PINCATHODE_ID, LOGIC_HIGH);
#endif
SEVENSEGMENT_reset();
}
void SEVENSEGMENT_setNum(uint8 a_num)
{
	g_num=a_num;
#if(SEVENSEGMENT_DEC==1)
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(g_num,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(g_num,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(g_num,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(g_num,3));
#elif(SEVENSEGMENT_WITHOUTDEC==1)

switch (g_num)
{
case 0 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_ZER0,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_ZER0,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_ZER0,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_ZER0,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_ZER0,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_ZER0,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_ZER0,6));
									break;
case 1 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_ONE,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_ONE,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_ONE,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_ONE,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_ONE,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_ONE,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_ONE,6));
									break;
case 2 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_TWO,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_TWO,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_TWO,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_TWO,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_TWO,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_TWO,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_TWO,6));
									break;
case 3 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_THREE,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_THREE,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_THREE,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_THREE,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_THREE,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_THREE,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_THREE,6));
									break;
case 4 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_FOUR,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_FOUR,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_FOUR,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_FOUR,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_FOUR,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_FOUR,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_FOUR,6));
									break;
case 5 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_FIVE,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_FIVE,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_FIVE,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_FIVE,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_FIVE,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_FIVE,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_FIVE,6));
									break;
case 6 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_SIX,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_SIX,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_SIX,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_SIX,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_SIX,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_SIX,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_SIX,6));
									break;
case 7 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_SEVEN,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_SEVEN,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_SEVEN,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_SEVEN,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_SEVEN,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_SEVEN,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_SEVEN,6));
									break;
case 8 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_EIGHT,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_EIGHT,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_EIGHT,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_EIGHT,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_EIGHT,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_EIGHT,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_EIGHT,6));
									break;
case 9 :
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN0ID, GET_BIT(SEVENSEGMENT_NINE,0));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN1ID, GET_BIT(SEVENSEGMENT_NINE,1));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN2ID, GET_BIT(SEVENSEGMENT_NINE,2));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN3ID, GET_BIT(SEVENSEGMENT_NINE,3));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN4ID, GET_BIT(SEVENSEGMENT_NINE,4));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN5ID, GET_BIT(SEVENSEGMENT_NINE,5));
GPIO_writePin(SEVENSEGMENT_PORTID, SEVENSEGMENT_PIN6ID, GET_BIT(SEVENSEGMENT_NINE,6));
									break;
default:
	;
}

#endif




}
void SEVENSEGMENT_increment(void)
{
	g_num++;
	SEVENSEGMENT_setNum(g_num);

}
void SEVENSEGMENT_decrement(void)
{
	g_num--;
	SEVENSEGMENT_setNum(g_num);


}
void SEVENSEGMENT_reset(void)
{
	g_num=0;
	SEVENSEGMENT_setNum(g_num);


}


