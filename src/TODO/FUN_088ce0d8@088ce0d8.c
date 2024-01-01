#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ce0d8(int param_1)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined auStack_40 [2];
  short local_3e;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  DAT_08b00bd4 = (undefined)
                 ((int)(*(int *)(DAT_08ac58c4 + 4) +
                       ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)) >> 2);
  uVar8 = 0;
  bVar6 = (byte)*(int *)(DAT_08ac58c4 + 4);
  if (*(int *)(DAT_08ac58c4 + 4) < 0) {
    DAT_08b00bd6 = -(-bVar6 & 3);
  }
  else {
    DAT_08b00bd6 = bVar6 & 3;
  }
  puVar4 = *(undefined2 **)(param_1 + 0x34);
  if (((*(int *)(param_1 + 0x30) == 2) && (puVar4 != (undefined2 *)0x0)) &&
     (*(char *)((int)puVar4 + 3) != '\0')) {
    iVar9 = 0;
    puVar1 = puVar4;
    do {
      if (*(char *)(puVar1 + 3) == '\0') {
        FUN_088f542c(puVar1[2]);
        puVar4 = *(undefined2 **)(param_1 + 0x34);
        bVar6 = *(byte *)((int)puVar4 + 3);
      }
      else {
        FUN_088f52e0();
        puVar4 = *(undefined2 **)(param_1 + 0x34);
        bVar6 = *(byte *)((int)puVar4 + 3);
      }
      iVar9 = iVar9 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar9 < (int)(uint)bVar6);
  }
  bVar6 = 2;
  if ((puVar4 != (undefined2 *)0x0) && (*(int *)(param_1 + 0x30) == 2)) {
    bVar6 = *(byte *)((int)puVar4 + 1);
  }
  if (bVar6 == 0) {
    DAT_08b00dd7 = 1;
    *(undefined4 *)(DAT_08ac58c4 + 4) = 0x20;
  }
  else if (bVar6 < 2) {
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    if (*(char *)(*piVar2 + 0x462) == '\0') {
      DAT_08b00dd7 = 1;
      uVar8 = 10;
    }
    else {
      DAT_08b00dd7 = 1;
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x20;
    }
  }
  else {
    if (2 < bVar6) {
      *(undefined4 *)(DAT_08ac58c4 + 0xc) = 0;
      goto LAB_088ce38c;
    }
    DAT_08b00dd7 = 2;
    uVar7 = *(uint *)(DAT_08ac58c4 + 4);
    uVar8 = 2;
    if ((int)uVar7 < 0) {
      uVar5 = -(-uVar7 & 3) & 0xff;
    }
    else {
      uVar5 = uVar7 & 3;
    }
    FUN_089b1ec0(auStack_40,(int)(uVar7 + ((uint)((int)uVar7 >> 2) >> 0x1e)) >> 2 & 0xff,uVar5);
    if (local_3e == 1) {
      uVar8 = 8;
    }
    else {
      iVar9 = FUN_089c9b48(0x1c,DAT_08ac58c8);
      if (iVar9 == 0) {
        uVar8 = 8;
      }
    }
    FUN_089b1bd8();
    FUN_089b1c54(2,*(uint *)(DAT_08ac58c4 + 4) & 0xff);
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x33,*(undefined4 *)(DAT_08ac58c4 + 4));
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x2e,0);
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x31,uVar7);
    if (*(int *)(DAT_08ac58c4 + 4) != 0x25) {
      *(undefined4 *)(DAT_08ac58c4 + 0xc) = uVar8;
      goto LAB_088ce38c;
    }
    iVar9 = FUN_089c9b48(0x1d,DAT_08ac58c8);
    if (iVar9 != 0) {
      *(undefined4 *)(DAT_08ac58c4 + 0x3c) = 0x11;
    }
  }
  *(undefined4 *)(DAT_08ac58c4 + 0xc) = uVar8;
LAB_088ce38c:
  FUN_089c9b74(0x21,DAT_08ac58c8);
  return;
}

