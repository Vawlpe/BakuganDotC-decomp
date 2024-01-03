#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08902c44(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  float local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  FUN_088ffadc();
  DAT_08abff80 = FUN_088ffdac(param_1);
  if (*(int *)(param_1 + 0x660) < 2) {
LAB_08902cbc:
    uVar7 = *(undefined4 *)(param_1 + 0x660);
  }
  else {
    if (*(int *)(param_1 + 0x660) < 0x14) {
      if (DAT_08abff80 != 0) {
        *(undefined4 *)(param_1 + 0x660) = 0x14;
      }
      goto LAB_08902cbc;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x660);
  }
  *(undefined4 *)(param_1 + 0x424) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x428) = 0x3f800000;
  switch(uVar7) {
  case 0:
    iVar6 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
    (**(code **)(iVar6 + 0x3c))(*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar6 + 0x38));
    iVar6 = *(int *)(*(int *)(param_1 + 0x4cc) + 0x14);
    (**(code **)(iVar6 + 0x3c))(*(int *)(param_1 + 0x4cc) + (int)*(short *)(iVar6 + 0x38));
    if (*(int *)(param_1 + 0x4d0) == 0) {
      iVar6 = *(int *)(param_1 + 0x660);
    }
    else {
      iVar6 = *(int *)(*(int *)(param_1 + 0x4d0) + 0x14);
      (**(code **)(iVar6 + 0x3c))(*(int *)(param_1 + 0x4d0) + (int)*(short *)(iVar6 + 0x38));
      iVar6 = *(int *)(param_1 + 0x660);
    }
    *(int *)(param_1 + 0x660) = iVar6 + 1;
    switch(*(undefined4 *)(*(int *)(param_1 + 0x790) + 0x28)) {
    case 1:
    case 7:
    case 8:
    case 9:
      FUN_088ffe70(param_1,*(undefined4 *)(param_1 + 0x4c8));
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      iVar6 = *(int *)(param_1 + 0x790);
      break;
    default:
      iVar6 = *(int *)(param_1 + 0x790);
    }
    switch(*(undefined4 *)(iVar6 + 0x28)) {
    case 1:
    case 2:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x14:
      *(undefined4 *)(param_1 + 0x140) = 0x40400000;
      FUN_088fde00(param_1 + 0x100);
      iVar6 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
      (**(code **)(iVar6 + 0x3c))(*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar6 + 0x38));
      iVar6 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
      (**(code **)(iVar6 + 0x3c))(*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar6 + 0x38));
      break;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0x140) = 0x41200000;
      break;
    case 5:
    case 0xd:
    case 0x11:
    default:
      *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
      break;
    case 6:
    case 0x12:
      *(undefined4 *)(param_1 + 0x140) = 0x41100000;
      break;
    case 7:
    case 0x13:
      *(undefined4 *)(param_1 + 0x140) = 0x41a00000;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x140) = 0x40400000;
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x140) = 0x40000000;
      *(undefined4 *)(param_1 + 0x424) = 0xbf800000;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x140) = 0x40400000;
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 0x140) = 0x41000000;
      break;
    case 0x15:
      *(undefined4 *)(param_1 + 0x140) = 0x41000000;
    }
    break;
  case 1:
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    goto LAB_08902ed0;
  case 2:
LAB_08902ed0:
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_08902ee8:
    if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x28) {
      FUN_088fff20(param_1,*(undefined4 *)(param_1 + 0x4c8));
      iVar6 = *(int *)(param_1 + 0x790);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x790);
    }
    switch(*(undefined4 *)(iVar6 + 0x28)) {
    case 1:
    case 2:
    case 0x10:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x32) {
        *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
      }
      else if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x50) {
        *(undefined4 *)(param_1 + 0x140) = 0x40000000;
      }
      break;
    case 3:
    case 4:
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
      break;
    case 5:
    case 0x11:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x32) {
        *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
      }
      else if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x45) {
        *(undefined4 *)(param_1 + 0x140) = 0x40000000;
      }
      break;
    case 6:
    case 0x12:
      *(undefined4 *)(param_1 + 0x428) = 0xbf800000;
      break;
    case 7:
    case 0x13:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x29) {
        *(undefined4 *)(param_1 + 0x140) = 0x41700000;
      }
      else if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x46) {
        *(undefined4 *)(param_1 + 0x140) = 0x40066666;
      }
      break;
    case 8:
    case 0x14:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x41) {
        *(undefined4 *)(param_1 + 0x140) = 0x41700000;
      }
      break;
    case 9:
    case 10:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x47) {
        *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
      }
      break;
    case 0xc:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x47) {
        *(undefined4 *)(param_1 + 0x140) = 0x40800000;
      }
      *(undefined4 *)(param_1 + 0x424) = 0xbf800000;
      break;
    case 0x15:
      if (*(int *)(*(int *)(param_1 + 0x790) + 0x30) == 0x41) {
        *(undefined4 *)(param_1 + 0x140) = 0x40400000;
      }
      break;
    default:
      iVar6 = *(int *)(param_1 + 0x790);
      goto LAB_08903098;
    }
    iVar6 = *(int *)(param_1 + 0x790);
