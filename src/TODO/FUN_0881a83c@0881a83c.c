#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0881a83c(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined auStack_30 [16];
  
  iVar3 = DAT_08b00260;
  DAT_08b002a0 = 0x7f800000;
  DAT_08b002a4 = 0x7f800000;
  iVar4 = 0;
  FUN_089e5478(param_3);
  if (iVar3 != 0) {
    uVar2 = *(uint *)(iVar3 + 0x130);
    while( true ) {
      if ((uVar2 & 6) == 0) {
        if ((1 << (*(uint *)(iVar3 + 0x134) & 0x1f) & param_1) == 0) {
          iVar3 = *(int *)(iVar3 + 4);
        }
        else {
          iVar1 = FUN_089e565c(param_2,iVar3 + 0x30,auStack_30,param_1);
          if (iVar1 != 0) {
            iVar4 = iVar3;
          }
          iVar3 = *(int *)(iVar3 + 4);
        }
      }
      else {
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      uVar2 = *(uint *)(iVar3 + 0x130);
    }
  }
  return iVar4;
}

