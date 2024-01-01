#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089be3b4(undefined *param_1,int param_2,int *param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined local_120 [256];
  
  if (param_4 == '\0') {
    local_120[0] = 0;
    FUN_089fb5b0(param_1,local_120);
    param_1 = local_120;
  }
  uVar1 = zz_sceIoOpen(param_1,1,0x1ff);
  iVar2 = zz_sceIoLseek(uVar1);
  if (iVar2 == 0) {
    zz_sceIoClose(uVar1);
  }
  zz_sceIoLseek(uVar1);
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_2 == 0) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    param_2 = FUN_089d7d74(iVar2,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    if (param_2 == 0) {
      zz_sceIoClose(uVar1);
    }
  }
  zz_sceIoRead(uVar1,param_2,iVar2);
  zz_sceIoClose(uVar1);
  return param_2;
}

