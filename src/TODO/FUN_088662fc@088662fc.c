#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088662fc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *DAT_08aba808;
  iVar3 = 0;
  if (iVar4 == 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar4 + 0x14);
  do {
    iVar2 = (**(code **)(iVar2 + 0x54))(iVar4 + *(short *)(iVar2 + 0x50));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(iVar4 + 0x14) + 100))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x60));
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar4 + 0x4c1);
        goto LAB_08866364;
      }
      iVar4 = *(int *)(iVar4 + 4);
    }
    else {
      cVar1 = *(char *)(iVar4 + 0x4c1);
LAB_08866364:
      if (cVar1 == '\0') {
        iVar3 = iVar3 + 1;
        iVar4 = *(int *)(iVar4 + 4);
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
      }
    }
    if (iVar4 == 0) {
      return iVar3;
    }
    iVar2 = *(int *)(iVar4 + 0x14);
  } while( true );
}

