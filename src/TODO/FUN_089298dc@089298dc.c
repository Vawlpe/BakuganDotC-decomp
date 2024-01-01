#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089298dc(int param_1,char param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    FUN_0892987c(param_1,*(ushort *)(param_1 + 0x4ba) & 0xff);
    iVar1 = FUN_0880dc00("DWHologramHelp");
    FUN_088cc354(iVar1);
    iVar4 = param_1 + 0x4e4;
    strcpy(iVar4,*(undefined4 *)(iVar1 + (uint)*(ushort *)(param_1 + 0x4ba) * 4));
    iVar1 = *(int *)(param_1 + 0x4c0);
    FUN_089f51b8(iVar1);
    *(undefined4 *)(iVar1 + 0x84) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c0) + 0x74);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + (param_3 & 0xffff) * 4);
    (**(code **)(iVar2 + 0x14))
              (*(float *)(iVar1 + 0x60) + 16.0,*(undefined4 *)(iVar1 + 100),0,
               *(int *)(param_1 + 0x4c0) + (int)*(short *)(iVar2 + 0x10),iVar4,1,0,0);
    FUN_088184e8(0,*(undefined4 *)(param_1 + 0x4c0),iVar4,param_1 + 0x4d4,param_1 + 0x4d8,
                 param_1 + 0x4dc);
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 0x84);
    iVar2 = *(int *)(param_1 + 0x4e0);
    iVar1 = 0;
    fVar5 = (float)*(int *)(*(int *)(param_1 + 0x4c0) + 0x88);
    iVar4 = 0;
    *(float *)(param_1 + 0x4cc) = fVar5;
    if (0.0 < fVar5) {
      iVar3 = iVar2;
      do {
        iVar6 = (int)(*(float *)(iVar3 + 100) - *(float *)(iVar2 + 100));
        if (iVar1 < iVar6) {
          iVar1 = iVar6;
        }
        iVar4 = iVar4 + 1;
        iVar3 = *(int *)(iVar3 + 4);
      } while ((float)iVar4 < fVar5);
    }
    iVar4 = 0;
    if (0.0 < fVar5) {
      do {
        iVar4 = iVar4 + 1;
        *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) - (float)(iVar1 / 2 + 6);
        iVar2 = *(int *)(iVar2 + 4);
      } while ((float)iVar4 < *(float *)(param_1 + 0x4cc));
    }
    *(undefined4 *)(param_1 + 0x4d0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0x3f800000;
  }
  return;
}

