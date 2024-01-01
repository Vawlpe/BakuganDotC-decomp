#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int ** FUN_088c70a8(int **param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int *local_28;
  
  local_28 = (int *)0x0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  piVar2 = (int *)FUN_089d7d74(0xc,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  if (piVar2 != (int *)0x0) {
    local_2c = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x80,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = local_2c;
    if (iVar3 != 0) {
      FUN_089f4f54(iVar3,0);
      iVar4 = iVar3;
    }
    piVar2[1] = iVar4;
    *(undefined *)(iVar4 + 4) = 1;
    local_30 = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = local_30;
    if (iVar3 != 0) {
      uVar1 = FUN_089be054(DAT_08ac520c,"particle_02.ptb");
      FUN_08823ae4(iVar3,uVar1);
      iVar4 = iVar3;
    }
    piVar2[2] = iVar4;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    local_34 = 0;
    iVar4 = FUN_089f5484(piVar2[1],&DAT_08a93228,&local_40,0);
    *piVar2 = iVar4;
    *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
    *(undefined4 *)(*piVar2 + 0xb4) = 0;
    *(undefined4 *)(*piVar2 + 0xb8) = 0;
    *(undefined4 *)(*piVar2 + 0xbc) = 0x3e4ccccd;
    FUN_089f4924(0x44200000,0x43f00000,*piVar2);
    *(uint *)(*piVar2 + 0xd0) = *(uint *)(*piVar2 + 0xd0) | 1;
    *(undefined4 *)(*piVar2 + 0xdc) = 1;
    *(undefined4 *)(*piVar2 + 300) = 0xdcff0004;
    local_28 = piVar2;
  }
  *param_1 = local_28;
  return param_1;
}

