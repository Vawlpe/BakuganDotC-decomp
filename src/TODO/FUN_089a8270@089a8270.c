#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a8270(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FUN_089a7358();
  FUN_089a8140(param_1);
  uVar4 = *(uint *)(param_1 + 0x2c);
  if (uVar4 < 5) {
    if (uVar4 == 1) {
      iVar2 = FUN_0890a5a8(param_1);
      if (iVar2 < 1) {
        if (-1 < iVar2) {
          DAT_08ac0e70 = 1;
          FUN_089bf6e8(0x15e,100);
          FUN_089a7da4(param_1,1);
          *(undefined4 *)(param_1 + 0x28) = 3;
          *(undefined4 *)(param_1 + 0x2c) = 2;
        }
      }
      else if (iVar2 < 3) {
        *(undefined4 *)(param_1 + 0x2c) = 2;
        FUN_089bf6e8(0x7d1,100);
        *(undefined4 *)(param_1 + 0xe40) = 0;
      }
    }
    else if (uVar4 == 2) {
      iVar2 = FUN_089bf93c(0x7d1,1);
      if (iVar2 == 0) {
        bVar1 = false;
        iVar2 = DONE_NotZero_DAT_08AAC9E0();
        if (iVar2 != 0) {
          uVar3 = DONE_Get_DAT_08AAC9E0();
          iVar2 = FUN_0880d7e0(uVar3,0x80);
          if (iVar2 != 0) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          *(undefined4 *)(param_1 + 0x2c) = 3;
          iVar2 = FUN_08816a90();
          if (iVar2 == 0) {
            FUN_08816868();
          }
          iVar2 = FUN_08816aac();
          *(undefined4 *)(iVar2 + 0x40) = 1;
          uVar3 = FUN_08816aac();
          FUN_08816c28(uVar3,0,0xe);
        }
        else {
          FUN_089bf6e8(0x154,100);
          *(undefined4 *)(param_1 + 0x28) = 4;
          *(undefined4 *)(param_1 + 0x2c) = 2;
          FUN_089a818c(param_1);
          FUN_089a8204(param_1);
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0xe40) + 1;
        *(int *)(param_1 + 0xe40) = iVar2;
        if (iVar2 < 900) {
          if (0x95 < iVar2) {
            FUN_08943ad4(1,0);
          }
        }
        else {
          FUN_08943ad4(0,0);
          bVar1 = true;
          iVar2 = FUN_089d3ab4();
          if (iVar2 != 0) {
            uVar3 = FUN_089d3adc();
            iVar2 = FUN_089d3f60(uVar3);
            if (iVar2 == 0) {
              bVar1 = false;
            }
          }
          if (bVar1) {
            uVar3 = DONE_Get_DAT_08AAC9E0();
            FUN_0880d0e8(uVar3,0x80);
          }
        }
      }
    }
    else if (uVar4 == 3) {
      bVar1 = true;
      iVar2 = FUN_08816a90();
      if (iVar2 != 0) {
        bVar1 = false;
        uVar3 = FUN_08816aac();
        iVar2 = FUN_08816e58(uVar3);
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        DAT_08ac0e70 = 1;
        FUN_089bf6e8(0x15e,100);
        FUN_089a7da4(param_1,1);
        *(undefined4 *)(param_1 + 0x28) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 2;
      }
    }
    else if (uVar4 == 4) {
      iVar2 = FUN_089a7728(param_1,0);
      if (iVar2 == 1) {
        FUN_089a7560(param_1,1);
        FUN_089a75c0(param_1,1,*(undefined *)(param_1 + 0x74));
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    else {
      iVar2 = FUN_089bf93c(1999,1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
    }
  }
  else {
    FUN_089a7da4(param_1,1);
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined4 *)(param_1 + 0x2c) = 6;
  }
  return;
}

