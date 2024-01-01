#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a219fc(undefined *param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  undefined *puVar11;
  uint uVar12;
  
  cVar10 = '\0';
  pbVar5 = *(byte **)(param_1 + 0x1c);
  bVar1 = *pbVar5;
  *(byte **)(param_1 + 0x1c) = pbVar5 + 1;
  uVar9 = 0;
  if (-1 < (char)bVar1) {
    *(byte **)(param_1 + 0x1c) = pbVar5;
    bVar1 = param_1[7];
  }
  uVar12 = (uint)bVar1;
  uVar8 = uVar12 & 0xf0;
  if (uVar8 == 0xb0) {
    puVar11 = *(undefined **)(param_1 + 0x1c);
    uVar2 = *puVar11;
    *(undefined **)(param_1 + 0x1c) = puVar11 + 1;
    uVar3 = puVar11[1];
    *(undefined **)(param_1 + 0x1c) = puVar11 + 2;
    FUN_08a22090(uVar12,uVar2,uVar3,param_1);
    param_1[7] = bVar1;
    return 0;
  }
  if (uVar8 < 0xb1) {
    if (uVar8 == 0x90) {
      puVar11 = *(undefined **)(param_1 + 0x1c);
      uVar2 = *puVar11;
      *(undefined **)(param_1 + 0x1c) = puVar11 + 1;
      uVar3 = puVar11[1];
      *(undefined **)(param_1 + 0x1c) = puVar11 + 2;
      FUN_08a21e48(uVar12,uVar2,uVar3,param_1);
      param_1[7] = bVar1;
      return 0;
    }
    if (uVar8 < 0x91) {
      if (uVar8 == 0x80) {
        uVar2 = **(undefined **)(param_1 + 0x1c);
        *(undefined **)(param_1 + 0x1c) = *(undefined **)(param_1 + 0x1c) + 2;
        FUN_08a20168(uVar12 & 0xf,uVar2,*(undefined4 *)(param_1 + (uVar12 & 0xf) * 0x10 + 0x40));
        param_1[7] = bVar1;
        return 0;
      }
      goto LAB_08a21a74;
    }
    if (uVar8 != 0xa0) {
      param_1[7] = bVar1;
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x1c) + 2;
  }
  else {
    if (uVar8 != 0xd0) {
      if (uVar8 < 0xd1) {
        if (uVar8 != 0xc0) {
          param_1[7] = bVar1;
          return 0;
        }
        uVar2 = **(undefined **)(param_1 + 0x1c);
        *(undefined **)(param_1 + 0x1c) = *(undefined **)(param_1 + 0x1c) + 1;
        param_1[(uVar12 & 0xf) * 0x10 + 0x38] = uVar2;
        goto LAB_08a21a74;
      }
      if (uVar8 == 0xe0) {
        puVar11 = *(undefined **)(param_1 + 0x1c);
        uVar2 = *puVar11;
        *(undefined **)(param_1 + 0x1c) = puVar11 + 1;
        uVar3 = puVar11[1];
        *(undefined **)(param_1 + 0x1c) = puVar11 + 2;
        FUN_08a22518(uVar12,uVar2,uVar3,param_1);
        param_1[7] = bVar1;
        return 0;
      }
      if (uVar8 != 0xf0) {
        param_1[7] = bVar1;
        return 0;
      }
      if (uVar12 == 0xff) {
        pcVar7 = *(char **)(param_1 + 0x1c);
        cVar10 = *pcVar7;
        *(char **)(param_1 + 0x1c) = pcVar7 + 1;
        uVar9 = (uint)(byte)pcVar7[1];
        *(char **)(param_1 + 0x1c) = pcVar7 + 2;
        if ((cVar10 != '/') && (cVar10 == 'Q')) {
          *(uint *)(param_1 + 0x10) =
               (uint)(byte)pcVar7[2] << 0x10 | (uint)(byte)pcVar7[3] << 8 | (uint)(byte)pcVar7[4];
          *(char **)(param_1 + 0x1c) = pcVar7 + 5;
          goto LAB_08a21b8c;
        }
        iVar6 = *(int *)(param_1 + 0x1c) + uVar9;
      }
      else {
        bVar4 = **(byte **)(param_1 + 0x1c);
        uVar8 = (uint)bVar4;
        *(byte **)(param_1 + 0x1c) = *(byte **)(param_1 + 0x1c) + 1;
        if ((char)bVar4 < '\0') {
          uVar8 = uVar8 & 0x7f;
          do {
            bVar4 = **(byte **)(param_1 + 0x1c);
            *(byte **)(param_1 + 0x1c) = *(byte **)(param_1 + 0x1c) + 1;
            uVar8 = uVar8 * 0x80 + (bVar4 & 0x7f);
          } while ((char)bVar4 < '\0');
          iVar6 = *(int *)(param_1 + 0x1c);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x1c);
        }
        iVar6 = iVar6 + uVar8;
      }
      *(int *)(param_1 + 0x1c) = iVar6;
LAB_08a21b8c:
      if (uVar12 != 0xff || cVar10 != '/') {
        param_1[7] = bVar1;
        return 0;
      }
      if (uVar9 != 0) {
        param_1[7] = bVar1;
        return 0;
      }
      if (*(int *)(param_1 + 0x2c) == -1) {
        iVar6 = *(int *)(param_1 + 0xc);
      }
      else {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        iVar6 = *(int *)(param_1 + 0xc);
      }
      param_1[7] = 0xff;
      *(int *)(param_1 + 0x1c) = iVar6 + 0x16;
      param_1[9] = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        return 0;
      }
      *param_1 = 0;
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x1c) + 1;
  }
  *(int *)(param_1 + 0x1c) = iVar6;
LAB_08a21a74:
  param_1[7] = bVar1;
  return 0;
}

