#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a25f4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088a24b0();
  if (*(int *)(param_1 + 0x32c) == 0) {
    FUN_089d8634();
    uVar15 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar16 = FUN_089d7d74(400,0,0);
    FUN_089d816c(uVar15);
    FUN_089d866c();
    iVar17 = 0;
    if (iVar16 != 0) {
      FUN_0881a358(iVar16,1);
      iVar17 = iVar16;
    }
    *(int *)(param_1 + 0x32c) = iVar17;
  }
  FUN_08860454(*(undefined4 *)(param_1 + 800));
  *(undefined *)(*(int *)(param_1 + 800) + 0x680) = 1;
  *(undefined4 *)(param_1 + 0x350) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0x442f0000;
  *(undefined4 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0x43660000;
  *(undefined4 *)(param_1 + 0x35c) = 0x474ea400;
  uVar15 = vdot_t(*(undefined (*) [12])(param_1 + 0x360),*(undefined (*) [12])(param_1 + 0x360));
  uVar15 = vsqrt_s(uVar15);
  *(undefined4 *)(param_1 + 0x36c) = uVar15;
  FUN_0881a520(*(undefined4 *)(param_1 + 0x32c),param_1 + 0x330,9,param_1,0);
  iVar17 = *(int *)(param_1 + 800);
  uVar3 = *(undefined4 *)(iVar17 + 0x224);
  uVar7 = *(undefined4 *)(iVar17 + 0x228);
  uVar11 = *(undefined4 *)(iVar17 + 0x22c);
  uVar15 = *(undefined4 *)(iVar17 + 0x230);
  uVar4 = *(undefined4 *)(iVar17 + 0x234);
  uVar8 = *(undefined4 *)(iVar17 + 0x238);
  uVar12 = *(undefined4 *)(iVar17 + 0x23c);
  uVar1 = *(undefined4 *)(iVar17 + 0x240);
  uVar5 = *(undefined4 *)(iVar17 + 0x244);
  uVar9 = *(undefined4 *)(iVar17 + 0x248);
  uVar13 = *(undefined4 *)(iVar17 + 0x24c);
  uVar2 = *(undefined4 *)(iVar17 + 0x250);
  uVar6 = *(undefined4 *)(iVar17 + 0x254);
  uVar10 = *(undefined4 *)(iVar17 + 600);
  uVar14 = *(undefined4 *)(iVar17 + 0x25c);
  *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(iVar17 + 0x220);
  *(undefined4 *)(param_1 + 0x3a4) = uVar3;
  *(undefined4 *)(param_1 + 0x3a8) = uVar7;
  *(undefined4 *)(param_1 + 0x3ac) = uVar11;
  *(undefined4 *)(param_1 + 0x3b0) = uVar15;
  *(undefined4 *)(param_1 + 0x3b4) = uVar4;
  *(undefined4 *)(param_1 + 0x3b8) = uVar8;
  *(undefined4 *)(param_1 + 0x3bc) = uVar12;
  *(undefined4 *)(param_1 + 0x3c0) = uVar1;
  *(undefined4 *)(param_1 + 0x3c4) = uVar5;
  *(undefined4 *)(param_1 + 0x3c8) = uVar9;
  *(undefined4 *)(param_1 + 0x3cc) = uVar13;
  *(undefined4 *)(param_1 + 0x3d0) = uVar2;
  *(undefined4 *)(param_1 + 0x3d4) = uVar6;
  *(undefined4 *)(param_1 + 0x3d8) = uVar10;
  *(undefined4 *)(param_1 + 0x3dc) = uVar14;
  iVar17 = *(int *)(param_1 + 0x32c);
  *(undefined4 **)(iVar17 + 0x110) = (undefined4 *)(param_1 + 0x3a0);
  *(undefined *)(iVar17 + 0x10c) = 1;
  iVar17 = *(int *)(*(int *)(param_1 + 0x32c) + 0xf4);
  *(undefined4 *)(iVar17 + 0x10) = in_V72;
  *(undefined4 *)(iVar17 + 0x14) = in_V76;
  *(undefined4 *)(iVar17 + 0x18) = in_V7A;
  *(undefined4 *)(iVar17 + 0x1c) = in_V7E;
  *(undefined *)(*(int *)(param_1 + 0x32c) + 0x104) = 0;
  *(undefined *)(*(int *)(param_1 + 0x32c) + 0x10c) = 1;
  FUN_088a250c(param_1);
  return;
}

