#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a196c0(short *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != (short *)0x0) &&
     (sVar1 = *param_1, *param_1 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    iVar5 = 0;
    if (param_1[7] == 0) {
      uVar3 = *(undefined4 *)(param_1 + 4);
    }
    else {
      iVar4 = 0;
      iVar2 = *(int *)(param_1 + 2);
      while( true ) {
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + iVar4;
        iVar4 = iVar4 + 0xc;
        thunk_FUN_08a13244(0,*(undefined4 *)(iVar2 + 8));
        if ((int)(uint)(ushort)param_1[7] <= iVar5) break;
        iVar2 = *(int *)(param_1 + 2);
      }
      uVar3 = *(undefined4 *)(param_1 + 4);
    }
    thunk_FUN_08a13244(1,uVar3);
    thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 2));
    thunk_FUN_08a13244(0,param_1);
  }
  return param_1;
}

