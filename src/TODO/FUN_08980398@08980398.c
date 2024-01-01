#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08980398(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  byte abStack_50 [36];
  byte abStack_2c [16];
  
  uVar6 = 0;
  memcpy_jak(abStack_50,&DAT_08ac3998,0x21);
  memcpy_jak(abStack_2c,&DAT_08ac39b9,0xd);
  cVar1 = *(char *)(param_1 + 0xee5);
  if (cVar1 < '\x02') {
    if (-1 < cVar1) {
      uVar6 = (uint)abStack_50
                    [*(byte *)((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 +
                               param_1 + 0x1250)];
    }
  }
  else if (cVar1 < '\x03') {
    bVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    if (bVar2 == 0xff) {
      cVar1 = *(char *)(param_1 + 0xee1);
    }
    else {
      if (bVar2 != 0) {
        if (bVar2 < 2) {
          if (bVar2 != 0) {
            uVar6 = (uint)abStack_50
                          [*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1284)];
          }
        }
        else if (bVar2 < 3) {
          uVar6 = (uint)abStack_50
                        [*(byte *)(param_1 + (int)*(char *)(param_1 + 0xee1) / 3 + 0x1280)];
        }
        goto LAB_08980500;
      }
      cVar1 = *(char *)(param_1 + 0xee1);
    }
    uVar6 = (uint)abStack_2c
                  [*(byte *)((int)*(char *)(param_1 + 0xee0) + ((int)cVar1 / 3) * 6 + param_1 +
                            0x1250)];
  }
LAB_08980500:
  iVar3 = FUN_0880dc00("DWCollectionHelp");
  FUN_088cc354(iVar3);
  iVar7 = param_1 + 0xf34;
  strcpy(iVar7,*(undefined4 *)(iVar3 + uVar6 * 4));
  iVar3 = *(int *)(param_1 + 0xf10);
  FUN_089f51b8(iVar3);
  *(undefined4 *)(iVar3 + 0x84) = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0xf10) + 0x74);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
  (**(code **)(iVar4 + 0x14))
            (*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),0,
             *(int *)(param_1 + 0xf10) + (int)*(short *)(iVar4 + 0x10),iVar7,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0xf10),iVar7,param_1 + 0xf24,param_1 + 0xf28,
               param_1 + 0xf2c);
  *(undefined4 *)(param_1 + 0xf30) = *(undefined4 *)(*(int *)(param_1 + 0xf10) + 0x84);
  iVar4 = *(int *)(param_1 + 0xf30);
  iVar7 = 0;
  fVar8 = (float)*(int *)(*(int *)(param_1 + 0xf10) + 0x88);
  iVar3 = 0;
  *(float *)(param_1 + 0xf1c) = fVar8;
  if (0.0 < fVar8) {
    iVar5 = iVar4;
    do {
      iVar9 = (int)(*(float *)(iVar5 + 100) - *(float *)(iVar4 + 100));
      if (iVar3 < iVar9) {
        iVar3 = iVar9;
      }
      iVar7 = iVar7 + 1;
      iVar5 = *(int *)(iVar5 + 4);
    } while ((float)iVar7 < fVar8);
  }
  iVar7 = 0;
  if (0.0 < fVar8) {
    do {
      iVar7 = iVar7 + 1;
      *(float *)(iVar4 + 100) = *(float *)(iVar4 + 100) - (float)(iVar3 / 2);
      iVar4 = *(int *)(iVar4 + 4);
    } while ((float)iVar7 < *(float *)(param_1 + 0xf1c));
  }
  return;
}

