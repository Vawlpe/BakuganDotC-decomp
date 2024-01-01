#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d3f0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  
  iVar1 = FUN_089be054(DAT_08ac520c,"DWCardHelp_eu.bin");
  FUN_088cc354(iVar1);
  iVar5 = param_1 + 0x2aac;
  strcpy(iVar5,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0x2a88);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar1 = *(int *)(param_1 + 0x2a88);
  iVar4 = *(int *)(iVar1 + 0x74);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b92) + (int)*(char *)(param_1 + 0x29be)) * 4);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    (**(code **)(iVar4 + 0x14))
              (*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),0,
               iVar1 + *(short *)(iVar4 + 0x10),iVar5,1,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0x2a88);
  }
  else {
    (**(code **)(iVar4 + 0x14))
              (*(undefined4 *)(iVar3 + 0x60),*(float *)(iVar3 + 100) - 5.0,0,
               iVar1 + *(short *)(iVar4 + 0x10),iVar5,1,0,0);
    uVar2 = *(undefined4 *)(param_1 + 0x2a88);
  }
  FUN_088184e8(0,uVar2,iVar5,param_1 + 0x2b50,param_1 + 0x2b58,param_1 + 0x2b60);
  *(undefined4 *)(param_1 + 0x2b48) = *(undefined4 *)(*(int *)(param_1 + 0x2a88) + 0x84);
  iVar3 = *(int *)(param_1 + 0x2b48);
  iVar1 = 0;
  fVar6 = (float)*(int *)(*(int *)(param_1 + 0x2a88) + 0x88);
  iVar4 = 0;
  *(float *)(param_1 + 0x2b40) = fVar6;
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
    } while ((float)iVar4 < *(float *)(param_1 + 0x2b40));
  }
  return;
}

