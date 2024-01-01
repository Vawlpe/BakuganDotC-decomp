#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f8b70(int param_1)

{
  ushort uVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined auStack_250 [256];
  undefined auStack_150 [256];
  char *local_50;
  uint local_4c;
  undefined local_48;
  char *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int local_34;
  
  local_4c = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + 6);
  iVar9 = 0;
  piVar10 = (int *)(*(int *)(param_1 + 0x18) + 8);
  uVar13 = (uint)*(ushort *)(param_1 + 0x84);
  local_44 = "StageMaxFrame";
  if (local_4c != 0) {
    iVar11 = *piVar10;
    while( true ) {
      if (iVar11 == 0x49464544) {
        *(short *)(param_1 + 0x84) = (short)uVar13 + 1;
        uVar13 = (uint)*(ushort *)(param_1 + 0x84);
      }
      iVar9 = iVar9 + 1;
      piVar10 = (int *)((int)piVar10 + piVar10[1]);
      if ((int)local_4c <= iVar9) break;
      iVar11 = *piVar10;
    }
  }
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar5 = FUN_089d7d74(uVar13 << 2,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x80) = uVar5;
  iVar9 = 0;
  piVar10 = (int *)(*(int *)(param_1 + 0x18) + 8);
  if (0 < (int)local_4c) {
    iVar12 = 0;
    iVar11 = *piVar10;
    do {
      if (iVar11 == 0x504c434d) {
        local_3c = 0;
        local_38 = piVar10;
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar6 = FUN_089d7d74(0x3c,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        piVar10 = local_38;
        iVar11 = local_3c;
        if (iVar6 != 0) {
          FUN_089f9018(iVar6,param_1 + 0x88);
          iVar11 = iVar6;
        }
        FUN_089f90e8(iVar11,param_1,piVar10);
        if (*(int *)(param_1 + 0x94) == 0) {
          *(int *)(param_1 + 0x94) = iVar11;
          *(undefined *)(iVar11 + 0x38) = 1;
        }
LAB_089f8d74:
        iVar11 = piVar10[1];
      }
      else {
        if (iVar11 == 0x4d544942) {
          *(short *)(param_1 + 0x76) = *(short *)(param_1 + 0x76) + 1;
          goto LAB_089f8d74;
        }
        if (iVar11 == 0x49464544) {
          *(int **)(*(int *)(param_1 + 0x80) + iVar12) = piVar10 + 2;
          iVar12 = iVar12 + 4;
          goto LAB_089f8d74;
        }
        if (iVar11 == 0x42414c46) {
          if (*(int *)(param_1 + 0x70) == 0) {
            *(int **)(param_1 + 0x70) = piVar10;
          }
          *(short *)(param_1 + 0x74) = *(short *)(param_1 + 0x74) + 1;
          goto LAB_089f8d74;
        }
        iVar11 = piVar10[1];
      }
      piVar10 = (int *)((int)piVar10 + iVar11);
      iVar9 = iVar9 + 1;
      if ((int)local_4c <= iVar9) break;
      iVar11 = *piVar10;
    } while( true );
  }
  pcVar2 = local_44;
  uVar1 = *(ushort *)(*(int *)(*(int *)(param_1 + 0x94) + 0x1c) + 0xc);
  iVar9 = FUN_089f87dc(param_1,local_44);
  if ((int)(uint)uVar1 < iVar9) {
    uVar3 = FUN_089f87dc(param_1,pcVar2);
    *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x94) + 0x1c) + 0xc) = uVar3;
  }
  uVar1 = *(ushort *)(param_1 + 0x76);
  if (uVar1 != 0) {
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar5 = FUN_089d7d74((uint)uVar1 << 2,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x78) = uVar5;
    uVar3 = *(undefined2 *)(param_1 + 0x76);
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar5 = FUN_089d7d74(uVar3,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    piVar10 = (int *)(*(int *)(param_1 + 0x18) + 8);
    strcpy(auStack_250,*(undefined4 *)(param_1 + 0x1c));
    puVar7 = (undefined *)strrchr(auStack_250,0x2e);
    if (puVar7 != (undefined *)0x0) {
      *puVar7 = 0;
    }
    local_48 = DAT_08ac6164;
    DAT_08ac6164 = 0;
    iVar11 = 0;
    iVar9 = 0;
    if (0 < (int)local_4c) {
      iVar12 = 0;
      local_50 = "fab_%s%02d";
      iVar6 = *piVar10;
      while( true ) {
        if (iVar6 == 0x4d544942) {
          FUN_089b4c84(auStack_150,local_50,auStack_250,iVar9);
          uVar4 = FUN_089f7850(auStack_150);
          *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar12) = uVar4;
          if (*(int *)(*(int *)(param_1 + 0x78) + iVar12) == 0) {
            local_40 = 0;
            local_34 = iVar12;
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            iVar8 = FUN_089d7d74(0x140,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            iVar12 = local_34;
            iVar6 = local_40;
            if (iVar8 != 0) {
              FUN_089f6cdc(iVar8,auStack_150,(int)piVar10 + 0x17U & 0xfffffff0,1);
              iVar6 = iVar8;
            }
            *(int *)(*(int *)(param_1 + 0x78) + iVar12) = iVar6;
            *(undefined *)(*(int *)(param_1 + 0x7c) + iVar9) = 1;
          }
          else {
            *(undefined *)(*(int *)(param_1 + 0x7c) + iVar9) = 0;
          }
          iVar9 = iVar9 + 1;
          iVar12 = iVar12 + 4;
          iVar6 = piVar10[1];
        }
        else {
          iVar6 = piVar10[1];
        }
        piVar10 = (int *)((int)piVar10 + iVar6);
        iVar11 = iVar11 + 1;
        if ((int)local_4c <= iVar11) break;
        iVar6 = *piVar10;
      }
    }
    DAT_08ac6164 = local_48;
  }
  return;
}

