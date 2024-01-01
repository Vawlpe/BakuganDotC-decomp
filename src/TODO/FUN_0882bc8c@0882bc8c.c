#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882bc8c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar2 = DAT_08b0019c;
  uVar1 = DAT_08b00198;
  uVar4 = DAT_08b00194;
  puVar3 = DAT_08ac5934;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x1c) == 0x74) {
    *DAT_08ac5934 = DAT_08b00190;
    puVar3[1] = uVar4;
    puVar3[2] = uVar1;
    puVar3[3] = uVar2;
  }
  puVar3 = DAT_08ac5934;
  if (*(int *)(param_1 + 0x1c) == 0x74) {
    local_60 = 0x3f800000;
    local_5c = 0x3f800000;
    local_58 = 0x3f800000;
    local_50 = 0x3f800000;
    local_4c = 0x3f800000;
    local_48 = 0x3f800000;
    iVar6 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x14);
  }
  switch(iVar6) {
  case 0:
    *(undefined4 *)(param_1 + 0x14) = 10;
  case 10:
    iVar6 = FUN_088ce990(param_1,*(undefined4 *)(param_1 + 0x1c));
    if (iVar6 != 0) {
      FUN_0884b444(1);
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x30) = local_60;
      *(undefined4 *)(iVar6 + 0x34) = local_5c;
      *(undefined4 *)(iVar6 + 0x38) = local_58;
      *(undefined4 *)(iVar6 + 0x3c) = 0;
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x40) = local_50;
      *(undefined4 *)(iVar6 + 0x44) = local_4c;
      *(undefined4 *)(iVar6 + 0x48) = local_48;
      *(undefined4 *)(iVar6 + 0x4c) = 0x3f800000;
      if (*(int *)(param_1 + 0x1c) == 0x74) {
        uVar4 = FUN_089edb80();
        FUN_089edf24(uVar4,0x3c);
        iVar6 = *(int *)(param_1 + 0x14);
      }
      else {
        uVar4 = FUN_089edb80();
        FUN_089edf24(uVar4,0xf);
        iVar6 = *(int *)(param_1 + 0x14);
      }
      *(int *)(param_1 + 0x14) = iVar6 + 1;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    break;
  case 0xb:
    uVar4 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar4);
    if (iVar6 != 0) {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    break;
  case 0xc:
    iVar6 = FUN_0884b248();
    if (iVar6 != 0) {
      uVar4 = FUN_0884b268();
      FUN_089bf2f0(uVar4,3);
    }
    iVar6 = FUN_0882c13c();
    if (iVar6 != 0) {
      uVar4 = FUN_0882c15c();
      FUN_089bf2f0(uVar4,3);
    }
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x40) = local_60;
    *(undefined4 *)(iVar6 + 0x44) = local_5c;
    *(undefined4 *)(iVar6 + 0x48) = local_58;
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    uVar4 = FUN_089edb80();
    FUN_089edf24(uVar4,1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    break;
  case 0xd:
    uVar4 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar4);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x14;
    }
    break;
  case 0x14:
    iVar6 = FUN_089bfa40(0x2738);
    if (iVar6 == 0) {
      FUN_089bf6e8(0x2738,100);
      uVar2 = DAT_08b0019c;
      uVar1 = DAT_08b00198;
      uVar4 = DAT_08b00194;
      puVar3 = DAT_08ac5934;
      if (*(int *)(param_1 + 0x1c) == 0x74) {
        *DAT_08ac5934 = DAT_08b00190;
        puVar3[1] = uVar4;
        puVar3[2] = uVar1;
        puVar3[3] = uVar2;
      }
    }
    else {
      iVar6 = FUN_089d6790(*(undefined4 *)(param_1 + 0x1c));
      if (iVar6 != 0) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    break;
  case 0x15:
    iVar6 = FUN_089d67f8();
    if (iVar6 == 0) {
      FUN_088ce518(param_1);
    }
    else {
      FUN_089bf8c8(0x2738);
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x30) = local_50;
      *(undefined4 *)(iVar6 + 0x34) = local_4c;
      *(undefined4 *)(iVar6 + 0x38) = local_48;
      *(undefined4 *)(iVar6 + 0x3c) = 0x3f800000;
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x40) = local_50;
      *(undefined4 *)(iVar6 + 0x44) = local_4c;
      *(undefined4 *)(iVar6 + 0x48) = local_48;
      *(undefined4 *)(iVar6 + 0x4c) = 0x3f800000;
      uVar4 = FUN_089edb80();
      FUN_089edf24(uVar4,1);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      FUN_089c87e4(1);
      FUN_089c879c(0x3dcccccd,1);
    }
    break;
  case 0x16:
    iVar6 = FUN_089c2b10(1);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x14);
    }
    else {
      uVar4 = FUN_089c2b48(1);
      iVar6 = FUN_089c3818(uVar4);
      if (iVar6 == 0) {
        return;
      }
      iVar6 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    break;
  case 0x17:
    uVar4 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar4);
    if (iVar6 != 0) {
      iVar6 = FUN_0884b248();
      if (iVar6 != 0) {
        uVar4 = FUN_0884b268();
        FUN_089bf300(uVar4,3);
      }
      iVar6 = FUN_0882c13c();
      if (iVar6 != 0) {
        uVar4 = FUN_0882c15c();
        FUN_089bf300(uVar4,3);
      }
      FUN_0884b444(0);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    }
    break;
  case 0x18:
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x30) = local_50;
    *(undefined4 *)(iVar6 + 0x34) = local_4c;
    *(undefined4 *)(iVar6 + 0x38) = local_48;
    *(undefined4 *)(iVar6 + 0x3c) = 0x3f800000;
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x40) = local_60;
    *(undefined4 *)(iVar6 + 0x44) = local_5c;
    *(undefined4 *)(iVar6 + 0x48) = local_58;
    *(undefined4 *)(iVar6 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x1c) == 0x74) {
      uVar4 = FUN_089edb80();
      FUN_089edf24(uVar4,0x3c);
      iVar6 = *(int *)(param_1 + 0x14);
    }
    else {
      uVar4 = FUN_089edb80();
      FUN_089edf24(uVar4,0xf);
      iVar6 = *(int *)(param_1 + 0x14);
    }
    *(int *)(param_1 + 0x14) = iVar6 + 1;
    break;
  case 0x19:
    uVar4 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar4);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x14) = 100;
    }
    break;
  default:
    if (iVar6 == 100) {
      if (*(int *)(param_1 + 0x1c) == 0x74) {
        puVar5 = (undefined4 *)FUN_0889e948();
        uVar4 = puVar5[1];
        uVar1 = puVar5[2];
        uVar2 = puVar5[3];
        *puVar3 = *puVar5;
        puVar3[1] = uVar4;
        puVar3[2] = uVar1;
        puVar3[3] = uVar2;
      }
      FUN_089bf7a8(param_1,1);
    }
  }
  return;
}

