#define __SFR_OFFSET 0
#include "avr/io.h"

.global start
.global forever

start:
  SBI DDRD, 0 ; Set PD0 as Output
  SBI DDRD, 1 ; Set PD2 as Output
  SBI DDRD, 2 ; Set PD2 as Output
  SBI DDRD, 3 ; Set PD3 as Output
  SBI DDRD, 4 ; Set PD4 as Output
  SBI DDRD, 5 ; Set PD5 as Output
  SBI DDRD, 6 ; Set PD6 as Output
  SBI DDRD, 7 ; Set PD7 as Output
  RET

forever:
    LDI R16, 0x3F
    OUT PORTD, R16
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L1: DEC  R20
    BRNE L1
    DEC  R19
    BRNE L1
    DEC  R18
    BRNE L1

    LDI R17, 0x06
    OUT PORTD, R17
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L2: DEC  R20
    BRNE L2
    DEC  R19
    BRNE L2
    DEC  R18
    BRNE L2

    LDI R18, 0x5B
    OUT PORTD, R18
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L3: DEC  R20
    BRNE L3
    DEC  R19
    BRNE L3
    DEC  R18
    BRNE L3

    LDI R19, 0x4F
    OUT PORTD, R19
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L4: DEC  R20
    BRNE L4
    DEC  R19
    BRNE L4
    DEC  R18
    BRNE L4

    LDI R20, 0x66
    OUT PORTD, R20
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L5: DEC  R20
    BRNE L5
    DEC  R19
    BRNE L5
    DEC  R18
    BRNE L5

    LDI R21, 0x6D
    OUT PORTD, 21
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L6: DEC  R20
    BRNE L6
    DEC  R19
    BRNE L6
    DEC  R18
    BRNE L6

    LDI R22, 0x7D
    OUT PORTD, R22
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L7: DEC  R20
    BRNE L7
    DEC  R19
    BRNE L7
    DEC  R18
    BRNE L7

    LDI R23, 0x07
    OUT PORTD, R23
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L8: DEC  R20
    BRNE L8
    DEC  R19
    BRNE L8
    DEC  R18
    BRNE L8

    LDI R24, 0x7F
    OUT PORTD, R24
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L9: DEC  R20
    BRNE L9
    DEC  R19
    BRNE L9
    DEC  R18
    BRNE L9

    LDI R25, 0x67
    OUT PORTD, R25
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L10: DEC  R20
    BRNE L10
    DEC  R19
    BRNE L10
    DEC  R18
    BRNE L10

    LDI R26, 0x77
    OUT PORTD, R26
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L11: DEC  R20
    BRNE L11
    DEC  R19
    BRNE L11
    DEC  R18
    BRNE L11

    LDI R27, 0x7C
    OUT PORTD, R27
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L12: DEC  R20
    BRNE L12
    DEC  R19
    BRNE L12
    DEC  R18
    BRNE L12

    LDI R28, 0x39
    OUT PORTD, R28
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L13: DEC  R20
    BRNE L13
    DEC  R19
    BRNE L13
    DEC  R18
    BRNE L13

    LDI R29, 0x5E
    OUT PORTD, R29
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L14: DEC  R20
    BRNE L14
    DEC  R19
    BRNE L14
    DEC  R18
    BRNE L14

    LDI R30, 0x79
    OUT PORTD, R30
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L15: DEC  R20
    BRNE L15
    DEC  R19
    BRNE L15
    DEC  R18
    BRNE L15

    LDI R31, 0x71
    OUT PORTD, R31
    LDI  R18, 41
    LDI  R19, 150
    LDI  R20, 128
L16: DEC  R20
    BRNE L16
    DEC  R19
    BRNE L16
    DEC  R18
    BRNE L16

    RET