#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089424b4(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = *(int *)(param_1 + 0x2c) - 1;
  if (uVar7 < 6) {
    if (*(int *)(param_1 + 0x2c) == 1) {
      iVar5 = FUN_08941a88(param_1,0);
      iVar3 = FUN_08941aa0(param_1,0);
      if (iVar3 == 0 || iVar5 == 0) {
        return;
      }
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      iVar5 = FUN_0881bb4c(uVar6);
      if (iVar5 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x2c) = 2;
      FUN_08941f80(param_1,1,0,0,1);
      return;
    }
    if (uVar7 == 1) {
      iVar5 = FUN_08943aec();
      if (iVar5 == 0) {
        bVar1 = false;
        iVar5 = FUN_0881b22c(param_1);
        if (iVar5 == 0) {
          uVar6 = DONE_Get_DAT_08AAC9E0();
          FUN_0880d0e8(uVar6,0x80);
          bVar1 = true;
        }
        else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
          iVar5 = DONE_NotZero_DAT_08AAC9E0();
          if (iVar5 != 0) {
            uVar6 = DONE_Get_DAT_08AAC9E0();
            iVar5 = FUN_0880d7e0(uVar6,0x80);
            if (iVar5 != 0) {
              bVar1 = true;
            }
          }
        }
        else {
          iVar5 = DONE_NotZero_DAT_08AC5874();
          if (iVar5 != 0) {
            uVar6 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar6,2,0,0);
          }
          iVar5 = FUN_08816a90();
          if (iVar5 == 0) {
            FUN_08816868();
          }
          iVar5 = FUN_08816aac();
          *(undefined4 *)(iVar5 + 0x40) = 0;
          uVar6 = FUN_08816aac();
          FUN_08816c28(uVar6,1,0x12);
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
        if (bVar1) {
          *(undefined4 *)(param_1 + 0x2c) = 5;
          FUN_08941a90(param_1,1);
          FUN_08941c2c(param_1,1);
          iVar5 = FUN_0881b22c();
          if (iVar5 != 0) {
            uVar6 = DONE_GetPtr_DAT_08AB0300(param_1);
            FUN_0881bbd8(uVar6);
          }
        }
        else if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
          bVar1 = false;
          iVar5 = FUN_0881b22c(param_1);
          if (iVar5 != 0) {
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            iVar5 = FUN_0881b278(uVar6);
            if (1 < iVar5) {
              bVar1 = true;
            }
          }
          if (bVar1) {
            iVar5 = DONE_NotZero_DAT_08AC5874();
            if (iVar5 != 0) {
              uVar6 = DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar6,0,0,0);
            }
            *(undefined4 *)(param_1 + 0x2c) = 4;
            FUN_08941a90(param_1,1);
            FUN_08941c2c(param_1,1);
            uVar6 = DONE_GetPtr_DAT_08AB0300();
            FUN_0881b26c(uVar6,3);
          }
          else {
            iVar5 = DONE_NotZero_DAT_08AC5874();
            if (iVar5 != 0) {
              uVar6 = DONE_Get_DAT_08AC5874(param_1);
              FUN_089c6350(uVar6,3,0,0);
            }
          }
        }
      }
      FUN_08941f80(param_1,1,0,0,0);
      return;
    }
    if (uVar7 == 2) {
      bVar1 = true;
      bVar2 = true;
      iVar5 = FUN_08816a90();
      if (iVar5 != 0) {
        bVar2 = false;
        uVar6 = FUN_08816aac();
        iVar5 = FUN_08816e58(uVar6);
        if (iVar5 == 0) {
          bVar1 = false;
          iVar5 = DONE_NotZero_DAT_08AAC9E0();
          if (iVar5 != 0) {
            uVar6 = DONE_Get_DAT_08AAC9E0();
            iVar5 = FUN_0880d7e0(uVar6,0x80);
            if (iVar5 != 0) {
              uVar6 = FUN_08816aac();
              FUN_08816e48(uVar6);
            }
          }
        }
        else {
          uVar6 = FUN_08816aac();
          iVar5 = FUN_08816eb0(uVar6);
          if (-2 < iVar5) {
            if (iVar5 < 1) {
              if (-1 < iVar5) {
                bVar2 = true;
                goto LAB_089428b0;
              }
            }
            else if (1 < iVar5) goto LAB_089428b0;
            bVar2 = false;
          }
        }
      }
LAB_089428b0:
      if ((bVar1) && (*(undefined4 *)(param_1 + 0x2c) = 2, bVar2)) {
        *(undefined4 *)(param_1 + 0x2c) = 6;
        iVar5 = FUN_089cf8ec(0);
        if (iVar5 != 0) {
          FUN_089d06dc(iVar5);
        }
      }
      return;
    }
    if (uVar7 == 3) {
      iVar5 = FUN_08941a90(param_1,0);
      iVar3 = FUN_08941c2c(param_1,0);
      if (iVar3 == 0 || iVar5 == 0) {
        return;
      }
      bVar1 = false;
      iVar5 = FUN_0881b22c();
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 5;
        uVar6 = DONE_Get_DAT_08AAC9E0();
        FUN_0880d0e8(uVar6,0x80);
      }
      else {
        uVar6 = DONE_GetPtr_DAT_08AB0300();
        iVar5 = FUN_0881b264(uVar6);
        if (iVar5 == 7) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      return;
    }
    if (uVar7 == 4) {
      iVar5 = FUN_08941a90(param_1,0);
      iVar3 = FUN_08941c2c(param_1,0);
      iVar4 = FUN_0881b22c();
      if (iVar4 != 0 || (iVar3 == 0 || iVar5 == 0)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
      *(undefined *)(param_1 + 0x88) = 1;
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      return;
    }
    if (uVar7 == 5) {
      bVar1 = true;
      iVar5 = FUN_089cf8ec(0);
      if (iVar5 != 0) {
        bVar1 = false;
        iVar5 = FUN_089d0718();
        if (iVar5 != 0) {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x2c) = 5;
      FUN_08941a90(param_1,1);
      FUN_08941c2c(param_1,1);
      iVar5 = FUN_0881b22c();
      if (iVar5 == 0) {
        return;
      }
      uVar6 = DONE_GetPtr_DAT_08AB0300();
      FUN_0881bbd8(uVar6);
      return;
    }
  }
  FUN_08941a80(param_1,0x13);
  FUN_08941a88(param_1,1);
  FUN_08941a98(param_1,1);
  FUN_08941aa0(param_1,1);
  FUN_0881b018();
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return;
}

