#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2040(int param_1,short param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x658);
  if (iVar4 == 0) {
    return;
  }
  sVar2 = *(short *)(iVar4 + 0x142);
  do {
    if (sVar2 == 0xbc7) {
      cVar1 = *(char *)(iVar4 + 0x15e);
LAB_088c2088:
      if (cVar1 == '\0') {
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar3 = FUN_088d93fc(iVar4);
        if (iVar3 == param_2) {
          (**(code **)(*(int *)(iVar4 + 0x14) + 0x84))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x80),0);
          return;
        }
        iVar4 = *(int *)(iVar4 + 4);
      }
    }
    else {
      if (sVar2 == 0xbd1) {
        cVar1 = *(char *)(iVar4 + 0x15e);
        goto LAB_088c2088;
      }
      iVar4 = *(int *)(iVar4 + 4);
    }
    if (iVar4 == 0) {
      return;
    }
    sVar2 = *(short *)(iVar4 + 0x142);
  } while( true );
}

