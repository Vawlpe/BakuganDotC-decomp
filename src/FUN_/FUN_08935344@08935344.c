#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08935344(int param_1,char param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  param_3 = param_3 & 0xff;
  iVar5 = 0;
  iVar3 = 0;
  iVar6 = param_1;
  do {
    if ((*(byte *)(iVar6 + 0x19fc) & 1) != 0) {
      iVar5 = iVar5 + 1;
    }
    iVar3 = iVar3 + 1;
    iVar6 = param_1 + iVar3;
  } while (iVar3 < 4);
  if (param_2 == '\0') {
    if (0 < iVar5) {
      if (iVar5 < 2) {
        *(undefined *)(param_1 + param_3 + 0x19fc) = 0;
        iVar3 = 0;
        iVar6 = param_1;
        do {
          iVar3 = iVar3 + 1;
          if (*(char *)(iVar6 + 0x1a04) == *(char *)(param_1 + param_3 + 0x19f8)) {
            *(undefined *)(iVar6 + 0x1a04) = 0xff;
            return;
          }
          iVar6 = param_1 + iVar3;
        } while (iVar3 < 2);
      }
      else if (iVar5 < 3) {
        *(undefined *)(param_1 + param_3 + 0x19fc) = 0;
        iVar3 = 0;
        cVar2 = *(char *)(param_1 + param_3 + 0x19f8);
        iVar6 = param_1;
        do {
          if ((*(byte *)(iVar6 + 0x19fc) & 1) != 0) {
            *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 2;
          }
          iVar3 = iVar3 + 1;
          iVar6 = param_1 + iVar3;
        } while (iVar3 < 4);
        iVar3 = 0;
        iVar6 = param_1;
        do {
          iVar3 = iVar3 + 1;
          if (*(char *)(iVar6 + 0x1a04) == cVar2) {
            *(undefined *)(iVar6 + 0x1a04) = 0xff;
            return;
          }
          iVar6 = param_1 + iVar3;
        } while (iVar3 < 2);
      }
    }
  }
  else if (iVar5 < 1) {
    iVar6 = param_1 + param_3;
    if (-1 < iVar5) {
      *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 1;
      bVar1 = *(byte *)(iVar6 + 0x19fc);
      *(undefined *)(param_1 + 0x1a04) = *(undefined *)(iVar6 + 0x19f8);
      *(byte *)(iVar6 + 0x19fc) = bVar1 | 2;
      return;
    }
  }
  else {
    iVar6 = param_1 + param_3;
    if (iVar5 < 2) {
      uVar4 = 0;
      *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 1;
      do {
        if ((uVar4 != param_3) && (bVar1 = *(byte *)(param_1 + uVar4 + 0x19fc), (bVar1 & 1) != 0)) {
          *(byte *)(param_1 + uVar4 + 0x19fc) = bVar1 | 2;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 4);
      iVar5 = 0;
      iVar3 = param_1;
      do {
        iVar5 = iVar5 + 1;
        if (*(char *)(iVar3 + 0x1a04) == -1) {
          *(undefined *)(iVar3 + 0x1a04) = *(undefined *)(iVar6 + 0x19f8);
          return;
        }
        iVar3 = param_1 + iVar5;
      } while (iVar5 < 2);
    }
    else {
      uVar4 = 0;
      if (iVar5 < 3) {
        iVar6 = param_1 + param_3;
        do {
          iVar3 = param_1 + uVar4;
          if (uVar4 != param_3) {
            bVar1 = *(byte *)(iVar3 + 0x19fc);
            if ((bVar1 & 1) != 0) {
              if ((bVar1 & 2) == 0) {
                *(byte *)(iVar3 + 0x19fc) = bVar1 | 2;
              }
              else {
                *(undefined *)(iVar3 + 0x19fc) = 0;
                iVar7 = 0;
                iVar5 = param_1;
                do {
                  iVar7 = iVar7 + 1;
                  if (*(char *)(iVar5 + 0x1a04) == *(char *)(iVar3 + 0x19f8)) {
                    *(undefined *)(iVar5 + 0x1a04) = 0xff;
                    break;
                  }
                  iVar5 = param_1 + iVar7;
                } while (iVar7 < 2);
              }
            }
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 4);
        iVar5 = 0;
        *(byte *)(iVar6 + 0x19fc) = *(byte *)(iVar6 + 0x19fc) | 1;
        iVar3 = param_1;
        do {
          iVar5 = iVar5 + 1;
          if (*(char *)(iVar3 + 0x1a04) == -1) {
            *(undefined *)(iVar3 + 0x1a04) = *(undefined *)(iVar6 + 0x19f8);
            return;
          }
          iVar3 = param_1 + iVar5;
        } while (iVar5 < 2);
      }
    }
  }
  return;
}

