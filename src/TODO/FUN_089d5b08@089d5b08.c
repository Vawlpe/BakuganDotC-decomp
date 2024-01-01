#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5b08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar1 = FUN_089edb80();
  uVar2 = FUN_089f2178(*(float *)(iVar1 + 0x10) + 1.0);
  uVar3 = FUN_089f1308(uVar2);
  puVar4 = (undefined4 *)FUN_089f1418(uVar3);
  *puVar4 = 0x21000000;
  puVar4[1] = 0x22000000;
  if (*(int *)(*(int *)(param_1 + 0x10) + 4) == 0) {
    puVar4[2] = 0x1e000000;
    puVar5 = puVar4 + 3;
    puVar4 = puVar4 + 5;
  }
  else {
    puVar4[2] = 0xc2000000;
    puVar4[3] = 0xc3000003;
    puVar4[4] = 0xcb000000;
    uVar7 = *(uint *)(*(int *)(param_1 + 0x10) + 4);
    puVar4[5] = (uVar7 >> 0x18 & 0xf) << 0x10 | 0xa8000200;
    puVar4[6] = uVar7 & 0xffffff | 0xa0000000;
    puVar4[7] = 0xb8000909;
    puVar5 = puVar4 + 9;
    puVar4[8] = 0xcb000000;
    puVar4 = puVar4 + 0xb;
  }
  *puVar5 = 0x55ffffff;
  puVar5[1] = 0x580000ff;
  uVar7 = *(uint *)(param_1 + 0x24);
  *puVar4 = 0x12800102;
  puVar6 = puVar4 + 1;
  if (uVar7 != 0) {
    *puVar6 = (uVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    puVar4[2] = uVar7 & 0xffffff | 0x1000000;
    puVar6 = puVar4 + 3;
  }
  *puVar6 = 0x406001e;
  puVar6[1] = 0x21000001;
  FUN_089f13c8(uVar2,puVar6 + 2);
  return;
}

