#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896a2ec(float param_1,int param_2,char param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  iVar2 = (param_4 & 0xff) * 6;
  bVar1 = *(byte *)(param_2 + 0x2b88);
  while( true ) {
    iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + ((uint)bVar1 + iVar2 + iVar5) * 4);
    if (param_3 == '\0') {
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    }
    else {
      FUN_0896a294(param_2,iVar3);
      iVar3 = *(int *)(*(int *)(param_2 + 0x1c) +
                      ((uint)*(byte *)(param_2 + 0x2b88) + iVar2 + iVar5) * 4);
      if (iVar5 % 3 == 0) {
        *(undefined4 *)(iVar3 + 0xb0) = 0;
        *(float *)(iVar3 + 0xb4) = param_1 * 0.5;
        *(float *)(iVar3 + 0xb8) = param_1;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        iVar3 = ((uint)*(byte *)(param_2 + 0x2b88) + iVar2 + iVar5) * 4;
        iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + iVar3);
        uVar6 = *(undefined4 *)(param_2 + iVar3 + 0x25fc);
      }
      else {
        *(float *)(iVar3 + 0xb0) = param_1;
        *(float *)(iVar3 + 0xb4) = param_1;
        *(float *)(iVar3 + 0xb8) = param_1;
        *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
        iVar3 = ((uint)*(byte *)(param_2 + 0x2b88) + iVar2 + iVar5) * 4;
        iVar4 = *(int *)(*(int *)(param_2 + 0x1c) + iVar3);
        uVar6 = *(undefined4 *)(param_2 + iVar3 + 0x25fc);
      }
      *(undefined4 *)(iVar4 + 0x68) = uVar6;
    }
    iVar5 = iVar5 + 1;
    if (5 < iVar5) break;
    bVar1 = *(byte *)(param_2 + 0x2b88);
  }
  return;
}

