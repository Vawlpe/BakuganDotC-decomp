#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a1473c(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  
  if ((param_1 != (short *)0x0) && (iVar6 = 0, psVar5 = param_1, 0 < param_2)) {
    do {
      sVar1 = *psVar5;
      *psVar5 = sVar1 + -1;
      if ((short)(sVar1 + -1) == 0) {
        psVar2 = *(short **)(psVar5 + 2);
        uVar7 = (uint)(ushort)psVar5[6];
        if (psVar2 == (short *)0x0) {
LAB_08a147ec:
          uVar3 = *(undefined4 *)(psVar5 + 4);
        }
        else {
          uVar4 = 0;
          if (uVar7 != 0) {
            do {
              while( true ) {
                sVar1 = *psVar2;
                uVar4 = uVar4 + 1;
                *psVar2 = sVar1 + -1;
                if ((short)(sVar1 + -1) != 0) break;
                thunk_FUN_08a13244(0,*(undefined4 *)(psVar2 + 2));
                thunk_FUN_08a13244(0,psVar2);
                psVar2 = psVar2 + 8;
                if (uVar7 == uVar4) goto LAB_08a147ec;
              }
              psVar2 = psVar2 + 8;
            } while (uVar7 != uVar4);
            goto LAB_08a147ec;
          }
          uVar3 = *(undefined4 *)(psVar5 + 4);
        }
        thunk_FUN_08a13244(0,uVar3);
        thunk_FUN_08a13244(0,psVar5);
      }
      iVar6 = iVar6 + 1;
      psVar5 = psVar5 + 0x18;
    } while (param_2 != iVar6);
  }
  return param_1;
}

