#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881cf90(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined uStack_a0;
  undefined auStack_9f [39];
  undefined auStack_78 [40];
  undefined auStack_50 [40];
  undefined local_28 [4];
  undefined local_24;
  char local_23 [7];
  
  puVar8 = &uStack_a0;
  iVar4 = FUN_0880d354();
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar4;
    if (0x96 < iVar4) {
      FUN_08943ad4(1,0);
    }
    if (600 < *(int *)(param_1 + 0x14)) {
      bVar2 = true;
      iVar4 = FUN_089d3ab4();
      if (iVar4 != 0) {
        uVar5 = FUN_089d3adc();
        iVar4 = FUN_089d3f60(uVar5);
        if (iVar4 == 0) {
          bVar2 = false;
        }
      }
      if (bVar2) {
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880d0e8(uVar5,0x80);
        FUN_089cff94();
        iVar4 = FUN_0881b22c();
        if (iVar4 != 0) {
          uVar5 = _DONE_GetPtr_DAT_08AB0300();
          FUN_0881b620(uVar5,0);
        }
        *(undefined4 *)(param_1 + 0x10) = 999;
      }
    }
  }
  iVar4 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 999;
  }
  iVar4 = FUN_0881b22c();
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 999;
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 5) {
    if (uVar7 == 0) {
      FUN_089cff94();
      uVar5 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881b620(uVar5,0x8000000);
      FUN_089d013c();
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    else if (uVar7 == 1) {
      iVar4 = FUN_089d0158();
      if (iVar4 != 0) {
        uVar5 = _DONE_GetPtr_DAT_08AB0300();
        iVar4 = FUN_0881b654(uVar5);
        if (iVar4 != 0) {
          uVar5 = _DONE_GetPtr_DAT_08AB0300();
          FUN_0881b620(uVar5,0x9000000);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          iVar4 = FUN_089cf8ec(0);
          if ((iVar4 != 0) && (iVar6 = FUN_089d0a6c(iVar4), 5 < iVar6)) {
            FUN_089d0bcc(iVar4,0,&uStack_a0);
          }
        }
      }
    }
    else if (uVar7 == 2) {
      iVar4 = FUN_089d0158();
      if (iVar4 != 0) {
        uVar5 = _DONE_GetPtr_DAT_08AB0300();
        iVar4 = FUN_0881b654(uVar5);
        if (iVar4 != 0) {
          iVar4 = FUN_089cf8ec(0);
          if (iVar4 != 0) {
            FUN_089d0bcc(iVar4,0,auStack_78);
          }
          iVar4 = FUN_089d003c();
          if (iVar4 == 0) {
            iVar4 = *(int *)(param_1 + 0x10);
          }
          else {
            FUN_089cff94();
            uVar5 = _DONE_GetPtr_DAT_08AB0300();
            FUN_0881b620(uVar5,0x4000000);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            iVar4 = *(int *)(param_1 + 0x10);
          }
          if ((iVar4 != 2) && (iVar4 = FUN_089cf8ec(0), iVar4 != 0)) {
            iVar6 = FUN_089d0a6c(iVar4);
            if (5 < iVar6) {
              FUN_089d0bcc(iVar4,0,auStack_50);
            }
          }
        }
      }
    }
    else if (uVar7 == 3) {
      memset_jak(local_28,0,5);
      uVar5 = _DONE_GetPtr_DAT_08AB0300();
      iVar4 = FUN_0881b66c(uVar5);
      if (-1 < iVar4) {
        if (iVar4 == 0) {
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          local_28[0] = FUN_0880d0ac(uVar5,3);
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          local_28[1] = FUN_0880d0ac(uVar5,4);
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          local_28[2] = FUN_0880d0ac(uVar5,5);
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          local_28[3] = FUN_0880d0ac(uVar5,6);
        }
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        uVar3 = FUN_0880d0ac(uVar5,iVar4 + 3);
        local_28[iVar4] = uVar3;
        local_24 = (undefined)*(undefined4 *)(DAT_08ac58c4 + 4);
        uVar5 = _DONE_GetPtr_DAT_08AB0300();
        iVar4 = FUN_0881b674(uVar5,local_28);
        if (iVar4 != 0) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        }
      }
    }
    else {
      if (uVar7 != 4) goto LAB_0881d0c0;
      uVar5 = _DONE_GetPtr_DAT_08AB0300();
      iVar6 = FUN_0881b74c(uVar5,local_23);
      iVar4 = 0;
      if (iVar6 != 0) {
        do {
          cVar1 = puVar8[0x7d];
          uVar5 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880cd9c(uVar5,iVar4 + 3,(int)cVar1);
          iVar6 = iVar4 + 1;
          puVar8 = auStack_9f + iVar4;
          iVar4 = iVar6;
        } while (iVar6 < 4);
        *(uint *)(DAT_08ac58c4 + 4) = (uint)(byte)local_23[4];
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
    return;
  }
  uVar7 = 0;
LAB_0881d0c0:
  FUN_08943ad4(uVar7,0);
  FUN_089bf7a8(param_1,1);
  return;
}

