#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e3794(int param_1)

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
  int iVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar15 = *(int *)(param_1 + 0x130);
  puVar16 = (undefined4 *)(param_1 + 0x460);
  uVar3 = *(undefined4 *)(iVar15 + 0x84);
  uVar7 = *(undefined4 *)(iVar15 + 0x88);
  uVar11 = *(undefined4 *)(iVar15 + 0x8c);
  uVar17 = *(undefined4 *)(iVar15 + 0x90);
  uVar4 = *(undefined4 *)(iVar15 + 0x94);
  uVar8 = *(undefined4 *)(iVar15 + 0x98);
  uVar12 = *(undefined4 *)(iVar15 + 0x9c);
  uVar1 = *(undefined4 *)(iVar15 + 0xa0);
  uVar5 = *(undefined4 *)(iVar15 + 0xa4);
  uVar9 = *(undefined4 *)(iVar15 + 0xa8);
  uVar13 = *(undefined4 *)(iVar15 + 0xac);
  uVar2 = *(undefined4 *)(iVar15 + 0xb0);
  uVar6 = *(undefined4 *)(iVar15 + 0xb4);
  uVar10 = *(undefined4 *)(iVar15 + 0xb8);
  uVar14 = *(undefined4 *)(iVar15 + 0xbc);
  *puVar16 = *(undefined4 *)(iVar15 + 0x80);
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  *(undefined4 *)(param_1 + 0x468) = uVar7;
  *(undefined4 *)(param_1 + 0x46c) = uVar11;
  *(undefined4 *)(param_1 + 0x470) = uVar17;
  *(undefined4 *)(param_1 + 0x474) = uVar4;
  *(undefined4 *)(param_1 + 0x478) = uVar8;
  *(undefined4 *)(param_1 + 0x47c) = uVar12;
  *(undefined4 *)(param_1 + 0x480) = uVar1;
  *(undefined4 *)(param_1 + 0x484) = uVar5;
  *(undefined4 *)(param_1 + 0x488) = uVar9;
  *(undefined4 *)(param_1 + 0x48c) = uVar13;
  *(undefined4 *)(param_1 + 0x490) = uVar2;
  *(undefined4 *)(param_1 + 0x494) = uVar6;
  *(undefined4 *)(param_1 + 0x498) = uVar10;
  *(undefined4 *)(param_1 + 0x49c) = uVar14;
  *(float *)(param_1 + 0x494) = *(float *)(param_1 + 0x494) + 1.2;
  iVar15 = *(int *)(param_1 + 0x324);
  if (iVar15 < 1) {
    if ((-1 < iVar15) && (iVar15 = FUN_089bfa40(0xbb9), iVar15 != 0)) {
      FUN_088bae48(*(undefined4 *)(param_1 + 0x314));
      FUN_088c8eb8(iVar15 + 0x6c);
      *(undefined4 *)(param_1 + 0x80) = in_V72;
      *(undefined4 *)(param_1 + 0x84) = in_V76;
      *(undefined4 *)(param_1 + 0x88) = in_V7A;
      *(undefined4 *)(param_1 + 0x8c) = in_V7E;
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      uVar17 = FUN_088242dc(DAT_08ac5c70,0x4e,puVar16);
      *(undefined4 *)(param_1 + 0x4f0) = uVar17;
      uVar17 = FUN_088242dc(DAT_08ac5c70,0x4f,puVar16);
      *(undefined4 *)(param_1 + 0x4f4) = uVar17;
      uVar17 = FUN_088242dc(DAT_08ac5c70,0x50,puVar16);
      *(undefined4 *)(param_1 + 0x4f8) = uVar17;
      *(undefined4 *)(param_1 + 0x324) = 1;
    }
  }
  else if (iVar15 < 2) {
    uVar17 = atan2f(*(float *)(param_1 + 1000) - *(float *)(param_1 + 0x28),
                    *(float *)(param_1 + 0x3e0) - *(float *)(param_1 + 0x20));
    FUN_088defe8(uVar17,0x3f800000,0x3e0efa35,param_1);
  }
  if ((*(byte *)(DAT_08ac5928 + 3) & 2) == 0) {
    FUN_088bcc48(*(undefined4 *)(param_1 + 0x314));
    FUN_088e2788(param_1,0,0);
  }
  return;
}

