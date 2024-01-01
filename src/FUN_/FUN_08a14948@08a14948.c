#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a14948(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  short *psVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  psVar3 = *(short **)(param_1 + 4);
  if (psVar3 == (short *)0x0) {
    psVar3 = *(short **)(param_1 + 0x24);
  }
  else {
    sVar1 = *psVar3;
    *psVar3 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_08a14948(psVar3);
      thunk_FUN_08a13244(0,psVar3);
      psVar3 = *(short **)(param_1 + 0x24);
    }
    else {
      psVar3 = *(short **)(param_1 + 0x24);
    }
  }
  if (((int)psVar3 + 1U & 0xffff0000) != 0) {
    if (psVar3 == (short *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_08a1499c;
    }
    sVar1 = *psVar3;
    *psVar3 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      FUN_08a12888(*(undefined4 *)(psVar3 + 2));
      thunk_FUN_08a13244(0,psVar3);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      goto LAB_08a1499c;
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0x28);
LAB_08a1499c:
  thunk_FUN_08a13244(0,uVar2);
  thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0xc));
  return param_1;
}

