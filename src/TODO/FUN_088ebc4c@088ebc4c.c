#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088ebc6c)

void FUN_088ebc4c(int param_1,short param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = '\0';
  if (param_2 == 0) {
    cVar1 = '\x03';
  }
  else {
    if (param_2 != 0x20) {
      bVar2 = *(byte *)(param_1 + 0x273);
      goto LAB_088ebc90;
    }
    cVar1 = '\"';
  }
  bVar2 = *(byte *)(param_1 + 0x273);
LAB_088ebc90:
  if ((bVar2 & 1) != 0) {
    FUN_089c87e4(0x3ecccccd,0);
    FUN_089c879c(0x3ecccccd,0);
    *(char *)(param_1 + 0x271) = cVar1;
    return;
  }
  FUN_089c87e4(0x3ecccccd,0);
  FUN_089c879c(0x3ecccccd,0);
  if (cVar1 != '\0') {
    FUN_089c8734(0,cVar1,1,0);
  }
  return;
}

