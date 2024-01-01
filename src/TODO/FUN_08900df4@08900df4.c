#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08900df4(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7E;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x4d8) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x668)) {
  case 0:
    *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
  case 1:
    if (*(char *)(*(int *)(param_1 + 0x4d4) + 0x57) != '\0') {
      *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
LAB_08900e88:
      if (*(int *)(param_1 + 0x4dc) == 0) {
        *(undefined4 *)(param_1 + 0x668) = 10;
      }
      else {
        iVar1 = FUN_0880ddb4(0xffffffff);
        uVar6 = 0x67;
        if (iVar1 == 10) {
          uVar6 = 0x68;
        }
        *(undefined4 *)(param_1 + 0x3a4) = uVar6;
        *(int *)(param_1 + 0x668) = *(int *)(param_1 + 0x668) + 1;
      }
    }
    break;
  case 2:
    goto LAB_08900e88;
  case 3:
    FUN_088ff3f4(&local_c0);
    local_b0 = local_c0;
    uStack_ac = uStack_bc;
    uStack_a8 = uStack_b8;
    local_a4 = 0x3fc90fdb;
    FUN_088b87bc(*(undefined4 *)(param_1 + 0x4d0));
    iVar1 = *(int *)(param_1 + 0x4d0);
    *(undefined4 *)(iVar1 + 0x20) = local_b0;
    *(undefined4 *)(iVar1 + 0x24) = uStack_ac;
    *(undefined4 *)(iVar1 + 0x28) = uStack_a8;
    *(undefined4 *)(iVar1 + 0x2c) = local_a4;
    iVar1 = *(int *)(param_1 + 0x4d0);
    *(undefined4 *)(iVar1 + 0x80) = in_V72;
    *(undefined4 *)(iVar1 + 0x84) = in_V76;
    *(undefined4 *)(iVar1 + 0x88) = in_V7A;
    *(undefined4 *)(iVar1 + 0x8c) = in_V7E;
    iVar1 = *(int *)(*(int *)(param_1 + 0x4d0) + 0x130);
    *(undefined4 *)(iVar1 + 0xb0) = local_b0;
    *(undefined4 *)(iVar1 + 0xb4) = uStack_ac;
    *(undefined4 *)(iVar1 + 0xb8) = uStack_a8;
    *(undefined4 *)(iVar1 + 0xbc) = local_a4;
    FUN_088b87bc(local_a4,*(undefined4 *)(param_1 + 0x4d0));
    iVar4 = param_1 + 0x100;
    FUN_088fe16c(iVar4);
    *(undefined4 *)(param_1 + 0x420) = 0x428c0000;
    FUN_089bf300(*(undefined4 *)(param_1 + 0x4dc),3);
    FUN_088ff320(param_1,*(undefined4 *)(param_1 + 0x4dc));
    iVar3 = 0;
    iVar1 = *(int *)(param_1 + 0x4dc);
    while( true ) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x14))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x10));
      iVar3 = iVar3 + 1;
      if (2 < iVar3) break;
      iVar1 = *(int *)(param_1 + 0x4dc);
    }
    FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4d4),3);
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x6c) = 0;
    iVar1 = *(int *)(param_1 + 0x4c4);
    *(undefined4 *)(iVar1 + 0x20) = local_b0;
    *(undefined4 *)(iVar1 + 0x24) = uStack_ac;
    *(undefined4 *)(iVar1 + 0x28) = uStack_a8;
    *(undefined4 *)(iVar1 + 0x2c) = local_a4;
    iVar1 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x14);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x4c4) + (int)*(short *)(iVar1 + 0x38));
    *(undefined *)(param_1 + 0x758) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0x3e99999a;
    iVar1 = *(int *)(*(int *)(param_1 + 0x4d0) + 0x14);
    (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x4d0) + (int)*(short *)(iVar1 + 0x38));
    FUN_088fded4(iVar4,*(undefined4 *)(param_1 + 0x4d0));
    FUN_088fde00(iVar4);
    FUN_088fde00(iVar4);
    iVar1 = FUN_0880ddb4(0xffffffff);
    local_98 = 0;
    local_9c = 0;
    local_a0 = 0;
    local_94 = 0;
    if (iVar1 < 3) {
      if (1 < iVar1) {
        FUN_089deeb0(*(undefined4 *)(param_1 + 0x4d0),&local_90,0);
        local_a0 = local_90;
        local_9c = uStack_8c;
        local_98 = uStack_88;
        local_94 = uStack_84;
      }
    }
    else if (iVar1 == 10) {
      FUN_089deeb0(*(undefined4 *)(param_1 + 0x4d0),&local_90,0x45);
      local_a0 = local_90;
      local_9c = uStack_8c;
      local_98 = uStack_88;
      local_94 = uStack_84;
    }
    FUN_08823f5c(DAT_08abd5b0,0x150,&local_a0);
    iVar1 = FUN_089bfa40(100);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x668);
    }
    else {
      FUN_0884bcc0(iVar1);
      iVar1 = *(int *)(param_1 + 0x668);
    }
    *(int *)(param_1 + 0x668) = iVar1 + 1;
  case 4:
    if (*(char *)(*(int *)(param_1 + 0x4dc) + 0x57) != '\0') {
      *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 0x654);
      FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4dc),3);
      *(undefined4 *)(param_1 + 0x668) = 10;
