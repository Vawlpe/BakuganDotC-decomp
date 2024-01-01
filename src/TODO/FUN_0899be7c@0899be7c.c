#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899be7c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x10d1);
  if (bVar1 < 5) {
    if (bVar1 == 1) {
      DAT_08ac0e70 = 1;
      iVar4 = FUN_089bf6e8(0x1fe,100);
      iVar2 = FUN_0880dc00("DWMesHelp");
      FUN_088cc354(iVar2);
      iVar3 = FUN_089a5650(3,0);
      FUN_0890e844(*(undefined4 *)(iVar2 + iVar3 * 4));
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      *(char *)(param_1 + 0x10d1) = *(char *)(param_1 + 0x10d1) + '\x01';
    }
    else if (bVar1 == 2) {
      iVar4 = FUN_089bf93c(0x1fe,1);
      if (iVar4 == 0) {
        iVar4 = FUN_0890e868();
        if (iVar4 == 1) {
          *(undefined *)(param_1 + 0x10d0) = 0;
        }
        else {
          *(undefined *)(param_1 + 0x10d0) = 1;
        }
        *(undefined *)(param_1 + 0x10d1) = 3;
      }
      else {
        iVar4 = FUN_0880d354();
        if ((iVar4 != 0) && (iVar4 = _DONE_NotZero_DAT_08AAC9E0(), iVar4 != 0)) {
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          iVar4 = FUN_0880d7e0(uVar5,0x80);
          if (iVar4 != 0) {
            FUN_089bf850(0x1fe);
            *(undefined *)(param_1 + 0x10d0) = 1;
            *(undefined *)(param_1 + 0x10d1) = 3;
            iVar4 = FUN_089edb80();
            *(undefined4 *)(iVar4 + 0x40) = 0;
            *(undefined4 *)(iVar4 + 0x44) = 0;
            *(undefined4 *)(iVar4 + 0x48) = 0;
            *(undefined4 *)(iVar4 + 0x4c) = 0;
            uVar5 = FUN_089edb80();
            FUN_089ede1c(uVar5,3);
            uVar5 = FUN_089edb80();
            FUN_089edf24(uVar5,3);
          }
        }
      }
      DAT_08ac0e70 = 1;
    }
    else if (bVar1 == 3) {
      *(undefined *)(param_1 + 0x10d1) = 4;
    }
    else if (bVar1 == 4) {
      *(undefined *)(param_1 + 0x10d1) = 5;
    }
    else {
      *(byte *)(param_1 + 0x10d1) = bVar1 + 1;
    }
    return 0;
  }
  *(undefined *)(param_1 + 0x10c0) = 0;
  return 1;
}

