#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896263c(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  
  if ((-1 < param_2) && (param_2 < 4)) {
    iVar5 = param_1 + param_2 * 0x28;
    bVar1 = *(uint *)(iVar5 + 0x5204) != param_3;
    param_1 = param_1 + param_2 * 2;
    if (bVar1) {
      *(uint *)(iVar5 + 0x5204) = param_3;
    }
    bVar4 = *(uint *)(iVar5 + 21000) != param_4;
    if (bVar4) {
      *(uint *)(iVar5 + 21000) = param_4;
      bVar2 = *(byte *)(param_1 + 0x4fd8);
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x4fd8);
    }
    if (bVar2 != param_3) {
      *(char *)(param_1 + 0x4fd8) = (char)param_3;
      bVar3 = *(byte *)(param_1 + 0x4fd9);
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x4fd9);
    }
    if (bVar3 != param_4) {
      *(char *)(param_1 + 0x4fd9) = (char)param_4;
    }
    if (bVar3 != param_4 || (bVar2 != param_3 || (bVar4 || bVar1))) {
      *(undefined4 *)(iVar5 + 0x5224) = 3;
    }
  }
  return;
}

