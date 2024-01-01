#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a46cc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((DAT_08b010a4 != 0.0) && (DAT_08b010a0 != DAT_08b0109c)) {
    iVar4 = 0;
    iVar5 = DAT_08b010b8;
    if (0.0 < DAT_08b010a4) {
      do {
        iVar4 = iVar4 + 1;
        *(float *)(iVar5 + 0xbc) = DAT_08b0109c;
        iVar5 = *(int *)(iVar5 + 4);
      } while ((float)iVar4 < DAT_08b010a4);
    }
    DAT_08b010a0 = DAT_08b0109c;
  }
  iVar5 = DAT_08b01098;
  uVar2 = DAT_08b0019c;
  uVar1 = DAT_08b00198;
  uVar3 = DAT_08b00194;
  *(undefined4 *)(DAT_08b01098 + 0xc0) = DAT_08b00190;
  *(undefined4 *)(iVar5 + 0xc4) = uVar3;
  *(undefined4 *)(iVar5 + 200) = uVar1;
  *(undefined4 *)(iVar5 + 0xcc) = uVar2;
  iVar5 = DAT_08b01098;
  uVar3 = FUN_089f2178(0x459c4000);
  FUN_089f5084(iVar5,uVar3);
  return;
}

