#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a97e8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30 [2];
  
  iVar4 = 6;
  iVar1 = FUN_0884b248();
  if (iVar1 != 0) {
    FUN_0884b268();
    iVar1 = FUN_0884c8f4();
    if (iVar1 != 0) {
      return 6;
    }
  }
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar1 = FUN_0880d0ac(uVar2,0x1a);
    if (iVar1 == 1) {
      return 6;
    }
  }
  iVar1 = FUN_089bed14(1000);
  iVar3 = param_2 * 10 + param_1 * 10;
  if (iVar1 < param_1 * 10) {
    local_30[0] = 1;
    local_30[1] = 2;
    iVar1 = FUN_089bed14(2);
    iVar4 = local_30[iVar1];
  }
  else {
    iVar5 = iVar3 + param_3 * 10;
    if (iVar1 < iVar3) {
      iVar4 = 3;
    }
    else if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    else if (iVar5 + param_4 * 10 <= iVar1) {
      return 6;
    }
  }
  if ((iVar4 == 0) && ((iVar1 = FUN_088b67a4(0), iVar1 != 0 || (DAT_08abd4c8 != 0)))) {
    iVar4 = 6;
  }
  return iVar4;
}

