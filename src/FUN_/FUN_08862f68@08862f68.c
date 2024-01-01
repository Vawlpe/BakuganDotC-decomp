#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08862f68(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *DAT_08aba808;
joined_r0x08862f98:
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          if (iVar3 == 0) {
            return iVar4;
          }
          if (iVar3 != param_1) break;
          iVar3 = *(int *)(iVar3 + 4);
        }
        if (*(char *)(iVar3 + 0x4c1) == '\0') break;
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (*(char *)(iVar3 + 0x476) == '\0') break;
      iVar3 = *(int *)(iVar3 + 4);
    }
    if (param_2 != 1) break;
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x8c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x88));
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x158);
      goto LAB_08862ff0;
    }
    iVar3 = *(int *)(iVar3 + 4);
  }
  cVar1 = *(char *)(param_1 + 0x158);
LAB_08862ff0:
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x7c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x78));
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 4);
      goto joined_r0x08862f98;
    }
    iVar2 = (**(code **)(*(int *)(iVar3 + 0x14) + 0x84))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x80));
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar3 + 4);
      goto joined_r0x08862f98;
    }
  }
  iVar4 = iVar4 + 1;
  iVar3 = *(int *)(iVar3 + 4);
  goto joined_r0x08862f98;
}

