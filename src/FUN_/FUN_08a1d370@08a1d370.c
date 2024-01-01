#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a1d370(int param_1,int param_2,uint param_3,int param_4)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short *psVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      if ((param_3 & 0x201) == 0) {
        param_3 = 0;
      }
      FUN_08a14948();
      uVar2 = *(undefined2 *)(param_2 + 2);
      uVar16 = *(undefined4 *)(param_2 + 4);
      *(undefined *)(param_1 + 0x10) = *(undefined *)(param_2 + 0x10);
      uVar3 = *(undefined2 *)(param_2 + 8);
      uVar4 = *(undefined2 *)(param_2 + 10);
      *(undefined *)(param_1 + 0x11) = *(undefined *)(param_2 + 0x11);
      uVar17 = *(undefined4 *)(param_2 + 0xc);
      uVar1 = *(undefined *)(param_2 + 0x12);
      uVar5 = *(undefined2 *)(param_2 + 0x14);
      uVar6 = *(undefined2 *)(param_2 + 0x16);
      uVar9 = *(undefined4 *)(param_2 + 0x20);
      uVar10 = *(undefined4 *)(param_2 + 0x24);
      uVar11 = *(undefined4 *)(param_2 + 0x28);
      uVar12 = *(undefined4 *)(param_2 + 0x2c);
      uVar13 = *(undefined4 *)(param_2 + 0x30);
      uVar14 = *(undefined4 *)(param_2 + 0x34);
      uVar15 = *(undefined4 *)(param_2 + 0x38);
      *(undefined2 *)(param_1 + 2) = uVar2;
      *(undefined4 *)(param_1 + 4) = uVar16;
      *(undefined2 *)(param_1 + 8) = uVar3;
      *(undefined2 *)(param_1 + 10) = uVar4;
      *(undefined *)(param_1 + 0x12) = uVar1;
      *(undefined2 *)(param_1 + 0x14) = uVar5;
      *(undefined2 *)(param_1 + 0x16) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x24) = uVar10;
      *(undefined4 *)(param_1 + 0x28) = uVar11;
      *(undefined4 *)(param_1 + 0x2c) = uVar12;
      *(undefined4 *)(param_1 + 0x30) = uVar13;
      *(undefined4 *)(param_1 + 0x34) = uVar14;
      *(undefined4 *)(param_1 + 0xc) = uVar17;
      *(undefined4 *)(param_1 + 0x38) = uVar15;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
      if (param_3 == 0) {
        FUN_08a13120(0,uVar17);
        FUN_08a13120(0,*(undefined4 *)(param_1 + 0x28));
        psVar7 = *(short **)(param_1 + 4);
      }
      else {
        uVar9 = 0x40;
        if (*(int *)(param_2 + 0xc) == 0) {
          uVar9 = 0;
        }
        uVar10 = 0x10;
        if (*(int *)(param_2 + 0x28) == 0) {
          uVar10 = 0;
        }
        uVar11 = FUN_08a12ee4(param_4,0,0x40,uVar9);
        *(undefined4 *)(param_1 + 0xc) = uVar11;
        uVar11 = FUN_08a12ee4(param_4,0,0x10,uVar10);
        uVar12 = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)(param_1 + 0x28) = uVar11;
        memcpy_jak(*(undefined4 *)(param_1 + 0xc),uVar12,uVar9);
        memcpy_jak(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_2 + 0x28),uVar10);
        psVar7 = *(short **)(param_1 + 4);
      }
      if (psVar7 == (short *)0x0) {
        iVar8 = *(int *)(param_1 + 0x24);
      }
      else {
        *psVar7 = *psVar7 + 1;
        iVar8 = *(int *)(param_1 + 0x24);
      }
      if ((iVar8 + 1U & 0xffff0000) == 0) {
        iVar8 = 0;
      }
      FUN_08a1d09c(iVar8,1,0,param_4);
    }
    return param_1;
  }
  return 0;
}

