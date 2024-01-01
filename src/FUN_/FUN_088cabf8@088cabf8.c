#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cabf8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  
  if ((*(char *)(param_1 + 0x7a) != '\0') && (0 < *(int *)(param_1 + 0x7c))) {
    uVar1 = FUN_089f1308(param_2);
    uVar1 = FUN_089f1418(uVar1);
    FUN_089e35c4(*(int *)(param_1 + 0x10) + 0x60);
    puVar2 = (undefined4 *)FUN_089e3014(DAT_08ac5c8c,uVar1,0xffffffff);
    FUN_089e35c4(&DAT_08b007d0);
    *puVar2 = 0xc9000100;
    puVar2[1] = 0xc6000101;
    uVar1 = FUN_089f7110(*(undefined4 *)(param_1 + 0x124),puVar2 + 2,0);
    FUN_089f13c8(param_2,uVar1);
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x7c)) {
      pfVar3 = (float *)(param_1 + 0x90);
      do {
        local_34 = pfVar3[3];
        local_40 = *pfVar3 - 16.0;
        local_3c = pfVar3[1] - 14.0;
        local_38 = 0;
        FUN_088ca9b8(local_34,param_2,&local_40,param_1 + 0x110);
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 4;
      } while (iVar4 < *(int *)(param_1 + 0x7c));
    }
  }
  return;
}

