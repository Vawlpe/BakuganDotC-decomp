#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089c6350(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = 0;
  iVar4 = -1;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  if ((*(char *)(param_1 + 0x8be5) == '\0') && (*(int *)(param_1 + 8) == 5)) {
    iVar4 = FUN_089c7250(param_1);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x8bd4);
  if (-1 < iVar4) {
    uVar3 = *(int *)(param_1 + 0x1a4) + 1;
    *(uint *)(param_1 + 0x1a4) = uVar3;
    iVar4 = param_1 + iVar4 * 4;
    if (0x7ffffff < uVar3) {
      *(undefined4 *)(param_1 + 0x1a4) = 0x10000;
    }
    *(uint *)(iVar4 + 0x20) = param_2;
    if (param_3 == 0) {
      if (((param_2 & 0x7ffffff) < 0x4200000) || (0x5200003 < (param_2 & 0x7ffffff))) {
        param_3 = 2;
        iVar1 = 0;
        puVar2 = &DAT_08aa1270;
        do {
          iVar1 = iVar1 + 1;
          if (param_2 == *puVar2) {
            param_3 = 1;
            break;
          }
          puVar2 = puVar2 + 1;
        } while (iVar1 < 10);
      }
      else {
        param_3 = 4;
      }
    }
    uVar3 = *(uint *)(param_1 + 0x1a4) | (param_3 & 7) << 0x1c | (param_4 & 1) << 0x1b;
    *(uint *)(iVar4 + 0xa0) = uVar3;
  }
  FUN_089bb790(uVar5);
  return uVar3;
}

