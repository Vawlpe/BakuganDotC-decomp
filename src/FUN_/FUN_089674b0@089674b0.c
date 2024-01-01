#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089674b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  puVar6 = (uint *)(param_1 + 0x5200);
  uVar5 = 0;
  iVar7 = param_1;
  do {
    uVar2 = puVar6[6];
    if ((int)uVar2 < 1) {
      if ((int)uVar2 < 0) {
        uVar2 = puVar6[8];
      }
      else if (*(int *)(iVar7 + 0x4d08) == 0) {
        uVar2 = puVar6[8];
      }
      else {
        uVar2 = *puVar6;
        if (((int)uVar2 < 1) || (iVar1 = 0, 0x14 < (int)uVar2)) goto LAB_0896764c;
        uVar3 = 0;
        iVar4 = param_1;
        if (0 < (int)uVar5) {
          do {
            if (*(uint *)(iVar4 + 0x5200) == uVar2) {
              uVar3 = uVar5;
            }
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + 0x28;
          } while (iVar1 < (int)uVar5);
        }
        if (puVar6[7] == uVar3) {
          uVar2 = puVar6[8];
        }
        else {
          puVar6[7] = uVar3;
          FUN_0885de00(*(undefined4 *)(iVar7 + 0x4d08));
          uVar2 = puVar6[8];
        }
      }
    }
    else {
      uVar3 = uVar5 & 0xff;
      if ((int)uVar2 < 2) {
        FUN_0895bc58(param_1,uVar3);
        FUN_0895b6ec(param_1,1,uVar3,*puVar6 & 0xff);
        FUN_0895e1bc(param_1,uVar3,0);
        uVar2 = 0;
        if (*puVar6 != 0) {
          uVar2 = puVar6[6] + 1;
        }
        puVar6[6] = uVar2;
      }
      else {
        if (2 < (int)uVar2) {
          uVar2 = puVar6[8];
          goto LAB_08967650;
        }
        uVar2 = uVar5 & 0xff;
        FUN_0895b6ec(param_1,0,uVar2,*puVar6 & 0xff);
        FUN_0895b894(param_1,uVar2,*puVar6 & 0xff);
        *(undefined4 *)(*(int *)(iVar7 + 0x4d08) + 0x6c) = 0x3f800000;
        FUN_0895e1bc(param_1,uVar2,*puVar6 & 0xff);
        puVar6[6] = 0;
      }
LAB_0896764c:
      uVar2 = puVar6[8];
    }
LAB_08967650:
    if ((int)uVar2 < 2) {
      if ((int)uVar2 < 0) {
        uVar2 = puVar6[9];
      }
      else if ((int)uVar2 < 1) {
        if (puVar6[4] == 0x18) {
          puVar6[8] = uVar2 + 1;
          FUN_0895ed38(param_1,0,uVar5 & 0xff);
          uVar2 = puVar6[9];
        }
        else {
LAB_0896770c:
          uVar2 = puVar6[9];
        }
      }
      else {
        iVar1 = FUN_0895edd0(param_1,0,uVar5 & 0xff);
        if (iVar1 != 0) {
          puVar6[8] = puVar6[8] + 1;
          goto LAB_0896770c;
        }
        uVar2 = puVar6[9];
      }
    }
    else {
      if ((int)uVar2 < 3) {
        if (puVar6[4] != 0x18) {
          puVar6[8] = uVar2 + 1;
        }
        goto LAB_0896770c;
      }
      if ((int)uVar2 < 4) {
        iVar1 = FUN_0895edd0(param_1,1,uVar5 & 0xff);
        if (iVar1 != 0) {
          puVar6[8] = 0;
          goto LAB_0896770c;
        }
        uVar2 = puVar6[9];
      }
      else {
        uVar2 = puVar6[9];
      }
    }
    if ((int)uVar2 < 2) {
      if (-1 < (int)uVar2) {
        if ((int)uVar2 < 1) {
          if (puVar6[4] == 0x18) {
            FUN_08961198(param_1,uVar5 & 0xff);
            puVar6[9] = puVar6[9] + 1;
          }
        }
        else {
          iVar1 = FUN_089613a4(param_1,uVar5 & 0xff);
          if (iVar1 == 1) {
            puVar6[9] = puVar6[9] + 1;
          }
        }
      }
    }
    else if ((int)uVar2 < 3) {
      if (puVar6[4] != 0x18) {
        puVar6[9] = uVar2 + 1;
      }
    }
    else if ((int)uVar2 < 4) {
      FUN_08961574(param_1,uVar5 & 0xff);
      puVar6[9] = 0;
    }
    uVar5 = uVar5 + 1;
    puVar6 = puVar6 + 10;
    iVar7 = iVar7 + 4;
    if (3 < (int)uVar5) {
      return;
    }
  } while( true );
}

