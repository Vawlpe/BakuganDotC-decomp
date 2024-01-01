#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881c038(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined auStack_90 [2];
  undefined auStack_8e [6];
  undefined local_88;
  undefined local_87 [35];
  undefined auStack_64 [8];
  undefined auStack_5c [64];
  
  puVar5 = auStack_90;
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 < 2) {
    if (-1 < iVar3) {
      if (iVar3 < 1) {
        FUN_089d37d0();
        if (*(char *)(param_1 + 0xc) == '\0') {
          FUN_08943ad4(1,2);
        }
        else {
          FUN_08943ad4(1,1);
        }
        iVar3 = FUN_089d3ab4();
        if (iVar3 != 0) {
          uVar2 = FUN_089d3adc();
          FUN_089d41c0(uVar2,*(undefined *)(param_1 + 0xc));
          *(undefined4 *)(param_1 + 8) = 1;
        }
      }
      else {
        iVar3 = FUN_089d3ab4();
        if (iVar3 != 0) {
          uVar2 = FUN_089d3adc();
          iVar3 = FUN_089d3e58(uVar2,1,0);
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 8) = 2;
          }
        }
      }
    }
  }
  else if (iVar3 < 3) {
    iVar3 = FUN_089d3ab4();
    if (iVar3 != 0) {
      uVar2 = FUN_089d3adc();
      iVar3 = FUN_089d3f04(uVar2);
      if (iVar3 < 1) {
        if (iVar3 < 0) {
          uVar2 = FUN_089d21a4();
          iVar6 = FUN_089d25ac(uVar2);
          if (iVar6 == 0) {
            uVar2 = FUN_089d21a4();
            iVar6 = FUN_089d2698(uVar2);
            if (iVar6 == 0) {
              *(undefined4 *)(param_1 + 4) = 8;
              *(undefined4 *)(param_1 + 8) = 0;
              iVar6 = _DONE_NotZero_DAT_08AAC9E0();
              if (iVar6 != 0) {
                uVar2 = _DONE_Get_DAT_08AAC9E0();
                FUN_0880d0e8(uVar2,0x80);
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 8) = 3;
      }
      if (iVar3 != 0) {
        FUN_08943ad4(0,0);
      }
    }
  }
  else if (iVar3 < 4) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar3 = FUN_089d3ab4();
    if (iVar3 != 0) {
      iVar3 = FUN_089cf6b4(auStack_90,0);
      if (iVar3 == 0) goto LAB_0881c2a4;
      if (*(char *)(param_1 + 0xc) != '\0') {
        memcpy_jak(param_1 + 0x31,auStack_64,6);
        puVar7 = (undefined *)(param_1 + 0x18);
        iVar6 = 0xc;
        puVar4 = puVar7;
        iVar3 = 0;
        do {
          uVar1 = puVar5[9];
          *puVar4 = local_88;
          puVar4[1] = uVar1;
          puVar5 = auStack_8e + iVar3;
          iVar6 = iVar6 + -1;
          local_88 = local_87[iVar3 + 1];
          puVar4 = puVar7 + iVar3 + 2;
          iVar3 = iVar3 + 2;
        } while (iVar6 != 0);
        *puVar4 = local_88;
        memset_jak(auStack_5c,0,0x40);
        strncpy(auStack_5c,puVar7,0x19);
        *(undefined4 *)(param_1 + 0x14) = 1;
      }
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      *(undefined4 *)(param_1 + 4) = 4;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 2;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
  }
LAB_0881c2a4:
  iVar3 = FUN_089d3ab4();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 4) = 8;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar3 = _DONE_NotZero_DAT_08AAC9E0();
    if (iVar3 != 0) {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar2,0x80);
    }
  }
  return;
}

