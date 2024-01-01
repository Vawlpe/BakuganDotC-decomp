#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0897f8bc)

void FUN_0897f574(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  param_2 = param_2 & 0xff;
  bVar3 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
  if (param_2 == 0) {
    uVar11 = 0;
    iVar9 = param_1;
    iVar12 = param_1;
    do {
      uVar10 = uVar11 & 0xff;
      FUN_0897b570(param_1,uVar10);
      if (bVar3 == 0xff) {
        bVar1 = *(byte *)(param_1 + 0xee5);
LAB_0897f754:
        iVar7 = (int)(char)bVar1;
        iVar5 = (int)(char)*(byte *)(param_1 + 0xee1);
        uVar8 = (uint)bVar1;
        uVar6 = (uint)*(byte *)(param_1 + 0xee1);
        iVar4 = FUN_0897a6b4(param_1,uVar8,uVar10,uVar6);
        if (iVar4 == 1) {
          if (iVar7 == 2) {
            if (*(char *)(uVar11 + (iVar5 / 3) * 6 + param_1 + 0x1250) != '\0') {
              FUN_0897b2f4(param_1,uVar8,*(undefined *)(uVar11 + (iVar5 / 3) * 6 + param_1 + 0x1250)
                           ,uVar6,uVar10);
              *(undefined4 *)(*(int *)(iVar12 + 0x12a4) + 0x6c) = 0;
              *(undefined4 *)(iVar9 + 0x1154) = 0;
              *(undefined4 *)(iVar9 + 0x1158) = 0;
              *(undefined *)(iVar9 + 0x1140) = 0;
              *(undefined4 *)(iVar9 + 0x115c) = 0x3f19999a;
            }
          }
          else {
            cVar2 = *(char *)(uVar11 + iVar5 * 6 + param_1 + 0x1250);
            if (cVar2 != '\0') {
              FUN_0897b2f4(param_1,uVar8,cVar2,uVar6,uVar10);
              *(undefined4 *)(*(int *)(iVar12 + 0x12a4) + 0x6c) = 0;
              *(undefined4 *)(iVar9 + 0x1154) = 0;
              *(undefined4 *)(iVar9 + 0x1158) = 0;
              *(undefined *)(iVar9 + 0x1140) = 0;
              *(undefined4 *)(iVar9 + 0x115c) = 0x3f19999a;
            }
          }
        }
      }
      else {
        if (bVar3 == 0) {
          bVar1 = *(byte *)(param_1 + 0xee5);
          goto LAB_0897f754;
        }
        if (uVar11 == 6) {
          if (bVar3 < 2) {
            if (bVar3 != 0) {
              cVar2 = *(char *)(param_1 + 0xee1);
              if (*(char *)(param_1 + (int)cVar2 / 3 + 0x1284) != '\0') {
                FUN_0897b2f4(param_1,*(undefined *)(param_1 + 0xee5),
                             *(undefined *)(param_1 + (int)cVar2 / 3 + 0x1284),cVar2,uVar10);
                *(undefined4 *)(*(int *)(iVar12 + 0x12a4) + 0x6c) = 0;
                *(undefined4 *)(iVar9 + 0x1154) = 0;
                *(undefined4 *)(iVar9 + 0x1158) = 0;
                *(undefined *)(iVar9 + 0x1140) = 0;
                *(undefined4 *)(iVar9 + 0x115c) = 0x3f19999a;
              }
            }
          }
          else if (bVar3 < 3) {
            cVar2 = *(char *)(param_1 + 0xee1);
            if (*(char *)(param_1 + (int)cVar2 / 3 + 0x1280) != '\0') {
              FUN_0897b2f4(param_1,*(undefined *)(param_1 + 0xee5),
                           *(undefined *)(param_1 + (int)cVar2 / 3 + 0x1280),cVar2,uVar10);
              *(undefined4 *)(*(int *)(iVar12 + 0x12a4) + 0x6c) = 0;
              cVar2 = *(char *)(param_1 + 0xee1);
              *(undefined4 *)(iVar9 + 0x1154) = 0;
              *(undefined4 *)(iVar9 + 0x1158) = 0;
              if ((int)cVar2 / 3 == 0) {
                *(undefined *)(iVar9 + 0x1140) = 1;
                *(undefined4 *)(iVar9 + 0x115c) = 0x3e8a3d71;
              }
              else {
                *(undefined *)(iVar9 + 0x1140) = 2;
                *(undefined4 *)(iVar9 + 0x115c) = 0x3e99999a;
              }
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 4;
      iVar9 = iVar9 + 0x28;
    } while ((int)uVar11 < 7);
  }
  else {
    iVar12 = 0;
    iVar9 = param_1;
    do {
      if (*(int *)(param_1 + 0x12a4) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x12a4) + 0x6c) = 0x3f800000;
        *(undefined4 *)(iVar9 + 0x1154) = 0;
        bVar3 = *(byte *)(iVar9 + 0x1140);
        *(undefined4 *)(iVar9 + 0x1158) = 0x3f800000;
        if (bVar3 == 0) {
          *(undefined4 *)(iVar9 + 0x115c) = 0x3ecccccd;
        }
        else if (bVar3 < 2) {
          *(undefined4 *)(iVar9 + 0x115c) = 0x3e3851ec;
        }
        else if (bVar3 < 3) {
          *(undefined4 *)(iVar9 + 0x115c) = 0x3e4ccccd;
        }
      }
      iVar12 = iVar12 + 1;
      param_1 = param_1 + 4;
      iVar9 = iVar9 + 0x28;
    } while (iVar12 < 7);
  }
  return;
}