LAB_08903098:
    if (*(char *)(iVar6 + 0x57) == '\0') {
      return;
    }
    FUN_088ff3f4(&local_a0);
    local_90 = local_a0;
    uStack_8c = uStack_9c;
    uStack_88 = uStack_98;
    local_84 = 0x3fc90fdb;
    uStack_7c = uStack_9c;
    uStack_78 = uStack_98;
    local_74 = 0x3fc90fdb;
    local_80 = local_a0 + 5.0;
    iVar6 = *(int *)(param_1 + 0x4cc);
    iVar5 = param_1 + 0x100;
    if (*(int *)(param_1 + 0x4d0) != 0) {
      iVar6 = *(int *)(param_1 + 0x4d0);
    }
    FUN_089e0a70(iVar6,&LAB_088feb20,0);
    FUN_088b87bc(local_74,iVar6);
    *(float *)(iVar6 + 0x20) = local_80;
    *(undefined4 *)(iVar6 + 0x24) = uStack_7c;
    *(undefined4 *)(iVar6 + 0x28) = uStack_78;
    *(undefined4 *)(iVar6 + 0x2c) = local_74;
    *(undefined4 *)(iVar6 + 0x80) = in_V72;
    *(undefined4 *)(iVar6 + 0x84) = in_V76;
    *(undefined4 *)(iVar6 + 0x88) = in_V7A;
    *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
    iVar4 = *(int *)(iVar6 + 0x130);
    *(float *)(iVar4 + 0xb0) = local_80;
    *(undefined4 *)(iVar4 + 0xb4) = uStack_7c;
    *(undefined4 *)(iVar4 + 0xb8) = uStack_78;
    *(undefined4 *)(iVar4 + 0xbc) = local_74;
    FUN_088b87bc(local_74,iVar6);
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    if (*(int *)(param_1 + 0x4d0) != 0) {
      *(undefined4 *)(iVar6 + 0x6c) = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x28);
    FUN_088fe16c(iVar5);
    FUN_089bf300(*(undefined4 *)(param_1 + 0x794),3);
    FUN_088ff320(param_1,*(undefined4 *)(param_1 + 0x794));
    FUN_089bf2f0(*(undefined4 *)(param_1 + 0x790),3);
    *(undefined4 *)(*(int *)(param_1 + 0x4c8) + 0x6c) = 0;
    iVar4 = *(int *)(param_1 + 0x4c8);
    *(float *)(iVar4 + 0x20) = local_90;
    *(undefined4 *)(iVar4 + 0x24) = uStack_8c;
    *(undefined4 *)(iVar4 + 0x28) = uStack_88;
    *(undefined4 *)(iVar4 + 0x2c) = local_84;
    iVar4 = *(int *)(*(int *)(param_1 + 0x4c8) + 0x14);
    (**(code **)(iVar4 + 0x3c))(*(int *)(param_1 + 0x4c8) + (int)*(short *)(iVar4 + 0x38));
    *(undefined *)(param_1 + 0x758) = 0;
    *(undefined4 *)(param_1 + 0x684) = 0x3e99999a;
    if (*(int *)(param_1 + 0x4d0) == 0) {
      if (*(int *)(param_1 + 0x650) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x6c) = 0x3f800000;
        iVar4 = *(int *)(*(int *)(param_1 + 0x650) + 0x14);
        (**(code **)(iVar4 + 0x3c))(*(int *)(param_1 + 0x650) + (int)*(short *)(iVar4 + 0x38));
        *(undefined4 *)(DAT_08abd4a0 + 0x6c) = 0;
        goto LAB_08903280;
      }
      iVar4 = *(int *)(iVar6 + 0x14);
    }
    else {
      FUN_088b87bc(local_84,iVar6);
      *(float *)(iVar6 + 0x20) = local_90;
      *(undefined4 *)(iVar6 + 0x24) = uStack_8c;
      *(undefined4 *)(iVar6 + 0x28) = uStack_88;
      *(undefined4 *)(iVar6 + 0x2c) = local_84;
      *(undefined4 *)(iVar6 + 0x80) = in_V72;
      *(undefined4 *)(iVar6 + 0x84) = in_V76;
      *(undefined4 *)(iVar6 + 0x88) = in_V7A;
      *(undefined4 *)(iVar6 + 0x8c) = in_V7E;
      iVar4 = *(int *)(iVar6 + 0x130);
      *(float *)(iVar4 + 0xb0) = local_90;
      *(undefined4 *)(iVar4 + 0xb4) = uStack_8c;
      *(undefined4 *)(iVar4 + 0xb8) = uStack_88;
      *(undefined4 *)(iVar4 + 0xbc) = local_84;
      FUN_088b87bc(local_84,iVar6);
      *(undefined4 *)(DAT_08abd4a0 + 0x6c) = 0x3f800000;
LAB_08903280:
      iVar4 = *(int *)(iVar6 + 0x14);
    }
    (**(code **)(iVar4 + 0x3c))(iVar6 + *(short *)(iVar4 + 0x38));
    iVar6 = *(int *)(*(int *)(param_1 + 0x790) + 0x28);
    if ((iVar6 < 3) && (1 < iVar6)) {
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x140) = 0x40800000;
      *(undefined4 *)(param_1 + 0x144) = 0x46ea6000;
    }
    FUN_088fde00(iVar5);
    FUN_088fde00(iVar5);
    iVar6 = FUN_089bfa40(100);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x660);
    }
    else {
      FUN_0884bcc0(iVar6);
      iVar6 = *(int *)(param_1 + 0x660);
    }
    *(int *)(param_1 + 0x660) = iVar6 + 1;
    break;
  case 3:
    goto LAB_08902ee8;
  case 4:
    if (*(char *)(*(int *)(param_1 + 0x794) + 0x57) == '\0') {
      return;
    }
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_64 = 0;
    DAT_08b00fe0 = 0;
    DAT_08b00fe4 = 0;
    DAT_08b00fe8 = 0;
    DAT_08b00fec = 0;
    *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(*(int *)(param_1 + 0x798) + 0x28);
    iVar6 = param_1 + 0x100;
    FUN_088fe138(iVar6);
    *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
    switch(*(undefined4 *)(*(int *)(param_1 + 0x790) + 0x28)) {
    case 4:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
      break;
    case 5:
    case 0x11:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
      break;
    case 6:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      break;
    case 7:
      iVar5 = *(int *)(param_1 + 0x4c8);
      goto LAB_08903408;
    case 9:
      *(undefined4 *)(param_1 + 0x420) = 0x42480000;
      *(undefined4 *)(param_1 + 0x304) = 0x3f8ccccd;
      break;
    default:
      iVar5 = *(int *)(param_1 + 0x4c8);
      goto LAB_08903408;
    }
    iVar5 = *(int *)(param_1 + 0x4c8);
