#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888b7d0(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08b00890 != 0) {
    iVar2 = *(int *)(DAT_08b00890 + 0x24);
    iVar1 = DAT_08b00890;
    while( true ) {
      *(float *)(iVar1 + 0x80) = param_1;
      iVar3 = *(int *)(iVar1 + 4);
      *(float *)(iVar1 + 0x84) = *(float *)(iVar2 + 0x6c) * param_1;
      if (iVar3 == 0) break;
      iVar2 = *(int *)(iVar3 + 0x24);
      iVar1 = iVar3;
    }
  }
  return;
}

