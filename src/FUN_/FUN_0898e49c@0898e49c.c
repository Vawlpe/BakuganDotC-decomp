#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898e49c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  byte abStack_30 [24];
  
  memcpy_jak(abStack_30,&DAT_08ac3ae0,0x15);
  bVar1 = abStack_30
          [*(byte *)((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 + param_1 +
                    0x11c0)];
  iVar2 = FUN_0880dc00("DWCollectionHelp");
  FUN_088cc354(iVar2);
  iVar5 = param_1 + 0xecc;
  strcpy(iVar5,*(undefined4 *)(iVar2 + (uint)bVar1 * 4 + 0xb0));
  iVar2 = *(int *)(param_1 + 0xea8);
  FUN_089f51b8(iVar2);
  *(undefined4 *)(iVar2 + 0x84) = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xea8) + 0x74);
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10c);
  (**(code **)(iVar3 + 0x14))
            (*(undefined4 *)(iVar2 + 0x60),*(undefined4 *)(iVar2 + 100),0,
             *(int *)(param_1 + 0xea8) + (int)*(short *)(iVar3 + 0x10),iVar5,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0xea8),iVar5,param_1 + 0xebc,param_1 + 0xec0,
               param_1 + 0xec4);
  *(undefined4 *)(param_1 + 0xec8) = *(undefined4 *)(*(int *)(param_1 + 0xea8) + 0x84);
  fVar6 = (float)*(int *)(*(int *)(param_1 + 0xea8) + 0x88);
  iVar5 = *(int *)(param_1 + 0xec8);
  iVar2 = 0;
  iVar3 = 0;
  *(float *)(param_1 + 0xeb4) = fVar6;
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
    } while ((float)iVar3 < *(float *)(param_1 + 0xeb4));
  }
  return;
}