LAB_08901174:
      iVar3 = param_1 + 0x100;
      FUN_088ff3f4(&local_80);
      local_70 = local_80;
      uStack_6c = uStack_7c;
      uStack_68 = uStack_78;
      local_64 = 0x3fc90fdb;
      FUN_088b87bc(0x3fc90fdb,*(undefined4 *)(param_1 + 0x4cc));
      iVar1 = *(int *)(param_1 + 0x4cc);
      *(undefined4 *)(iVar1 + 0x20) = local_70;
      *(undefined4 *)(iVar1 + 0x24) = uStack_6c;
      *(undefined4 *)(iVar1 + 0x28) = uStack_68;
      *(undefined4 *)(iVar1 + 0x2c) = local_64;
      iVar1 = *(int *)(param_1 + 0x4cc);
      *(undefined4 *)(iVar1 + 0x80) = in_V72;
      *(undefined4 *)(iVar1 + 0x84) = in_V76;
      *(undefined4 *)(iVar1 + 0x88) = in_V7A;
      *(undefined4 *)(iVar1 + 0x8c) = in_V7E;
      iVar1 = *(int *)(*(int *)(param_1 + 0x4cc) + 0x130);
      *(undefined4 *)(iVar1 + 0xb0) = local_70;
      *(undefined4 *)(iVar1 + 0xb4) = uStack_6c;
      *(undefined4 *)(iVar1 + 0xb8) = uStack_68;
      *(undefined4 *)(iVar1 + 0xbc) = local_64;
      FUN_088b87bc(local_64,*(undefined4 *)(param_1 + 0x4cc));
      FUN_088fe16c(iVar3);
      *(undefined4 *)(param_1 + 0x420) = 0x428c0000;
      FUN_089bf300(*(undefined4 *)(param_1 + 0x4d8),3);
      FUN_088ff320(param_1,*(undefined4 *)(param_1 + 0x4d8));
      iVar4 = 0;
      iVar1 = *(int *)(param_1 + 0x4d8);
      while( true ) {
        (**(code **)(*(int *)(iVar1 + 0xc) + 0x14))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x10));
        iVar4 = iVar4 + 1;
        if (8 < iVar4) break;
        iVar1 = *(int *)(param_1 + 0x4d8);
      }
      FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4d4),3);
      *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x6c) = 0;
      iVar1 = *(int *)(param_1 + 0x4c4);
      *(undefined4 *)(iVar1 + 0x20) = local_70;
      *(undefined4 *)(iVar1 + 0x24) = uStack_6c;
      *(undefined4 *)(iVar1 + 0x28) = uStack_68;
      *(undefined4 *)(iVar1 + 0x2c) = local_64;
      iVar1 = *(int *)(*(int *)(param_1 + 0x4c4) + 0x14);
      (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x4c4) + (int)*(short *)(iVar1 + 0x38));
      *(undefined *)(param_1 + 0x758) = 0;
      *(undefined4 *)(param_1 + 0x684) = 0x3e99999a;
      iVar1 = *(int *)(*(int *)(param_1 + 0x4cc) + 0x14);
      (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x4cc) + (int)*(short *)(iVar1 + 0x38));
      FUN_088fded4(iVar3,*(undefined4 *)(param_1 + 0x4cc));
      FUN_088fde00(iVar3);
      FUN_088fde00(iVar3);
      iVar1 = FUN_089bfa40(100);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x668);
      }
      else {
        FUN_0884bcc0(iVar1);
        iVar1 = *(int *)(param_1 + 0x668);
      }
      *(int *)(param_1 + 0x668) = iVar1 + 1;
      if (*(int *)(param_1 + 0x650) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x6c) = 0x3f800000;
        iVar1 = *(int *)(*(int *)(param_1 + 0x650) + 0x14);
        (**(code **)(iVar1 + 0x3c))(*(int *)(param_1 + 0x650) + (int)*(short *)(iVar1 + 0x38));
        *(undefined4 *)(DAT_08abd4a0 + 0x6c) = 0;
      }
    }
    break;
  case 10:
    goto LAB_08901174;
  case 0xb:
    fVar5 = *(float *)(param_1 + 0x690) + 0.035;
    *(float *)(param_1 + 0x690) = fVar5;
    if (fVar5 < 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = 1.570796;
      if (fVar5 <= 1.570796) {
        fVar2 = fVar5;
      }
    }
    *(float *)(param_1 + 0x690) = fVar2;
    uVar6 = vmul_s(fVar2,in_V7C);
    fVar5 = (float)vsin_s(uVar6);
    *(float *)(param_1 + 0x420) = fVar5 * -25.0 + 70.0;
  }
  return;
}

