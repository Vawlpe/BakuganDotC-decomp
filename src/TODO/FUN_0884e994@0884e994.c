#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884e994(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_089bf6e8(0x19a,100);
  FUN_0889d9c8();
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
      uVar4 = 1;
      iVar2 = FUN_089c9b48(3,DAT_08ac58c8);
      if (iVar2 == 1) {
        uVar4 = 2;
      }
      uVar3 = _DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d0ac(uVar3,0x2e);
      if (iVar2 != 0) {
        uVar3 = _DONE_Get_DAT_08AAC9E0();
        iVar2 = FUN_0880d0ac(uVar3,0x2b);
        if (iVar2 == 1) {
          uVar4 = 3;
        }
        else {
          uVar3 = _DONE_Get_DAT_08AAC9E0();
          iVar2 = FUN_0880d0ac(uVar3,0x2b);
          if (iVar2 == 2) {
            uVar4 = 10;
          }
        }
        iVar2 = FUN_089c9b48(3,DAT_08ac58c8);
        if (iVar2 == 1) {
          uVar4 = 2;
        }
      }
    }
    FUN_089c879c(0x3f000000,1);
    FUN_089108d8(iVar1,uVar4);
  }
  return;
}

