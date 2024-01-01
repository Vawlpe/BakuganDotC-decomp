#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08900014(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar2 = (undefined4 *)FUN_089d7d74(0x7a0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  puVar4 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_088fffb8(puVar2,param_1);
    puVar4 = puVar2;
  }
  *puVar4 = 0x67;
  FUN_089bfbf0(puVar4,100);
  iVar3 = FUN_089bfa40(100);
  if (iVar3 != 0) {
    FUN_0884bcc0();
  }
  return puVar4;
}

