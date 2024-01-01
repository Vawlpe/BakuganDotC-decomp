#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a23678(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    FUN_08a29108(*param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),1);
    bVar1 = *param_1;
  }
  else {
    FUN_08a29164(*param_1,param_1[0x28]);
    bVar1 = *param_1;
  }
  uVar6 = (uint)bVar1;
  iVar7 = uVar6 * 0x68;
  if ((&DAT_08afdf55)[iVar7] == -1) {
    iVar7 = *(int *)(param_1 + 0x30);
    uVar4 = uVar6;
  }
  else {
    iVar7 = FUN_08a212a4((&DAT_08afdf45)[iVar7],
                         (int)(short)(((char)(&DAT_08afdf46)[iVar7] * 0x7f) / 100),
                         (&DAT_08afdf55)[iVar7],
                         (int)(short)(((char)(&DAT_08afdf44)[iVar7] * 0x7f) / 100));
    uVar4 = (uint)*param_1;
    iVar7 = (uint)((&DAT_08afdf24)[uVar6 * 0x1a] * iVar7) / 0xac44 + (&DAT_08afdf5c)[uVar6 * 0x1a];
    if (0x4000 < iVar7) {
      iVar7 = 0x4000;
    }
    if (iVar7 < 1) {
      iVar7 = 1;
    }
  }
  FUN_08a290b8(uVar4,iVar7);
  bVar1 = param_1[0x60];
  bVar2 = param_1[0x38];
  bVar3 = param_1[0x61];
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  (&DAT_08afdf04)[uVar6 * 0x1a] = (&DAT_08afdf5c)[uVar6 * 0x1a];
  FUN_08a23b14(uVar5,bVar1,bVar2,bVar3,&local_30,&local_2c);
  FUN_08a23b14(*(undefined4 *)(param_1 + 0x3c),param_1[0x62],param_1[0x40],param_1[99],&local_28,
               &local_24);
  FUN_08a29054(*param_1,local_30,local_2c,local_28,local_24);
  FUN_08a291b0(*param_1,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48));
  FUN_08a20730(*param_1,local_30,local_2c,local_28,local_24);
  param_1[8] = param_1[0x60];
  param_1[9] = param_1[0x61];
  param_1[10] = param_1[0x62];
  param_1[0xb] = param_1[99];
  iVar7 = FUN_08a28fa0(*param_1);
  uVar5 = 0xffffffff;
  if (-1 < iVar7) {
    uVar5 = 0;
  }
  return uVar5;
}

