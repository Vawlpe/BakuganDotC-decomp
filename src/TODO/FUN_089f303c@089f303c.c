#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f303c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  puVar1 = (uint *)FUN_089f1308();
  puVar7 = puVar1 + 2;
  puVar3 = puVar7 + ((param_4 + 1) * 0x18 + 3 >> 2);
  *puVar1 = ((uint)puVar3 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  uVar4 = 0;
  puVar1[1] = (uint)puVar3 & 0xffffff | 0x8000000;
  uVar8 = param_4 * 2 + 2;
  puVar1 = puVar7;
  if (0 < (int)uVar8) {
    do {
      uVar5 = 0;
      if ((uVar4 & 1) != 0) {
        uVar5 = 0x1e0;
      }
      *(undefined2 *)(puVar1 + 1) = uVar5;
      iVar6 = (int)uVar4 / 2;
      *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)(param_2 + iVar6 * 2);
      *(undefined2 *)(puVar1 + 2) = 0;
      uVar4 = uVar4 + 1;
      *puVar1 = *(uint *)(param_3 + iVar6 * 4);
      puVar1 = puVar1 + 3;
    } while ((int)uVar4 < (int)uVar8);
  }
  puVar2 = (undefined4 *)FUN_089f202c(puVar3,&DAT_08b00190,0,param_5);
  *puVar2 = 0x1280011c;
  puVar1 = puVar2 + 1;
  if (puVar7 != (uint *)0x0) {
    *puVar1 = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar2[2] = (uint)puVar7 & 0xffffff | 0x1000000;
    puVar1 = puVar2 + 3;
  }
  *puVar1 = uVar8 | 0x4040000;
  FUN_089f13c8(param_1,puVar1 + 1);
  return;
}

