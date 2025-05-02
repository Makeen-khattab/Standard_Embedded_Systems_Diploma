#ifndef BUTTON_H_
#define BUTTON_H_

#include "Std_Types.h"

#define BUTTON_PULLUP 				    (1)
#define BUTTON_COMPVALUE_PULLUP 	    (0)
#define BUTTON_PRESSED_PULLUP           (0)
#define BUTTON_PULLDOWN 				(0)
#define BUTTON_COMPVALUE_PULLDOWN 	    (1)
#define BUTTON_PRESSED_PULLDOWN         (1)

#define BUTTON_PORTAID                  (0)
#define BUTTON_PORTBID                  (1)
#define BUTTON_PORTCID                  (2)
#define BUTTON_PORTDID                  (3)

#define BUTTON_PIN0ID					(0)
#define BUTTON_PIN1ID					(1)
#define BUTTON_PIN2ID					(2)
#define BUTTON_PIN3ID					(3)
#define BUTTON_PIN4ID					(4)
#define BUTTON_PIN5ID					(5)
#define BUTTON_PIN6ID					(6)
#define BUTTON_PIN7ID					(7)


void BUTTON_init(uint8 a_portId,uint8 a_pinId);

uint8 BUTTON_state(uint8 a_portId,uint8 a_pinId,uint8 a_mode);




#endif /* BUTTON_H_ */
