#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08985588(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  
  bVar1 = *(byte *)((int)*(char *)(param_1 + 0xbcc) + *(char *)(param_1 + 0xbcd) * 4 + param_1 +
                   0xbd8);
  iVar2 = FUN_0880dc00("DWCardHelp");
  FUN_088cc354(iVar2);
  iVar5 = param_1 + 0xcfc;
  strcpy(iVar5,*(undefined4 *)(iVar2 + (uint)bVar1 * 4));
  iVar2 = *(int *)(param_1 + 0xcd8);
  FUN_089f51b8(iVar2);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xcd8) + 0x74);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x100);
  (**(code **)(iVar3 + 0x14))
            (*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),0,
             *(int *)(param_1 + 0xcd8) + (int)*(short *)(iVar3 + 0x10),iVar5,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0xcd8),iVar5,param_1 + 0xcec,param_1 + 0xcf0,
               param_1 + 0xcf4);
  *(undefined4 *)(param_1 + 0xcf8) = *(undefined4 *)(*(int *)(param_1 + 0xcd8) + 0x84);
  fVar6 = (float)*(int *)(*(int *)(param_1 + 0xcd8) + 0x88);
  iVar5 = *(int *)(param_1 + 0xcf8);
  iVar2 = 0;
  iVar3 = 0;
  *(float *)(param_1 + 0xce4) = fVar6;
  if (0.0 < fVar6) {
    iVar4 = iVar5;
    do {
      iVar7 = (int)(*(float *)(iVar4 + 100) - *(float *)(iVar5 + 100));
      if (iVar2 < iVar7) {
        iVar2 = iVar7;
      }
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(iVar4 + 4);
    } while ((float)iVar3 < fVar6);
  }
  iVar3 = 0;
  if (0.0 < fVar6) {
    do {
      iVar3 = iVar3 + 1;
      *(float *)(iVar5 + 100) = *(float *)(iVar5 + 100) - (float)(iVar2 / 2);
      iVar5 = *(int *)(iVar5 + 4);
    } while ((float)iVar3 < *(float *)(param_1 + 0xce4));
  }
  return;
}

