#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881bd80(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined auStack_50 [4];
  uint local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  *(undefined *)(param_1 + 0xdd) = 1;
  if (*(char *)(param_1 + 0xde) != '\0') {
    if ((*(int *)(param_1 + 4) == 7) && (iVar1 = FUN_089cf8ec(0), iVar1 != 0)) {
      uVar2 = FUN_0881b64c(param_1);
      *(undefined *)(param_1 + 0xdd) = 0;
      if ((uVar2 & 0x8000000) == 0) {
        FUN_0881b7a0(param_1);
        cVar5 = *(char *)(param_1 + 0xb9);
      }
      else {
        iVar6 = *(int *)(param_1 + 0xe4);
        uVar7 = 0;
        if (DAT_08ac5c90 != 0) {
          uVar7 = *(undefined4 *)(DAT_08ac5c90 + 0x150);
        }
        memset_jak(auStack_50,0,0x28);
        local_4c = uVar2;
        uVar3 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar3,0x2000);
        if (iVar4 != 0) {
          local_4c = local_4c | 0x400000;
        }
        uVar3 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar3,0x1000);
        if (iVar4 != 0) {
          local_4c = local_4c | 0x200000;
        }
        uVar3 = _DONE_Get_DAT_08AAC9E0();
        iVar4 = FUN_0880d7e0(uVar3,0x3200);
        if (iVar4 == 0) {
          local_46 = *(undefined2 *)(iVar6 + 4);
          local_48 = *(undefined2 *)(iVar6 + 2);
          local_44 = *(undefined2 *)(iVar6 + 6);
          local_42 = *(undefined2 *)(iVar6 + 8);
          local_40 = *(undefined4 *)(iVar6 + 0x30);
          local_3c = *(undefined4 *)(iVar6 + 0x34);
        }
        else {
          local_46 = 0;
          local_48 = 0;
          local_44 = 0;
          local_42 = 0;
          local_40 = 0;
          local_3c = 0;
        }
        local_38 = uVar7;
        iVar6 = FUN_089d0a74(iVar1,auStack_50);
        if (iVar6 == 0) {
          cVar5 = *(char *)(param_1 + 0xb9);
        }
        else {
          _WIP_WeirdBuff_ReadCtrl(*(unknown_buffer **)(param_1 + 0xe4),false);
          cVar5 = *(char *)(param_1 + 0xb9);
        }
      }
      if ((cVar5 == '\0') && (iVar6 = FUN_089d0178(), iVar6 != 0)) {
        FUN_089d0d38(iVar1);
      }
      FUN_089d0d74(iVar1);
    }
    iVar1 = FUN_089bfa40(0x15e);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
    else {
      FUN_0881bbd8(param_1);
      iVar1 = *(int *)(param_1 + 4);
    }
    if ((iVar1 == 7) && (iVar1 = FUN_089f944c(), iVar1 != 0)) {
      uVar7 = FUN_089f9468();
      iVar1 = FUN_089f9cf0(uVar7);
      if (iVar1 != 0) {
        iVar1 = FUN_089fb608();
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0xec) + 1;
          *(int *)(param_1 + 0xec) = iVar1;
          if (599 < iVar1) {
            iVar1 = _DONE_NotZero_DAT_08AAC9E0();
            if (iVar1 != 0) {
              uVar7 = _DONE_Get_DAT_08AAC9E0();
              FUN_0880d0e8(uVar7,0x80);
            }
            FUN_0881bbd8(param_1);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0xec) = 0;
        }
      }
    }
  }
  return;
}

