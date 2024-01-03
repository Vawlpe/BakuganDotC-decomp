#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d23f4(int param_1)

{
  undefined auVar1 [12];
  uint uVar2;
  undefined auVar3 [12];
  undefined auVar4 [12];
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 in_V7D;
  undefined4 uVar10;
  
  uVar2 = *(uint *)(DAT_08ac5c90 + 0x70);
  uVar9 = *(undefined4 *)(DAT_08ac5c90 + 0x78);
  auVar4._4_4_ = 0;
  auVar4._0_4_ = uVar2;
  auVar4._8_4_ = uVar9;
  auVar3._4_4_ = 0;
  auVar3._0_4_ = uVar2;
  auVar3._8_4_ = uVar9;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = uVar2;
  auVar1._8_4_ = uVar9;
  uVar9 = vdot_t(auVar1,auVar3);
  uVar10 = vcmp_s(8,uVar9,uVar2);
  vrsq_s(uVar9);
  uVar9 = vcmovt_s(in_V7D,(byte)uVar10 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar4,uVar9);
  *(int *)(param_1 + 0xc0) = auVar1._0_4_;
  *(int *)(param_1 + 0xc4) = auVar1._8_4_;
  iVar5 = FUN_088e1480(*(undefined4 *)(param_1 + 0x74));
  if (iVar5 == 0) {
    iVar5 = FUN_088e1488(*(undefined4 *)(param_1 + 0x74));
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa8);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      goto LAB_088d24a4;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1c);
  }
  *(uint *)(*(int *)(iVar5 + 0xa8) + 0xd0) = *(uint *)(*(int *)(iVar5 + 0xa8) + 0xd0) | 1;
LAB_088d24a4:
  iVar5 = FUN_088e1488(*(undefined4 *)(param_1 + 0x74));
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x114);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  }
  iVar5 = FUN_088e1480(*(undefined4 *)(param_1 + 0x74));
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x98);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  }
  iVar5 = 0;
  if (*(int *)(DAT_08ac58c4 + 4) != 0x20) {
    iVar5 = FUN_088e1490(*(undefined4 *)(param_1 + 0x74));
    if (iVar5 != 0) {
      if (*(char *)(*(int *)(param_1 + 0x74) + 0x3af) == '\0') {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x11c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa0);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x118);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x11c);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa8);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0xa0);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      }
    }
    FUN_088d0a0c(param_1);
    FUN_088d0b94(param_1);
    FUN_088d0e54(param_1);
    piVar6 = (int *)DONE_Get_DAT_08AAC9E0();
    iVar5 = (int)*(char *)(*piVar6 + 0x410);
    if (iVar5 < 10) {
      FUN_089f4a90((float)(iVar5 / 5),(float)(iVar5 % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28));
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
           (*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60) + 6.0) - 2.0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    }
    else {
      FUN_089f4a90((float)((iVar5 / 10) / 5),(float)((iVar5 / 10) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24));
      FUN_089f4a90((float)((iVar5 % 10) / 5),(float)((iVar5 % 10) % 5),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x28));
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x28) + 0x60) =
           *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x24) + 0x60) + 12.0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 0x24);
      *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    }
    FUN_088d1708(param_1);
    FUN_088d1adc(param_1);
    FUN_088d21b8(param_1);
    FUN_088d2380(param_1);
    FUN_088c8ed8(param_1 + 0x6c);
    return;
  }
  iVar7 = 0;
  do {
    if (((iVar5 != 0x2a) && (iVar5 != 0x26)) && (iVar5 != 0x45)) {
      iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 4;
  } while (iVar5 < 0x48);
  FUN_088d065c(param_1);
  return;
}

