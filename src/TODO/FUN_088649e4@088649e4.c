#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088649e4(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20c);
  if (((((*(uint *)(param_1 + 0x144) & 0x200000) == 0) && (param_2 != 4)) && (param_2 != 0x14)) &&
     (*(int *)(iVar1 + 0x170) != 0)) {
    if ((*(char *)(param_1 + 0x470) == '\0') || (*(int *)(iVar1 + 0x170) == 3)) {
      iVar2 = 9;
      if (param_3 != 0) {
        iVar1 = *(int *)(param_3 + 0x14);
        if (param_4 < 3) {
          iVar2 = (**(code **)(iVar1 + 0xa4))(param_3 + *(short *)(iVar1 + 0xa0));
          iVar2 = iVar2 + 10;
          iVar1 = *(int *)(param_1 + 0x20c);
        }
        else {
          iVar2 = (**(code **)(iVar1 + 0xa4))(param_3 + *(short *)(iVar1 + 0xa0));
          iVar2 = iVar2 + 0x10;
          iVar1 = *(int *)(param_1 + 0x20c);
        }
      }
      FUN_08823f5c(DAT_08ac5c70,iVar2,iVar1 + 0x150);
    }
    else {
      FUN_08823f5c(DAT_08ac5c70,0x16,iVar1 + 0x150);
      iVar1 = FUN_088243d8(DAT_08ac5c70,0x17,param_1 + 0x250);
      *(int *)(iVar1 + 0x1fc) = param_1;
      if (param_1 != 0) {
        *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(param_1 + 0xc);
      }
    }
  }
  return;
}

