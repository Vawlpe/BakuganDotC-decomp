#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a27644(ushort *param_1,ushort *param_2,int param_3,int param_4,char param_5)

{
  undefined uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_4;
  if (param_5 != '\0') {
    iVar5 = 0;
  }
  if (param_4 == 2) {
    if (0 < param_3) {
      iVar4 = 0;
      do {
        uVar2 = *param_2;
        iVar4 = iVar4 + 1;
        *param_1 = uVar2 & 0x83e0 | (ushort)(((uint)uVar2 << 0x11) >> 0x1b) |
                   (ushort)((uVar2 & 0x1f) << 10) | 0x8000;
        param_2 = (ushort *)((int)param_2 + iVar5);
        param_1 = param_1 + 1;
      } while (param_3 != iVar4);
      return;
    }
  }
  else if (param_4 < 3) {
    if (param_4 != 1) {
      return;
    }
    iVar4 = 0;
    if (0 < param_3) {
      do {
        uVar1 = *(undefined *)param_2;
        iVar4 = iVar4 + 1;
        param_2 = (ushort *)((int)param_2 + iVar5);
        *(undefined *)param_1 = uVar1;
        param_1 = (ushort *)((int)param_1 + 1);
      } while (param_3 != iVar4);
      return;
    }
  }
  else if (param_4 == 3) {
    iVar4 = 0;
    if (0 < param_3) {
      do {
        iVar4 = iVar4 + 1;
        *(undefined *)param_1 = *(undefined *)(param_2 + 1);
        *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
        uVar1 = *(undefined *)param_2;
        *(undefined *)((int)param_1 + 3) = 0xff;
        param_2 = (ushort *)((int)param_2 + iVar5);
        *(undefined *)(param_1 + 1) = uVar1;
        param_1 = param_1 + 2;
      } while (param_3 != iVar4);
      return;
    }
  }
  else if ((param_4 == 4) && (iVar4 = 0, 0 < param_3)) {
    do {
      *(undefined *)param_1 = *(undefined *)(param_2 + 1);
      *(undefined *)((int)param_1 + 1) = *(undefined *)((int)param_2 + 1);
      *(undefined *)(param_1 + 1) = *(undefined *)param_2;
      puVar3 = (undefined *)((int)param_2 + iVar5);
      *(undefined *)((int)param_1 + 3) = *(undefined *)((int)param_2 + 3);
      if (param_3 == iVar4 + 1) {
        return;
      }
      iVar4 = iVar4 + 2;
      *(undefined *)(param_1 + 2) = puVar3[2];
      *(undefined *)((int)param_1 + 5) = puVar3[1];
      *(undefined *)(param_1 + 3) = *puVar3;
      param_2 = (ushort *)(puVar3 + iVar5);
      *(undefined *)((int)param_1 + 7) = puVar3[3];
      param_1 = param_1 + 4;
    } while (param_3 != iVar4);
    return;
  }
  return;
}

