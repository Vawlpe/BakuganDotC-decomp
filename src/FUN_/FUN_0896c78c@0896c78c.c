#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896c78c(int param_1,char param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  param_4 = param_4 & 0xff;
  iVar5 = 0;
  iVar2 = 0;
  param_1 = param_1 + (param_3 & 0xff) * 4;
  iVar6 = param_1;
  do {
    if ((*(byte *)(iVar6 + 0x29fc) & 1) != 0) {
      iVar5 = iVar5 + 1;
    }
    iVar2 = iVar2 + 1;
    iVar6 = param_1 + iVar2;
  } while (iVar2 < 4);
  if (param_2 == '\0') {
    if (0 < iVar5) {
      if (iVar5 < 2) {
        *(undefined *)(param_1 + param_4 + 0x29fc) = 0;
        return;
      }
      if (iVar5 < 3) {
        *(undefined *)(param_1 + param_4 + 0x29fc) = 0;
        iVar2 = 0;
        iVar6 = param_1;
        do {
          if ((*(byte *)(iVar6 + 0x29fc) & 1) != 0) {
            *(byte *)(iVar6 + 0x29fc) = *(byte *)(iVar6 + 0x29fc) | 2;
          }
          iVar2 = iVar2 + 1;
          iVar6 = param_1 + iVar2;
        } while (iVar2 < 4);
      }
    }
  }
  else if (iVar5 < 1) {
    param_1 = param_1 + param_4;
    if (-1 < iVar5) {
      *(byte *)(param_1 + 0x29fc) = *(byte *)(param_1 + 0x29fc) | 1;
      *(byte *)(param_1 + 0x29fc) = *(byte *)(param_1 + 0x29fc) | 2;
      return;
    }
  }
  else if (iVar5 < 2) {
    uVar3 = 0;
    *(byte *)(param_1 + param_4 + 0x29fc) = *(byte *)(param_1 + param_4 + 0x29fc) | 1;
    do {
      if ((uVar3 != param_4) && (bVar1 = *(byte *)(param_1 + uVar3 + 0x29fc), (bVar1 & 1) != 0)) {
        *(byte *)(param_1 + uVar3 + 0x29fc) = bVar1 | 2;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 4);
  }
  else {
    uVar3 = 0;
    if (iVar5 < 3) {
      do {
        if (uVar3 != param_4) {
          bVar1 = *(byte *)(param_1 + uVar3 + 0x29fc);
          if ((bVar1 & 1) != 0) {
            bVar4 = 0;
            if ((bVar1 & 2) == 0) {
              bVar4 = bVar1 | 2;
            }
            *(byte *)(param_1 + uVar3 + 0x29fc) = bVar4;
          }
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 4);
      *(byte *)(param_1 + param_4 + 0x29fc) = *(byte *)(param_1 + param_4 + 0x29fc) | 1;
      return;
    }
  }
  return;
}

