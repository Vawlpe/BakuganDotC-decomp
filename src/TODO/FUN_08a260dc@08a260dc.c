#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a260dc(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  puVar10 = (ushort *)(*(int *)(param_2 + 0xc) + param_2);
  FUN_08a12094(param_3,puVar10[2],puVar10[3],puVar10[4],puVar10[5],puVar10[7],puVar10[8],
               puVar10[0x15],puVar10[0x17],puVar10[0x14],puVar10[0x16],1,param_4,
               *(int *)(puVar10 + 0xc) - (uint)*puVar10,0,*param_1);
  if (puVar10[0x15] != 0) {
    iVar12 = 0;
    iVar13 = -1;
    do {
      uVar3 = FUN_08a25f1c(param_3,iVar12);
      uVar3 = FUN_08a25ed8(param_3,uVar3);
      uVar4 = FUN_08a25f6c(param_3,iVar12);
      uVar4 = FUN_08a25eb4(param_3,uVar4);
      uVar7 = (uint)puVar10[4];
      if (((iVar12 < 1) || (puVar10[0x14] != 1)) || (iVar11 = 0, iVar13 < 0)) {
        uVar2 = puVar10[7];
      }
      else {
        do {
          iVar11 = iVar11 + 1;
          uVar7 = (int)(uVar7 + 1) / 2;
        } while (iVar12 != iVar11);
        uVar2 = puVar10[7];
      }
      uVar8 = (uint)puVar10[5];
      uVar6 = (uint)uVar2 * 8 - 1;
      uVar7 = uVar6 + uVar7 * puVar10[6] & ~uVar6;
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 7;
      }
      if (((iVar12 < 1) || (puVar10[0x14] != 1)) || (iVar11 = 0, iVar13 < 0)) {
        uVar2 = puVar10[8];
      }
      else {
        do {
          iVar11 = iVar11 + 1;
          uVar8 = (int)(uVar8 + 1) / 2;
        } while (iVar12 != iVar11);
        uVar2 = puVar10[8];
      }
      if (puVar10[0x17] == 0) {
        uVar2 = puVar10[0x15];
      }
      else {
        iVar11 = 0;
        do {
          uVar5 = FUN_08a25e44(param_3,iVar12,iVar11);
          iVar9 = 0;
          uVar6 = (uint)puVar10[0x17];
          if (iVar12 < 0) {
LAB_08a26318:
            uVar1 = *(undefined *)(param_3 + 0x16);
          }
          else {
            if (iVar12 < (int)(uint)puVar10[0x15]) {
              iVar9 = iVar11 % (int)uVar6;
              if (uVar6 == 0) {
                trap(7);
              }
              if (iVar9 < 0) {
                iVar9 = iVar9 + uVar6;
              }
              iVar9 = *(int *)((int)puVar10 +
                              (iVar12 + iVar9 * (uint)puVar10[0x15]) * 4 + *(int *)(puVar10 + 0xc));
              goto LAB_08a26318;
            }
            uVar1 = *(undefined *)(param_3 + 0x16);
          }
          FUN_08a12310(uVar5,uVar3,uVar4,uVar1,iVar9 + (int)puVar10,(int)uVar7 >> 3,
                       uVar8 + (uVar2 - 1) & ~(uVar2 - 1),puVar10[3]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)puVar10[0x17]);
        uVar2 = puVar10[0x15];
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar12 < (int)(uint)uVar2);
  }
  iVar12 = (uint)*puVar10 + (int)puVar10;
  if (*(uint *)(puVar10 + 0xc) <= (uint)*puVar10) {
    iVar12 = 0;
  }
  memcpy_jak(*(undefined4 *)(param_3 + 0x2c),iVar12,*(undefined2 *)(param_3 + 0x2a));
  return;
}

