#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08960790(int param_1,char param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  param_3 = param_3 & 0xff;
  param_4 = param_4 & 0xff;
  iVar7 = 0;
  iVar4 = 0;
  iVar6 = param_1 + param_3 * 4;
  iVar8 = iVar6;
  do {
    if ((*(byte *)(iVar8 + 0x4fc8) & 1) != 0) {
      iVar7 = iVar7 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar8 = iVar6 + iVar4;
  } while (iVar4 < 4);
  if (param_2 == '\0') {
    if (0 < iVar7) {
      if (iVar7 < 2) {
        *(undefined *)(iVar6 + param_4 + 0x4fc8) = 0;
        iVar4 = 0;
        param_1 = param_1 + param_3 * 2;
        iVar8 = param_1;
        do {
          iVar4 = iVar4 + 1;
          if (*(char *)(iVar8 + 0x4fd8) == *(char *)(iVar6 + param_4 + 0x4fb8)) {
            *(undefined *)(iVar8 + 0x4fd8) = 0xff;
            return;
          }
          iVar8 = param_1 + iVar4;
        } while (iVar4 < 2);
      }
      else if (iVar7 < 3) {
        *(undefined *)(iVar6 + param_4 + 0x4fc8) = 0;
        iVar4 = 0;
        cVar2 = *(char *)(iVar6 + param_4 + 0x4fb8);
        param_1 = param_1 + param_3 * 2;
        iVar8 = iVar6;
        do {
          if ((*(byte *)(iVar8 + 0x4fc8) & 1) != 0) {
            *(byte *)(iVar8 + 0x4fc8) = *(byte *)(iVar8 + 0x4fc8) | 2;
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar6 + iVar4;
        } while (iVar4 < 4);
        iVar4 = 0;
        iVar8 = param_1;
        do {
          iVar4 = iVar4 + 1;
          if (*(char *)(iVar8 + 0x4fd8) == cVar2) {
            *(undefined *)(iVar8 + 0x4fd8) = 0xff;
            return;
          }
          iVar8 = param_1 + iVar4;
        } while (iVar4 < 2);
      }
    }
  }
  else if (iVar7 < 1) {
    iVar6 = iVar6 + param_4;
    if (-1 < iVar7) {
      *(byte *)(iVar6 + 0x4fc8) = *(byte *)(iVar6 + 0x4fc8) | 1;
      *(byte *)(iVar6 + 0x4fc8) = *(byte *)(iVar6 + 0x4fc8) | 2;
      *(undefined *)(param_1 + param_3 * 2 + 0x4fd8) = *(undefined *)(iVar6 + 0x4fb8);
      return;
    }
  }
  else if (iVar7 < 2) {
    iVar8 = iVar6 + param_4;
    *(byte *)(iVar8 + 0x4fc8) = *(byte *)(iVar8 + 0x4fc8) | 1;
    param_1 = param_1 + param_3 * 2;
    uVar5 = 0;
    do {
      if ((uVar5 != param_4) && (bVar1 = *(byte *)(iVar6 + uVar5 + 0x4fc8), (bVar1 & 1) != 0)) {
        *(byte *)(iVar6 + uVar5 + 0x4fc8) = bVar1 | 2;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 4);
    iVar6 = 0;
    iVar4 = param_1;
    do {
      iVar6 = iVar6 + 1;
      if (*(char *)(iVar4 + 0x4fd8) == -1) {
        *(undefined *)(iVar4 + 0x4fd8) = *(undefined *)(iVar8 + 0x4fb8);
        return;
      }
      iVar4 = param_1 + iVar6;
    } while (iVar6 < 2);
  }
  else if (iVar7 < 3) {
    param_1 = param_1 + param_3 * 2;
    uVar5 = 0;
    iVar8 = iVar6 + param_4;
    do {
      iVar4 = iVar6 + uVar5;
      if (uVar5 != param_4) {
        bVar1 = *(byte *)(iVar4 + 0x4fc8);
        if ((bVar1 & 1) != 0) {
          if ((bVar1 & 2) == 0) {
            *(byte *)(iVar4 + 0x4fc8) = bVar1 | 2;
          }
          else {
            *(undefined *)(iVar4 + 0x4fc8) = 0;
            iVar3 = 0;
            iVar7 = param_1;
            do {
              iVar3 = iVar3 + 1;
              if (*(char *)(iVar7 + 0x4fd8) == *(char *)(iVar4 + 0x4fb8)) {
                *(undefined *)(iVar7 + 0x4fd8) = 0xff;
                break;
              }
              iVar7 = param_1 + iVar3;
            } while (iVar3 < 2);
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 4);
    iVar6 = 0;
    *(byte *)(iVar8 + 0x4fc8) = *(byte *)(iVar8 + 0x4fc8) | 1;
    iVar4 = param_1;
    do {
      iVar6 = iVar6 + 1;
      if (*(char *)(iVar4 + 0x4fd8) == -1) {
        *(undefined *)(iVar4 + 0x4fd8) = *(undefined *)(iVar8 + 0x4fb8);
        return;
      }
      iVar4 = param_1 + iVar6;
    } while (iVar6 < 2);
  }
  return;
}

