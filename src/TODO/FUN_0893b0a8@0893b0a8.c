#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893b0a8(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 local_120;
  char cStack_11b;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
    break;
  case 1:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar4 = *(uint *)(param_1 + 0x7ec);
    iVar6 = (int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3;
    iVar5 = *piVar2 + iVar6;
    bVar1 = *(byte *)(iVar5 + 0x51a);
    if ((int)uVar4 < 0) {
      uVar3 = -(-uVar4 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar4 & 7;
    }
    iVar7 = *piVar2 + iVar6;
    if (((uint)bVar1 & 1 << uVar3) == 0) {
      if ((int)uVar4 < 0) {
        uVar3 = -(-uVar4 & 7) & 0x1f;
      }
      else {
        uVar3 = uVar4 & 7;
      }
      *(byte *)(iVar5 + 0x51a) = bVar1 | (byte)(1 << uVar3);
      iVar5 = *piVar2 + (((int)(uVar4 + ((uint)((int)uVar4 >> 2) >> 0x1e)) >> 2) + 1) * 2;
      if (*(char *)(iVar5 + 0x4e4) == -1) {
        *(char *)(iVar5 + 0x4e4) = (char)uVar4;
        iVar7 = *piVar2;
      }
      else {
        iVar7 = *piVar2 + iVar6;
        if (*(char *)(iVar5 + 0x4e5) != -1) goto LAB_0893b1e4;
        *(char *)(iVar5 + 0x4e5) = (char)uVar4;
        iVar7 = *piVar2;
      }
      iVar7 = iVar7 + iVar6;
    }
LAB_0893b1e4:
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(iVar7 + 0x5c8) = *(byte *)(iVar7 + 0x5c8) | bVar1;
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(*piVar2 + iVar6 + 0x5d3) = *(byte *)(*piVar2 + iVar6 + 0x5d3) | bVar1;
    break;
  case 2:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar4 = *(uint *)(param_1 + 0x7ec) & 0xff;
    iVar6 = *piVar2 + ((int)uVar4 >> 3);
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (*(uint *)(param_1 + 0x7ec) & 7));
    }
    *(byte *)(iVar6 + 0x88) = *(byte *)(iVar6 + 0x88) | bVar1;
    break;
  case 3:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar5 = *(int *)(param_1 + 0x7ec);
    iVar6 = *piVar2 + iVar5;
    *(char *)(iVar6 + 0x410) = *(char *)(iVar6 + 0x410) + '\x01';
    iVar5 = *piVar2 + iVar5;
    if ('c' < *(char *)(iVar5 + 0x410)) {
      *(undefined *)(iVar5 + 0x410) = 99;
    }
    break;
  case 4:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar5 = *(int *)(*piVar2 + 0x464) + *(int *)(param_1 + 0x7ec);
    iVar6 = 9999999;
    if ((iVar5 < 10000000) && (iVar6 = iVar5, iVar5 < 0)) {
      iVar6 = 0;
    }
    *(int *)(*piVar2 + 0x464) = iVar6;
    break;
  case 5:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar4 = *(int *)(param_1 + 0x7ec) + 1;
    if ((int)uVar4 < 0) {
      uVar3 = -(-uVar4 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar4 & 7;
    }
    if (((uint)*(byte *)(*piVar2 + DAT_08ac19f0 +
                         ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) + 0x53c) &
        1 << uVar3) == 0) {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar4 = *(int *)(param_1 + 0x7ec) + 1;
      iVar6 = *piVar2 + DAT_08ac19f0 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar4 < 0) {
        bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar4 & 7));
      }
      *(byte *)(iVar6 + 0x53c) = *(byte *)(iVar6 + 0x53c) | bVar1;
    }
    break;
  case 6:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar4 = FUN_0893aa80(param_1,1,*(uint *)(param_1 + 0x7ec) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -(-uVar4 & 7) & 0x1f;
    }
    else {
      uVar3 = uVar4 & 7;
    }
    if (((uint)*(byte *)(*piVar2 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3) + 0x540)
        & 1 << uVar3) == 0) {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      uVar4 = FUN_0893aa80(param_1,1,*(uint *)(param_1 + 0x7ec) & 0xff);
      iVar6 = *piVar2 + ((int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3);
      if ((int)uVar4 < 0) {
        bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
      }
      else {
        bVar1 = (byte)(1 << (uVar4 & 7));
      }
      *(byte *)(iVar6 + 0x540) = *(byte *)(iVar6 + 0x540) | bVar1;
    }
    break;
  case 7:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    *(char *)(*piVar2 + 0x410) = *(char *)(*piVar2 + 0x410) + '\n';
    if ('c' < *(char *)(*piVar2 + 0x410)) {
      *(undefined *)(*piVar2 + 0x410) = 99;
    }
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    DAT_08b00bd8._1_1_ = 'c';
    if (*(char *)(*piVar2 + 0x410) < 'd') {
      DAT_08b00bd8._1_1_ = *(char *)(*piVar2 + 0x410);
    }
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar6 = *piVar2;
    iVar5 = 0;
    iVar7 = 0x21;
    do {
      puVar8 = (undefined4 *)(iVar6 + 0x138 + iVar5);
      uVar9 = puVar8[1];
      *(undefined4 *)((int)&local_120 + iVar5) = *puVar8;
      *(undefined4 *)(&stack0xfffffee4 + iVar5) = uVar9;
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar7 != 0);
    cStack_11b = DAT_08b00bd8._1_1_;
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar6 = *piVar2;
    iVar5 = 0;
    iVar7 = 0x21;
    do {
      uVar9 = *(undefined4 *)(&stack0xfffffee4 + iVar5);
      puVar8 = (undefined4 *)(iVar6 + 0x138 + iVar5);
      *puVar8 = *(undefined4 *)((int)&local_120 + iVar5);
      puVar8[1] = uVar9;
      iVar7 = iVar7 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar7 != 0);
    break;
  case 8:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar5 = *(int *)(*piVar2 + 0x464) + 10000;
    iVar6 = 9999999;
    if ((iVar5 < 10000000) && (iVar6 = iVar5, iVar5 < 0)) {
      iVar6 = 0;
    }
    *(int *)(*piVar2 + 0x464) = iVar6;
    break;
  case 9:
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    uVar4 = *(int *)(param_1 + 0x7ec) + 1;
    iVar6 = (int)(uVar4 + ((uint)((int)uVar4 >> 3) >> 0x1d)) >> 3;
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(*piVar2 + iVar6 + 0x50e) = *(byte *)(*piVar2 + iVar6 + 0x50e) | bVar1;
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(*piVar2 + iVar6 + 0x5be) = *(byte *)(*piVar2 + iVar6 + 0x5be) | bVar1;
    if ((int)uVar4 < 0) {
      bVar1 = (byte)(1 << (-(-uVar4 & 7) & 0x1f));
    }
    else {
      bVar1 = (byte)(1 << (uVar4 & 7));
    }
    *(byte *)(*piVar2 + iVar6 + 0x5c3) = *(byte *)(*piVar2 + iVar6 + 0x5c3) | bVar1;
  }
  return;
}

