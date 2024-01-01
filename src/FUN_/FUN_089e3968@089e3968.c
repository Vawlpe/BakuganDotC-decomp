#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089e3968(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    bVar1 = *(byte *)((int)param_1 + 7);
    while( true ) {
      if (*param_1 == 0x4853454d) {
        iVar2 = iVar2 + 1;
      }
      param_1 = (int *)((int)param_1 + ((param_1[1] & 0xffffffU) + 3 & 0xfffffffc) + bVar1 + 8);
      uVar3 = uVar3 + 1 & 0xffff;
      if (param_2 <= (int)uVar3) break;
      bVar1 = *(byte *)((int)param_1 + 7);
    }
  }
  return iVar2;
}

