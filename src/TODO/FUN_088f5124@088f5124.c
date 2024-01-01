#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088f5124(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  iVar4 = -1;
  uVar3 = 2;
  iVar5 = 0;
  do {
    iVar5 = param_1 + iVar5;
    if (*(char *)(iVar5 + 0x1a) == iVar4) {
      uVar6 = 5;
      iVar2 = 0;
LAB_088f5198:
      if (iVar2 != 0) {
        return *(char *)(param_1 + uVar6 * 4 + 0x1b) != '\0';
      }
      cVar1 = *(char *)(param_1 + 0x16);
      goto LAB_088f51bc;
    }
    uVar7 = FUN_088f505c(*(undefined2 *)(iVar5 + 0x18));
    iVar2 = (int)((ulonglong)uVar7 >> 0x20);
    if (((int)uVar7 != 0) && (*(byte *)(iVar5 + 0x1b) != uVar3)) goto LAB_088f5198;
    uVar6 = uVar6 + 1 & 0xff;
    iVar5 = uVar6 << 2;
  } while (uVar6 < 5);
  cVar1 = *(char *)(param_1 + 0x16);
LAB_088f51bc:
  return cVar1 != '\0';
}

