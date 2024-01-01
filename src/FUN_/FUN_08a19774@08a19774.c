#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a19774(short *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  
  if ((param_1 != (short *)0x0) &&
     (sVar1 = *param_1, *param_1 = sVar1 + -1, (short)(sVar1 + -1) == 0)) {
    iVar7 = 0;
    psVar5 = param_1;
    psVar6 = param_1;
    do {
      while (psVar6[0xc] != 0) {
        iVar4 = 0;
        iVar3 = *(int *)(psVar5 + 2);
        while( true ) {
          iVar2 = iVar4 * 4;
          iVar4 = iVar4 + 1;
          thunk_FUN_08a13244(0,*(undefined4 *)(iVar2 + iVar3));
          if ((int)(uint)(ushort)psVar6[0xc] <= iVar4) break;
          iVar3 = *(int *)(psVar5 + 2);
        }
        iVar7 = iVar7 + 1;
        thunk_FUN_08a13244(0,*(undefined4 *)(psVar5 + 2));
        psVar6 = psVar6 + 1;
        psVar5 = psVar5 + 2;
        if (iVar7 == 5) goto LAB_08a1983c;
      }
      iVar7 = iVar7 + 1;
      thunk_FUN_08a13244(0,*(undefined4 *)(psVar5 + 2));
      psVar6 = psVar6 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar7 != 5);
LAB_08a1983c:
    thunk_FUN_08a13244(0,param_1);
  }
  return param_1;
}

