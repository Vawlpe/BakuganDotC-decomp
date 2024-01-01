#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a14aac(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 != (short *)0x0) && (iVar5 = 0, psVar4 = param_1, 0 < param_2)) {
    do {
      while (sVar1 = *psVar4, *psVar4 = sVar1 + -1, (short)(sVar1 + -1) != 0) {
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 8;
        if (param_2 == iVar5) {
          return param_1;
        }
      }
      FUN_08a14aac(*(undefined4 *)(psVar4 + 2),1);
      psVar2 = *(short **)(psVar4 + 4);
      uVar6 = (uint)(ushort)psVar4[6];
      if ((psVar2 != (short *)0x0) && (uVar3 = 0, uVar6 != 0)) {
        do {
          while( true ) {
            sVar1 = *psVar2;
            uVar3 = uVar3 + 1;
            *psVar2 = sVar1 + -1;
            if ((short)(sVar1 + -1) != 0) break;
            FUN_08a14948(psVar2);
            thunk_FUN_08a13244(0,psVar2);
            psVar2 = psVar2 + 0x20;
            if (uVar6 == uVar3) goto LAB_08a14b80;
          }
          psVar2 = psVar2 + 0x20;
        } while (uVar6 != uVar3);
      }
LAB_08a14b80:
      iVar5 = iVar5 + 1;
      thunk_FUN_08a13244(0,psVar4);
      psVar4 = psVar4 + 8;
    } while (param_2 != iVar5);
  }
  return param_1;
}

