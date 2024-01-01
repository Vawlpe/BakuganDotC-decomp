#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b2334(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar5 = 0;
  if (*(short *)(param_1 + 0x34) == 5) {
    *(undefined *)(param_1 + 0x3a) = 1;
    return 0;
  }
  iVar1 = FUN_089bf93c(500,1);
  if (iVar1 == 0) {
    iVar1 = FUN_088b21b8(param_1);
    if (iVar1 == 0) {
      if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
        if (*(short *)(param_1 + 0x34) != 4) {
          *(undefined *)(param_1 + 0x3a) = 1;
          return 0;
        }
        if (*(short *)(param_1 + 0x30) < 7) {
          *(undefined *)(param_1 + 0x3a) = 1;
        }
        else {
          if (*(short *)(param_1 + 0x30) < 10) {
            piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
            bVar4 = *(byte *)(*piVar2 + ((int)*(short *)(param_1 + 0x30) - 7U & 0xff) + 0x84);
            if ((bVar4 < 0xe) || (0x1f < bVar4)) {
              bVar4 = 0;
            }
            if (bVar4 == 0) {
              *(undefined *)(param_1 + 0x3a) = 1;
            }
            else {
              if (bVar4 != 0x20) {
                uVar3 = FUN_088b21f0(bVar4);
                iVar5 = FUN_088a7360(uVar3,param_1 + 0x20,(int)*(short *)(param_1 + 0x32));
                FUN_088ac984(iVar5,param_1);
                *(short *)(param_1 + 0x38) = (short)uVar3;
                *(undefined *)(param_1 + 0x3b) = 1;
                goto LAB_088b23f0;
              }
              *(undefined *)(param_1 + 0x3a) = 1;
            }
            return 0;
          }
          *(undefined *)(param_1 + 0x3a) = 1;
        }
        return 0;
      }
    }
    else {
      if (*(short *)(param_1 + 0x32) == 0x58) {
        *(undefined *)(param_1 + 0x3a) = 1;
        return 0;
      }
      if ((*(int *)(DAT_08ac58c4 + 0x20) == 2) && (*(short *)(param_1 + 0x34) == 0xc)) {
        FUN_089d8634();
        uVar3 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar1 = FUN_089d7d74(0x30,0,0);
        FUN_089d816c(uVar3);
        FUN_089d866c();
        iVar5 = 0;
        if (iVar1 != 0) {
          FUN_088a82d0(iVar1,param_1);
          iVar5 = iVar1;
        }
        iVar1 = DAT_08abd594;
        if (DAT_08abd594 == 0) {
          FUN_088a83b0(iVar5);
        }
        FUN_089d8984(iVar5,iVar1);
        *(undefined *)(param_1 + 0x3a) = 1;
        return 0;
      }
      FUN_088a94b4((int)*(short *)(param_1 + 0x32));
      local_40 = *(undefined4 *)(param_1 + 0x20);
      uStack_3c = *(undefined4 *)(param_1 + 0x24);
      uStack_38 = *(undefined4 *)(param_1 + 0x28);
      uStack_34 = *(undefined4 *)(param_1 + 0x2c);
      iVar5 = FUN_088acecc((int)*(short *)(param_1 + 0x32),&local_40,0);
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x3a) = 1;
      }
      else {
        *(undefined *)(param_1 + 0x3b) = 1;
        FUN_088ac984(iVar5,param_1);
        *(int *)(iVar5 + 0x28c) = (int)*(short *)(param_1 + 0x34);
      }
    }
  }
  else {
    iVar1 = FUN_088a94b4((int)*(short *)(param_1 + 0x32));
    if (iVar1 == 0xb) {
      if (*(short *)(param_1 + 0x32) == 0xce) {
        FUN_08823f5c(DAT_08ac5c70,0x34,param_1 + 0x20);
        *(undefined *)(param_1 + 0x3a) = 1;
      }
    }
    else {
      iVar5 = FUN_088b21b8(param_1);
      if (iVar5 == 0) {
        *(undefined *)(param_1 + 0x3a) = 1;
        return 0;
      }
      local_70 = *(undefined4 *)(param_1 + 0x20);
      uStack_6c = *(undefined4 *)(param_1 + 0x24);
      uStack_68 = *(undefined4 *)(param_1 + 0x28);
      uStack_64 = *(undefined4 *)(param_1 + 0x2c);
      iVar5 = FUN_088acecc((int)*(short *)(param_1 + 0x32),&local_70,0);
      if (iVar5 != 0) {
        FUN_088ac984(iVar5,param_1);
        *(undefined *)(param_1 + 0x3b) = 1;
      }
    }
  }
LAB_088b23f0:
  DAT_08b00b90 = DAT_08b00b90 + 1;
  return iVar5;
}

