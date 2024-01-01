#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089573b4(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ptr;
  int iVar4;
  int iVar5;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4e94;
  FUN_089569d4(param_1);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar3 = FUN_089d7d74(0x3b4,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  else {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar3 = FUN_089d7d74(0x5e0,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
  }
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  DAT_08ac0e60 = ptr;
  memset_jak(ptr,0,8);
  FUN_08909df4(param_1,1);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar4 = FUN_089edb58();
  if (iVar4 == 0) {
    FUN_089eda24(0);
    iVar4 = FUN_089edb80();
    *(undefined4 *)(iVar4 + 0x10) = 0x469c4000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_0880d308();
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_08956ef0(param_1);
  iVar5 = 0;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x5028) = 0;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar5 < 2);
  FUN_0890a560(param_1);
  *(undefined4 *)(param_1 + 0x52a0) = 0;
  iVar4 = FUN_0880d354();
  if (iVar4 != 0) {
    FUN_0895730c(param_1,1);
    iVar4 = FUN_0881b22c();
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x52a0);
    }
    else {
      uVar2 = _DONE_GetPtr_DAT_08AB0300();
      uVar2 = FUN_0881b66c(uVar2);
      *(undefined4 *)(param_1 + 0x52a0) = uVar2;
      iVar4 = *(int *)(param_1 + 0x52a0);
    }
    uVar1 = FUN_0895647c(param_1,1,*(undefined *)(param_1 + iVar4 + 0x4cdd));
    *(undefined *)(param_1 + 0x74) = uVar1;
    *(char *)(param_1 + 0x4cdb) = (char)*(undefined4 *)(param_1 + 0x52a0);
  }
  *(undefined *)(param_1 + 0x4cd8) = 0;
  return param_1;
}

