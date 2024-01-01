#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_089c02f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *ptr;
  
  ptr = (undefined4 *)0x0;
  iVar1 = FUN_089c0248();
  if (iVar1 != 0) {
    if (DAT_08ac5260 == 0) {
      ptr = (undefined4 *)0x0;
    }
    else {
      ptr = (undefined4 *)FUN_089d76ac(DAT_08ac5260);
    }
    if (ptr == (undefined4 *)0x0) {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      ptr = (undefined4 *)FUN_089d7d74(0x48,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
    }
    memset_jak((undefined *)ptr,0,0x48);
    if ((param_5 != '\0') && (DAT_08ac525c != 0)) {
      FUN_08a2df9c(DAT_08ac525c,ptr,param_2);
    }
    *ptr = param_2;
    ptr[1] = 0xffffffff;
    ptr[2] = param_3;
    ptr[3] = iVar1;
    *(undefined *)(ptr + 0xc) = 0;
    *(undefined *)((int)ptr + 0x31) = 0;
    *(undefined *)((int)ptr + 0x32) = 0;
    ptr[0xe] = 0xffffffff;
    ptr[0xf] = 0;
    ptr[0x10] = 0;
    uVar2 = 1;
    if (param_4 != '\0') {
      uVar2 = 0xffffffff;
    }
    ptr[0xd] = uVar2;
  }
  return ptr;
}

