#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2557c(int param_1,int param_2,uint param_3,int param_4)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      iVar8 = FUN_08a247b8(param_2,1);
      if (iVar8 == 0) {
        param_3 = 0;
      }
      FUN_08a127e0(param_1);
      uVar14 = *(undefined4 *)(param_2 + 0x28);
      uVar13 = *(undefined4 *)(param_2 + 4);
      *(undefined *)(param_1 + 0x1d) = *(undefined *)(param_2 + 0x1d);
      uVar12 = *(undefined4 *)(param_2 + 0x14);
      uVar1 = *(undefined *)(param_2 + 0x18);
      *(undefined *)(param_1 + 0x1e) = *(undefined *)(param_2 + 0x1e);
      uVar2 = *(undefined *)(param_2 + 0x19);
      uVar6 = *(undefined2 *)(param_2 + 0x1a);
      uVar3 = *(undefined *)(param_2 + 0x1c);
      uVar4 = *(undefined *)(param_2 + 0x1f);
      uVar15 = *(undefined4 *)(param_2 + 0x2c);
      uVar17 = *(undefined4 *)(param_2 + 0x20);
      uVar18 = *(undefined4 *)(param_2 + 0x24);
      uVar7 = *(undefined2 *)(param_2 + 2);
      uVar9 = *(undefined4 *)(param_2 + 8);
      uVar10 = *(undefined4 *)(param_2 + 0xc);
      uVar11 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = uVar12;
      *(undefined *)(param_1 + 0x18) = uVar1;
      *(undefined *)(param_1 + 0x19) = uVar2;
      *(undefined2 *)(param_1 + 0x1a) = uVar6;
      *(undefined *)(param_1 + 0x1c) = uVar3;
      *(undefined *)(param_1 + 0x1f) = uVar4;
      *(undefined4 *)(param_1 + 0x28) = uVar14;
      *(undefined4 *)(param_1 + 4) = uVar13;
      *(undefined2 *)(param_1 + 2) = uVar7;
      *(undefined4 *)(param_1 + 8) = uVar9;
      *(undefined4 *)(param_1 + 0xc) = uVar10;
      *(undefined4 *)(param_1 + 0x10) = uVar11;
      *(undefined4 *)(param_1 + 0x20) = uVar17;
      *(undefined4 *)(param_1 + 0x24) = uVar18;
      *(undefined4 *)(param_1 + 0x2c) = uVar15;
      uVar16 = param_3 | 2;
      if (param_3 == 0) {
        uVar16 = 0;
      }
      uVar1 = *(undefined *)(param_2 + 0x34);
      uVar2 = *(undefined *)(param_2 + 0x36);
      *(undefined *)(param_1 + 0x32) = *(undefined *)(param_2 + 0x32);
      uVar16 = uVar16 & 0xfffffffe;
      *(undefined *)(param_1 + 0x34) = uVar1;
      *(undefined *)(param_1 + 0x36) = uVar2;
      uVar1 = *(undefined *)(param_2 + 0x35);
      uVar2 = *(undefined *)(param_2 + 0x37);
      uVar3 = *(undefined *)(param_2 + 0x30);
      *(undefined *)(param_1 + 0x33) = *(undefined *)(param_2 + 0x33);
      *(undefined *)(param_1 + 0x35) = uVar1;
      *(undefined *)(param_1 + 0x37) = uVar2;
      *(undefined *)(param_1 + 0x30) = uVar3;
      FUN_08a0ffa4(1,uVar13);
      FUN_08a0ffa4(1,*(undefined4 *)(param_1 + 8));
      uVar9 = FUN_08a2541c(*(undefined4 *)(param_2 + 0xc),1,uVar16,param_4);
      uVar10 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0xc) = uVar9;
      uVar9 = FUN_08a252b0(uVar10,1,uVar16,param_4);
      bVar5 = *(byte *)(param_2 + 0x18);
      uVar10 = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(param_1 + 0x10) = uVar9;
      uVar9 = FUN_08a24988(uVar10,bVar5 + 1,uVar16,param_4);
      iVar8 = *(int *)(param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x14) = uVar9;
      if ((*(int *)(param_1 + 0xc) != iVar8) ||
         (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
        FUN_08a10a8c(param_1,0);
        FUN_08a10a34(param_1,0);
      }
    }
    return param_1;
  }
  return 0;
}

