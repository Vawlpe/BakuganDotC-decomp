#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a15a80(int param_1,uint param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (*(ushort *)(param_1 + 0xc) != 0)) {
    uVar3 = 0;
    uVar1 = *(ushort *)(*(int *)(param_1 + 8) + 8);
    iVar2 = *(int *)(param_1 + 8);
    while( true ) {
      uVar3 = uVar3 + 1;
      if ((uVar1 == param_2) && (param_3 = param_3 + -1, param_3 < 0)) {
        return iVar2;
      }
      if (uVar3 == *(ushort *)(param_1 + 0xc)) break;
      uVar1 = *(ushort *)(iVar2 + 0x48);
      iVar2 = iVar2 + 0x40;
    }
  }
  return 0;
}

