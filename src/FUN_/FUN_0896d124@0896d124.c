#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d124(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_089be054(DAT_08ac520c,"DWCardName_eu.bin");
  FUN_088cc354(iVar1);
  iVar3 = param_1 + 0x2a8c;
  strcpy(iVar3,*(undefined4 *)(iVar1 + (param_2 & 0xff) * 4));
  iVar1 = *(int *)(param_1 + 0x2a84);
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x2a84) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) +
                  ((uint)*(byte *)(param_1 + 0x2b92) + (int)*(char *)(param_1 + 0x29be)) * 4);
  (**(code **)(iVar2 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) - 18.0,0,
             *(int *)(param_1 + 0x2a84) + (int)*(short *)(iVar2 + 0x10),iVar3,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0x2a84),iVar3,param_1 + 0x2b4c,param_1 + 0x2b54,
               param_1 + 0x2b5c);
  *(undefined4 *)(param_1 + 0x2b44) = *(undefined4 *)(*(int *)(param_1 + 0x2a84) + 0x84);
  *(float *)(param_1 + 0x2b3c) = (float)*(int *)(*(int *)(param_1 + 0x2a84) + 0x88);
  return;
}

