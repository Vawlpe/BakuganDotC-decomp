#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08961cac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0880dc00("DWCardName");
  FUN_088cc354(iVar1);
  iVar3 = param_1 + 0x5030;
  strcpy(iVar3,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0x5028);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x5028) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb)) * 4);
  (**(code **)(iVar2 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 40.0,0,
             *(int *)(param_1 + 0x5028) + (int)*(short *)(iVar2 + 0x10),iVar3,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0x5028),iVar3,param_1 + 0x50f0,param_1 + 0x50f8,
               param_1 + 0x5100);
  *(undefined4 *)(param_1 + 0x50e8) = *(undefined4 *)(*(int *)(param_1 + 0x5028) + 0x84);
  *(float *)(param_1 + 0x50e0) = (float)*(int *)(*(int *)(param_1 + 0x5028) + 0x88);
  return;
}

