#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eec24(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x269);
  iVar3 = 0;
  if (bVar1 < 3) {
    if (bVar1 != 0) {
      if (bVar1 < 2) {
        iVar2 = *(short *)(param_1 + 0x260) + -1;
        *(short *)(param_1 + 0x260) = (short)iVar2;
        if (iVar2 * 0x10000 >> 0x10 < 1) {
          iVar3 = 1;
        }
      }
      else if (*(short *)(param_1 + 0x256) == *(short *)(param_1 + 600)) {
        *(undefined2 *)(param_1 + 0x25e) = 0;
        iVar3 = 1;
      }
      goto LAB_088eece8;
    }
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    if (bVar1 == 4) {
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar3 = 1;
      }
      goto LAB_088eece8;
    }
    iVar3 = *(int *)(param_1 + 0xc);
  }
  iVar3 = (**(code **)(iVar3 + 100))(param_1 + *(short *)(iVar3 + 0x60));
LAB_088eece8:
  if (iVar3 != 0) {
    *(undefined *)(param_1 + 0x264) = 2;
    *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
  }
  return;
}

