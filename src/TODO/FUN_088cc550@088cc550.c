#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088cc550(undefined4 param_1,short param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_40 = 0x42e00000;
  local_3c = 0x43480000;
  local_38 = 0;
  local_34 = 0;
  DAT_08b00f00 = 0x42e00000;
  DAT_08b00f04 = 0x43480000;
  DAT_08b00f08 = 0;
  DAT_08b00f0c = 0;
  iVar4 = FUN_088cc218(param_1,&local_40,&PTR_s_wd_font16_08abea34,&DAT_08abea2c);
  iVar5 = *(int *)(iVar4 + 0x10);
  FUN_08817a90(iVar5,1);
  *(undefined4 *)(iVar4 + 0x54) = 0x41800000;
  *(undefined *)(iVar4 + 0x79) = 1;
  *(undefined4 *)(iVar4 + 0x68) = 0x447a0000;
  FUN_088cc3a8(iVar4,(int)param_2);
  if (DAT_08abea25 != '\0') {
    FUN_088cc444(iVar4);
  }
  uVar3 = DAT_08b0019c;
  uVar2 = DAT_08b00198;
  uVar1 = DAT_08b00194;
  if (DAT_08abea27 == -1) {
    *(undefined4 *)(iVar5 + 0xb0) = DAT_08b00190;
    *(undefined4 *)(iVar5 + 0xb4) = uVar1;
    *(undefined4 *)(iVar5 + 0xb8) = uVar2;
    *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    uVar3 = DAT_08b0019c;
    uVar2 = DAT_08b00198;
    uVar1 = DAT_08b00194;
    *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar5 + 0xc4) = uVar1;
    *(undefined4 *)(iVar5 + 200) = uVar2;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    iVar5 = *(int *)(iVar4 + 0x20c);
  }
  else {
    FUN_088cc4cc(iVar4);
    uVar3 = DAT_08b0019c;
    uVar2 = DAT_08b00198;
    uVar1 = DAT_08b00194;
    *(undefined4 *)(iVar5 + 0xb0) = DAT_08b00190;
    *(undefined4 *)(iVar5 + 0xb4) = uVar1;
    *(undefined4 *)(iVar5 + 0xb8) = uVar2;
    *(undefined4 *)(iVar5 + 0xbc) = uVar3;
    uVar3 = DAT_08b0019c;
    uVar2 = DAT_08b00198;
    uVar1 = DAT_08b00194;
    *(undefined4 *)(iVar5 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar5 + 0xc4) = uVar1;
    *(undefined4 *)(iVar5 + 200) = uVar2;
    *(undefined4 *)(iVar5 + 0xcc) = uVar3;
    iVar5 = *(int *)(iVar4 + 0x20c);
  }
  *(uint *)(*(int *)(iVar5 + 0x14) + 0xd0) = *(uint *)(*(int *)(iVar5 + 0x14) + 0xd0) | 1;
  FUN_089f4a90(0,0x40000000,*(undefined4 *)(*(int *)(iVar4 + 0x20c) + 0x14));
  iVar5 = *(int *)(*(int *)(iVar4 + 0x20c) + 0x18);
  *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
  return iVar4;
}

