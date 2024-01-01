#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e095c(int param_1,char param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xf0);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      iVar1 = FUN_089e01bc(param_1,iVar6);
      if (((int)(char)*(byte *)(iVar1 + 3) & 0xe0U) == 0) {
        if (param_2 == '\0') {
          *(byte *)(iVar1 + 3) = *(byte *)(iVar1 + 3) & 0xe3;
        }
        else {
          uVar2 = FUN_089df234(param_1,iVar6);
          iVar3 = strstr(uVar2,"notoon");
          bVar4 = *(byte *)(iVar1 + 3) & 0xe3;
          if (iVar3 == 0) {
            bVar4 = bVar4 | (byte)((param_3 + 1U & 7) << 2);
          }
          *(byte *)(iVar1 + 3) = bVar4;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}