LAB_08903408:
    *(undefined4 *)(iVar5 + 0x6c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x4cc) + 0x6c) = 0;
    if (*(int *)(param_1 + 0x4d0) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x798);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x4d0) + 0x6c) = 0;
      uVar7 = *(undefined4 *)(param_1 + 0x798);
    }
    FUN_089bf300(uVar7,3);
    FUN_088ff320(param_1,*(undefined4 *)(param_1 + 0x798));
    iVar5 = *(int *)(*(int *)(param_1 + 0x798) + 0xc);
    (**(code **)(iVar5 + 0x14))(*(int *)(param_1 + 0x798) + (int)*(short *)(iVar5 + 0x10));
    FUN_089bf2f0(*(undefined4 *)(param_1 + 0x794),3);
    if (*(int *)(param_1 + 0x650) == 0) {
      uVar7 = *(undefined4 *)(param_1 + 0x4c4);
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x650) + 0x6c) = 0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x650) + 0x14);
      (**(code **)(iVar5 + 0x3c))(*(int *)(param_1 + 0x650) + (int)*(short *)(iVar5 + 0x38));
      FUN_08a15924(*(undefined4 *)(*(int *)(param_1 + 0x650) + 0x130),0x100,0);
      *(undefined4 *)(DAT_08abd4a0 + 0x6c) = 0x3f800000;
      uVar7 = *(undefined4 *)(param_1 + 0x4c4);
    }
    FUN_088fded4(iVar6,uVar7);
    FUN_088fde00(iVar6);
    FUN_088fde00(iVar6);
    FUN_088ffadc(param_1);
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    break;
  case 5:
    if (DAT_08abff80 != 0) {
      FUN_089de940(*(undefined4 *)(param_1 + 0x4cc),0);
      if (*(int *)(param_1 + 0x4d0) == 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x798);
      }
      else {
        FUN_089de940(*(undefined4 *)(param_1 + 0x4d0),0);
        uVar7 = *(undefined4 *)(param_1 + 0x798);
      }
      FUN_089bf2f0(uVar7,3);
      *(undefined4 *)(param_1 + 0x660) = 0x14;
    }
    break;
  case 0x14:
    FUN_089c87e4(0);
    FUN_089c879c(0x3f000000,0);
    FUN_089c87e4(1);
    FUN_089c879c(0x3f000000,1);
    uVar7 = DONE_Get_DAT_08AC5874();
    FUN_089c69a4(uVar7);
    *(undefined4 *)(param_1 + 0x670) = 0;
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    *(undefined4 *)(param_1 + 0x67c) = 0;
    break;
  case 0x15:
    if (*(int *)(param_1 + 0x654) == 7) {
      *(undefined4 *)(param_1 + 0x79c) = 10;
    }
    else {
      *(undefined4 *)(param_1 + 0x79c) = 0;
    }
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
  case 0x16:
    iVar6 = *(int *)(param_1 + 0x79c) + -1;
    *(int *)(param_1 + 0x79c) = iVar6;
    if (iVar6 < 1) {
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
LAB_08903618:
      fVar8 = *(float *)(param_1 + 0x67c) + 0.06667;
      *(float *)(param_1 + 0x67c) = fVar8;
      if (1.0 <= fVar8) {
        FUN_089bf2f0(*(undefined4 *)(param_1 + 0x790),3);
        FUN_089bf2f0(*(undefined4 *)(param_1 + 0x794),3);
        FUN_089bf2f0(*(undefined4 *)(param_1 + 0x798),3);
        *(undefined4 *)(param_1 + 0x67c) = 0x3f800000;
        uVar3 = DAT_08b001bc;
        uVar2 = DAT_08b001b8;
        uVar7 = DAT_08b001b4;
        puVar1 = DAT_08ac5934;
        *DAT_08ac5934 = DAT_08b001b0;
        puVar1[1] = uVar7;
        puVar1[2] = uVar2;
        puVar1[3] = uVar3;
        if (*(int *)(param_1 + 0x4c8) == 0) {
          iVar6 = *(int *)(param_1 + 0x660);
        }
        else {
          FUN_089de940(*(undefined4 *)(param_1 + 0x4c8),0);
          *(undefined4 *)(param_1 + 0x4c8) = 0;
          iVar6 = *(int *)(param_1 + 0x660);
        }
        *(int *)(param_1 + 0x660) = iVar6 + 1;
      }
    }
    break;
  case 0x17:
    goto LAB_08903618;
  case 0x18:
    if (*(int *)(param_1 + 0x664) == -1) {
      iVar6 = *(int *)(param_1 + 0x660);
    }
    else {
      FUN_089c2d54(*(undefined4 *)(param_1 + 0x664));
      iVar6 = FUN_089c2c54(*(undefined4 *)(param_1 + 0x664));
      if (iVar6 != 0) {
        return;
      }
      iVar6 = FUN_089c2d54(0xffffffff);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = *(int *)(param_1 + 0x660);
    }
    *(int *)(param_1 + 0x660) = iVar6 + 1;
    break;
  case 0x19:
    FUN_088fefc4(param_1,DAT_08abff80);
  }
  return;
}

