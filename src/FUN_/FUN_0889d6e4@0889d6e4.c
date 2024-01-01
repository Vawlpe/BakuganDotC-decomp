#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0889d6e4(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  switch(DAT_08abd488) {
  case 0:
  case 1:
  case 2:
  case 3:
    fVar2 = -90.9;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    fVar2 = -35.5;
    break;
  case 0xc:
    fVar2 = -38.0;
    break;
  case 0xe:
  case 0xf:
    fVar2 = -40.0;
    break;
  case 0x10:
    fVar2 = -40.0;
    break;
  case 0x12:
  case 0x13:
    fVar2 = -25.9;
    break;
  case 0x18:
  case 0x1b:
    fVar2 = -60.0;
  }
  fVar1 = (float)FUN_0889d654(fVar2);
  return fVar2 + fVar1;
}

