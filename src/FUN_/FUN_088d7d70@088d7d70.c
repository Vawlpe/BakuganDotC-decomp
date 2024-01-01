#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d7d70(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  uVar3 = (uint)*(char *)(param_1 + 0x1a8);
  uVar2 = (uint)*(byte *)(param_1 + 0x1ad);
  if (*(char *)(param_1 + 0x15e) == '\0') {
    *(undefined *)(param_1 + 0x1aa) = 100;
    *(undefined *)(param_1 + 0x1ab) = 100;
  }
  else {
    *(char *)(param_1 + 0x1a8) = *(char *)(param_1 + 0x1a8) + '\x01';
    uVar3 = (uint)*(char *)(param_1 + 0x1a8);
    if (uVar3 != uVar2) {
      bVar1 = *(byte *)(param_1 + 0x1ac);
      goto LAB_088d7e1c;
    }
    *(char *)(param_1 + 0x1a9) = *(char *)(param_1 + 0x1a9) + '\x01';
    if (*(short *)(&DAT_08abf078 + (uint)*(byte *)(param_1 + 0x1a9) * 8) == -1) {
      *(undefined *)(param_1 + 0x1a8) = 0;
      *(undefined *)(param_1 + 0x1a9) = 0;
      uVar3 = (uint)*(char *)(param_1 + 0x1a8);
      bVar1 = *(byte *)(param_1 + 0x1a9);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x1a9);
    }
    iVar4 = (uint)bVar1 * 8;
    *(char *)(param_1 + 0x1aa) = (char)*(undefined2 *)(&DAT_08abf078 + iVar4);
    *(char *)(param_1 + 0x1ab) = (char)*(undefined2 *)(&DAT_08abf07a + iVar4);
    *(char *)(param_1 + 0x1ac) = (char)*(undefined2 *)(&DAT_08abf07c + iVar4);
    *(char *)(param_1 + 0x1ad) = (char)*(undefined2 *)(&DAT_08abf07e + iVar4);
    uVar2 = (uint)*(byte *)(param_1 + 0x1ad);
  }
  bVar1 = *(byte *)(param_1 + 0x1ac);
LAB_088d7e1c:
  iVar4 = (int)(((uint)*(byte *)(param_1 + 0x1aa) - (uint)*(byte *)(param_1 + 0x1ab)) * 0x10000) >>
          0x10;
  if (iVar4 == 0) {
    if (*(byte *)(param_1 + 0x1aa) == 100) {
      fVar5 = 1.0;
    }
    else {
      fVar5 = 0.0;
    }
  }
  else {
    fVar5 = (((float)(uVar2 - uVar3) * (float)iVar4) / (float)(uVar2 - bVar1)) * 0.01;
  }
  *(float *)(param_1 + 0x1a4) = fVar5;
  FUN_089e0694(param_1,"menu_cabin_door03_02__BA");
  return;
}

