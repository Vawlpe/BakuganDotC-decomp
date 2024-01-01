#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089dbed8(uint **param_1,int param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  
  if (DAT_08ac5c74 != (uint *)0x0) {
    uVar3 = DAT_08b02148;
    if (DAT_08b02148 == 0) {
      uVar3 = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
    }
    **param_1 = uVar3;
    *param_1 = *param_1 + 1;
  }
  puVar4 = param_1[8];
  uVar3 = puVar4[1];
  if ((*(byte *)(uVar3 + 4) & 0x20) == 0) {
    return param_3;
  }
  param_1[9] = (uint *)puVar4[2];
  uVar5 = (uint)*(ushort *)(puVar4 + 3);
  if (uVar5 == 0) {
    cVar1 = *(char *)(uVar3 + 3);
  }
  else {
    do {
      param_3 = FUN_089dc1e4(param_1,param_2,param_3);
      uVar5 = uVar5 - 1;
      param_1[9] = param_1[9] + 0x10;
    } while (0 < (int)uVar5);
    cVar1 = *(char *)(uVar3 + 3);
  }
  if ((((int)cVar1 & 0x1cU) != 0) || (bVar2 = false, ((int)cVar1 & 0xe0U) != 0)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar3 = FUN_089db6f4(param_1,param_1[8],param_2,param_1[5],1);
    DAT_08ac5c5c = DAT_08ac5c5c | uVar3;
    uVar3 = param_1[7][9];
    if (uVar3 != 0) {
      puVar4 = *param_1;
      *param_1 = puVar4 + 1;
      *puVar4 = (uVar3 >> 0x18) << 0x10 | 0x10000000;
      puVar4 = *param_1;
      *param_1 = puVar4 + 1;
      *puVar4 = uVar3 & 0xffffff | 0xa000000;
    }
    **param_1 = 0xc0000000;
    (*param_1)[1] = DAT_08b02144;
    (*param_1)[2] = 0xde000007;
    param_3 = param_3 | 0x80000000;
    *param_1 = *param_1 + 3;
  }
  puVar4 = *param_1;
  if (DAT_08ac5c5c != 0) {
    if ((DAT_08ac5c5c & 1) != 0) {
      *puVar4 = *(uint *)(param_2 + 0x70) >> 8 | 0x4a000000;
      puVar4[1] = *(uint *)(param_2 + 0x74) >> 8 | 0x4b000000;
      puVar4[2] = 0xde000007;
      puVar4[3] = 0xc0000000;
      puVar4 = puVar4 + 4;
    }
    if ((DAT_08ac5c5c & 2) != 0) {
      FUN_08a15900(param_2,0x200000,0x200000);
      *puVar4 = 0x580000ff;
      puVar4 = puVar4 + 1;
    }
    *puVar4 = DAT_08ac5be0 & 0xffffff | 0x5c000000;
    puVar4[1] = DAT_08ac5c30;
    puVar4 = puVar4 + 2;
    *param_1 = puVar4;
  }
  *puVar4 = DAT_08ac5c30;
  (*param_1)[1] = DAT_08ac5be4 & 0xffffff | 0x90000000;
  *param_1 = *param_1 + 2;
  return param_3;
}

