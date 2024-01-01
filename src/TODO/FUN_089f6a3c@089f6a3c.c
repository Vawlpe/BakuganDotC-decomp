#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f6a3c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (0xff < param_3) {
    if (param_2 < 2) {
      if (0 < param_2) {
        iVar2 = 0;
        iVar1 = (int)(param_3 + ((uint)(param_3 >> 5) >> 0x1b)) >> 5;
        if (0 < iVar1) {
          do {
            iVar4 = 0;
            iVar3 = param_1;
            do {
              uVar5 = *(undefined4 *)(iVar3 + 0x20);
              *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x10);
              *(undefined4 *)(iVar3 + 0x10) = uVar5;
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + 4;
            } while (iVar4 < 4);
            iVar2 = iVar2 + 1;
            param_1 = param_1 + 0x40;
          } while (iVar2 < iVar1);
        }
      }
    }
    else if (param_2 == 3) {
      iVar2 = 0;
      iVar1 = (int)(param_3 + ((uint)(param_3 >> 5) >> 0x1b)) >> 5;
      if (0 < iVar1) {
        do {
          iVar4 = 0;
          iVar3 = param_1;
          do {
            uVar5 = *(undefined4 *)(iVar3 + 0x40);
            *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x20);
            *(undefined4 *)(iVar3 + 0x20) = uVar5;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 + 4;
          } while (iVar4 < 8);
          iVar2 = iVar2 + 1;
          param_1 = param_1 + 0x80;
        } while (iVar2 < iVar1);
      }
    }
  }
  return;
}

