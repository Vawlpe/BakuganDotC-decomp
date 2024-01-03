#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884d7bc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0xb);
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x548);
  do {
    if (iVar4 != iVar3) {
      uVar1 = DONE_Get_DAT_08AAC9E0();
      iVar3 = FUN_0880d0ac(uVar1,iVar4 + 0xe);
      if ((iVar2 != -1) && (iVar2 <= iVar3)) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    if (3 < iVar4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x548);
  } while( true );
}

