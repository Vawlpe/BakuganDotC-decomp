#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08961dcc(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  
  iVar1 = FUN_0880dc00("DWCardHelp");
  FUN_088cc354(iVar1);
  iVar5 = param_1 + 0x5050;
  strcpy(iVar5,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0x502c);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar1 = *(int *)(param_1 + 0x502c);
  iVar4 = *(int *)(iVar1 + 0x74);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5186) + (int)*(char *)(param_1 + 0x4cdb)) * 4);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    (**(code **)(iVar4 + 0x14))
              (*(undefined4 *)(iVar3 + 0x60),*(float *)(iVar3 + 100) - -8.0,0,
               iVar1 + *(short *)(iVar4 + 0x10),iVar5,1,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0x502c);
  }
  else {
    (**(code **)(iVar4 + 0x14))
              (*(undefined4 *)(iVar3 + 0x60),*(float *)(iVar3 + 100) - -8.0,0,
               iVar1 + *(short *)(iVar4 + 0x10),iVar5,1,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0x502c);
  }
  FUN_088184e8(0,uVar2,iVar5,param_1 + 0x50f4,param_1 + 0x50fc,param_1 + 0x5104);
  *(undefined4 *)(param_1 + 0x50ec) = *(undefined4 *)(*(int *)(param_1 + 0x502c) + 0x84);
  iVar3 = *(int *)(param_1 + 0x50ec);
  iVar1 = 0;
  fVar6 = (float)*(int *)(*(int *)(param_1 + 0x502c) + 0x88);
  iVar4 = 0;
  *(float *)(param_1 + 0x50e4) = fVar6;
  if (0.0 < fVar6) {
    iVar5 = iVar3;
    do {
      iVar7 = (int)(*(float *)(iVar5 + 100) - *(float *)(iVar3 + 100));
      if (iVar1 < iVar7) {
        iVar1 = iVar7;
      }
      iVar4 = iVar4 + 1;
      iVar5 = *(int *)(iVar5 + 4);
    } while ((float)iVar4 < fVar6);
  }
  iVar4 = 0;
  if (0.0 < fVar6) {
    do {
      iVar4 = iVar4 + 1;
      *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) - (float)(iVar1 / 2);
      iVar3 = *(int *)(iVar3 + 4);
    } while ((float)iVar4 < *(float *)(param_1 + 0x50e4));
  }
  return;
}

