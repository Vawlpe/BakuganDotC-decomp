#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d6c74(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float local_14;
  
  if (DAT_08af82a0 == 0) {
    DAT_08af82a0 = 1;
    DAT_08af82b0 = 0;
    DAT_08af82b4 = 0;
    DAT_08af82b8 = 0x43f00000;
    DAT_08af82bc = 0x43880000;
  }
  FUN_089f2178(0x4479c000);
  iVar2 = FUN_089d5814();
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x10);
  }
  else {
    uVar3 = FUN_089d5830();
    FUN_089d5ddc(uVar3);
    cVar1 = *(char *)(param_1 + 0x10);
  }
  if (cVar1 != '\0') {
    iVar2 = FUN_089edb80();
    uVar3 = FUN_089f2178(*(float *)(iVar2 + 0x10) + 10.0);
    local_20 = *DAT_08ac5934;
    uStack_1c = DAT_08ac5934[1];
    uStack_18 = DAT_08ac5934[2];
    local_14 = 1.0 - *(float *)(param_1 + 0x18);
    FUN_089f2c2c(uVar3,&DAT_08af82b0,&local_20);
  }
  return;
}

