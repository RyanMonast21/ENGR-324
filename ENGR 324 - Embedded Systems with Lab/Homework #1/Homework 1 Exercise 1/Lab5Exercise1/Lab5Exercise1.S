#define __SFR_OFFSET 0

#include "avr/io.h"

.global start
.global forever


start:
	SBI DDRB, 2 ; Set PB2 as Output
	SBI DDRB, 3 ; Set PB3 as Output
	CBI DDRB, 4 ; Set PB4 as Input
	SBI PORTB, 4 ; Enable pull-up resistor
	RET
	
forever:
L2: SBIS PINB, 4 ; Skips below statement if Push-button is not pressed
	RJMP L1
  SBI PORTB, 2 ; Turn ON LED -> PB2 if not pressed
	CBI PORTB, 3 ; Turn OFF LED -> PB3 if not pressed
	SBIC PINB, 4 ; Skips below statement if Push-button is pressed
	RJMP L2
L1: 
  SBI PORTB, 3 ; Turn ON LED -> PB3 if pressed
	CBI PORTB, 2 ; Turn OFF LED -> PB2 if pressed
	RET