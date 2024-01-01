#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e0d94(int param_1)

{
  undefined auVar1 [64];
  int *piVar2;
  int iVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088dc684();
  *(undefined **)(param_1 + 0x14) = &DAT_08af38e4;
  *(undefined *)(param_1 + 0x3f0) = 0;
  *(undefined *)(param_1 + 0x540) = 0xff;
  *(undefined *)(param_1 + 0x3a0) = 0;
  iVar3 = param_1 + 0x1b0;
  if (DAT_08ac5c70 != 0) {
    FUN_08824658(DAT_08ac5c70,0x26,iVar3);
    FUN_08824658(DAT_08ac5c70,0x44,iVar3);
    FUN_08824658(DAT_08ac5c70,10,iVar3);
  }
  *(undefined *)(param_1 + 0x3a1) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined *)(param_1 + 0x3ac) = 0;
  *(undefined *)(param_1 + 0x3ad) = 0;
  *(undefined *)(param_1 + 0x3ae) = 0;
  *(undefined *)(param_1 + 0x3af) = 0;
  *(undefined *)(param_1 + 0x3b0) = 0;
  *(undefined *)(param_1 + 0x3b1) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x414) = 0;
  piVar2 = (int *)FUN_0880cc48();
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*piVar2 + 0x464);
  *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
  *(undefined *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  *(undefined *)(param_1 + 0x3d8) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  *(undefined4 *)(param_1 + 0x418) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  auVar1 = vmidt_q();
  *(int *)(param_1 + 0x420) = auVar1._0_4_;
  *(int *)(param_1 + 0x424) = auVar1._16_4_;
  *(int *)(param_1 + 0x428) = auVar1._32_4_;
  *(int *)(param_1 + 0x42c) = auVar1._48_4_;
  *(int *)(param_1 + 0x430) = auVar1._4_4_;
  *(int *)(param_1 + 0x434) = auVar1._20_4_;
  *(int *)(param_1 + 0x438) = auVar1._36_4_;
  *(int *)(param_1 + 0x43c) = auVar1._52_4_;
  *(int *)(param_1 + 0x440) = auVar1._8_4_;
  *(int *)(param_1 + 0x444) = auVar1._24_4_;
  *(int *)(param_1 + 0x448) = auVar1._40_4_;
  *(int *)(param_1 + 0x44c) = auVar1._56_4_;
  *(int *)(param_1 + 0x450) = auVar1._12_4_;
  *(int *)(param_1 + 0x454) = auVar1._28_4_;
  *(int *)(param_1 + 0x458) = auVar1._44_4_;
  *(int *)(param_1 + 0x45c) = auVar1._60_4_;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined *)(param_1 + 0x4a8) = 0;
  *(undefined *)(param_1 + 0x4a9) = 1;
  *(undefined *)(param_1 + 0x4aa) = 0;
  *(undefined4 *)(param_1 + 0x4b0) = in_V72;
  *(undefined4 *)(param_1 + 0x4b4) = in_V76;
  *(undefined4 *)(param_1 + 0x4b8) = in_V7A;
  *(undefined4 *)(param_1 + 0x4bc) = in_V7E;
  *(undefined4 *)(param_1 + 0x4c0) = in_V72;
  *(undefined4 *)(param_1 + 0x4c4) = in_V76;
  *(undefined4 *)(param_1 + 0x4c8) = in_V7A;
  *(undefined4 *)(param_1 + 0x4cc) = in_V7E;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined *)(param_1 + 0x4ab) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = in_V72;
  *(undefined4 *)(param_1 + 0x4e4) = in_V76;
  *(undefined4 *)(param_1 + 0x4e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x4ec) = in_V7E;
  *(undefined4 *)(param_1 + 0x4a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined4 *)(param_1 + 0x520) = in_V72;
  *(undefined4 *)(param_1 + 0x524) = in_V76;
  *(undefined4 *)(param_1 + 0x528) = in_V7A;
  *(undefined4 *)(param_1 + 0x52c) = in_V7E;
  iVar3 = FUN_088be254();
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  else {
    FUN_088e3cf8(param_1);
    *(undefined4 *)(param_1 + 0x544) = 0;
  }
  *(undefined2 *)(param_1 + 0x410) = 0;
  *(undefined4 *)(param_1 + 0x3f4) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0;
  return param_1;
}

