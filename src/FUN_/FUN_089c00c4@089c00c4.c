#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_089c00c4(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4,
            undefined param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)0x0;
  iVar1 = FUN_089c0248();
  if (iVar1 != 0) {
    if (DAT_08ac5260 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_089d76ac(DAT_08ac5260);
    }
    if (puVar2 == (undefined4 *)0x0) {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      puVar2 = (undefined4 *)FUN_089d7d74(0x48,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
    }
    memset_jak(puVar2,0,0x48);
    FUN_08a2df9c(DAT_08ac525c,puVar2,param_2);
    *puVar2 = param_2;
    puVar2[1] = 0xffffffff;
    puVar2[2] = puVar2 + 4;
    puVar2[3] = iVar1;
    puVar2[4] = *param_3;
    puVar2[5] = param_3[1];
    uVar3 = param_3[2];
    puVar2[10] = 0;
    puVar2[6] = uVar3;
    puVar2[0xb] = 0;
    *(undefined *)(puVar2 + 0xc) = 0;
    *(undefined *)((int)puVar2 + 0x31) = 0;
    *(undefined *)((int)puVar2 + 0x32) = param_5;
    puVar2[0xe] = 0xffffffff;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    uVar3 = 1;
    if (param_4 != '\0') {
      uVar3 = 0xffffffff;
    }
    puVar2[0xd] = uVar3;
  }
  return puVar2;
}

