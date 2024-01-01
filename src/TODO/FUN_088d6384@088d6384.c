#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d6384(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_088e1948();
  if (iVar1 != 0) {
    local_40 = *(undefined4 *)(param_1 + 0x180);
    uStack_3c = *(undefined4 *)(param_1 + 0x184);
    uStack_38 = *(undefined4 *)(param_1 + 0x188);
    uStack_34 = *(undefined4 *)(param_1 + 0x18c);
    iVar1 = FUN_088d940c(0x41840000,param_1,&local_40);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 400) == 1) {
        bVar3 = *(byte *)(param_1 + 0x15f);
      }
      else {
        FUN_089e0860(param_1);
        FUN_089df3b0(0x3e4ccccd,param_1,param_1 + 0x1d4,0);
        (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                  (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        *(undefined4 *)(param_1 + 400) = 1;
        bVar3 = *(byte *)(param_1 + 0x15f);
      }
      *(byte *)(param_1 + 0x15f) = bVar3 & 0xfd;
    }
    else {
      local_30 = *(undefined4 *)(param_1 + 0x20);
      uStack_2c = *(undefined4 *)(param_1 + 0x24);
      uStack_28 = *(undefined4 *)(param_1 + 0x28);
      uStack_24 = *(undefined4 *)(param_1 + 0x2c);
      iVar1 = FUN_088d95a4(param_1);
      if (iVar1 == 1) {
        if (*(int *)(param_1 + 400) == 0) {
          bVar3 = *(byte *)(param_1 + 0x15f);
        }
        else {
          FUN_089e0860(param_1);
          FUN_089df3b0(0x3e4ccccd,param_1,param_1 + 0x194,0);
          (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                    (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
          iVar1 = _DONE_NotZero_DAT_08AC5874();
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 400) = 0;
          }
          else {
            uVar2 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar2,0x2c00042,0,0);
            *(undefined4 *)(param_1 + 400) = 0;
          }
          bVar3 = *(byte *)(param_1 + 0x15f);
        }
        *(byte *)(param_1 + 0x15f) = bVar3 | 2;
      }
    }
  }
  return;
}

