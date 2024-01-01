#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08996bc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = param_1 + 0x1244;
  do {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0xf0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_08817708(iVar2,0,&PTR_s_wd_font16_08ac3d50);
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x1220) = iVar3;
    FUN_08817a90(iVar3,1);
    *(undefined4 *)(*(int *)(param_1 + 0x1220) + 0xa8) = 0x3f4ccccd;
    *(undefined4 *)(*(int *)(param_1 + 0x1220) + 0xe0) = 0x447a0000;
    *(undefined4 *)(*(int *)(param_1 + 0x1220) + 0xdc) = 0x3f088889;
    strcpy(iVar4,&DAT_08a9f08c);
    *(undefined4 *)(param_1 + 0x1224) = 0;
    *(undefined4 *)(param_1 + 0x1228) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x122c) = 0;
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x224;
    iVar4 = iVar4 + 0x224;
  } while (iVar5 < 3);
  return;
}

