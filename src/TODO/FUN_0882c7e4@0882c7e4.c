#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_0882c7e4(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7,undefined4 param_8,uint param_9,int param_10)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  undefined auStack_70 [32];
  char local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  
  local_48 = param_9 & 0xff;
  if (param_6 == 4) {
    return '\0';
  }
  if (param_3 == -1) {
    return '\x01';
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x204);
  local_50 = '\0';
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x8cc) != 0) {
      return '\0';
    }
    iVar4 = *(int *)(param_1 + 0x8f0);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x8f0);
  }
  local_4c = param_5;
  local_44 = param_8;
  local_40 = param_7;
  if (iVar4 != param_2) {
    psVar3 = (short *)FUN_0881a300(4,0x81);
    FUN_089b4c84(auStack_70,"tips_kao%02d",param_2);
    uVar5 = FUN_089f7720(auStack_70);
    *(undefined4 *)(iVar6 + 0xd4) = uVar5;
    sVar1 = psVar3[1];
    sVar2 = psVar3[2];
    *(float *)(iVar6 + 0x60) = (float)(int)*psVar3;
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    *(float *)(iVar6 + 100) = (float)(int)sVar1;
    *(float *)(iVar6 + 0x68) = (float)(sVar2 + 200);
    *(int *)(param_1 + 0x8f0) = param_2;
  }
  iVar4 = 0x82;
  iVar6 = 0x208;
  do {
    FUN_0882c4c8(0,0,0x43000000,0x42c00000,param_1,*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar6)
                );
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
  } while (iVar4 < 0x84);
  iVar6 = FUN_0882c548(param_1);
  cVar7 = local_50;
  uVar5 = 0;
  switch(param_2) {
  case 0:
    uVar5 = 0;
    break;
  case 1:
    uVar5 = 5;
    break;
  case 2:
    uVar5 = 1;
    break;
  case 3:
    uVar5 = 4;
    break;
  case 4:
    uVar5 = 2;
    break;
  case 5:
    uVar5 = 3;
    break;
  case 6:
    uVar5 = 0;
    break;
  case 7:
    uVar5 = 1;
    break;
  case 8:
    uVar5 = 3;
    break;
  case 9:
    uVar5 = 2;
    break;
  case 10:
    uVar5 = 4;
    break;
  case 0xb:
    uVar5 = 5;
    break;
  case 0xc:
    if (iVar6 != 0) {
      uVar5 = (**(code **)(*(int *)(iVar6 + 0x14) + 0xa4))
                        (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0xa0));
      break;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    goto LAB_0882cad8;
  case 0xf:
    uVar5 = 6;
  }
  iVar6 = *(int *)(param_1 + 0x14);
LAB_0882cad8:
  *(undefined4 *)(*(int *)(iVar6 + 0x208) + 0xd8) = uVar5;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x8f8) != param_6) {
      cVar7 = '\x01';
      goto LAB_0882cb00;
    }
    if (*(int *)(param_1 + 0x8f4) == param_3) goto LAB_0882cb00;
  }
  cVar7 = '\x01';
LAB_0882cb00:
  if (cVar7 != '\0') {
    if ((((2 < param_6) && (3 < param_6)) && (param_6 < 5)) && (param_3 < 5)) {
      param_3 = param_3 + (param_2 * 4 >> 2) * 5 + 0x1da;
    }
    *(int *)(param_1 + 0x910) = param_4;
    *(undefined4 *)(param_1 + 0x8d0) = local_4c;
    *(undefined4 *)(param_1 + 0x90c) = local_4c;
    FUN_0882c59c(param_1,param_3,*(undefined4 *)(param_1 + 0x8a8),local_40,local_44);
    *(int *)(param_1 + 0x8f8) = param_6;
    *(int *)(param_1 + 0x8f4) = param_3;
    *(undefined4 *)(param_1 + 0x8b4) = 0;
    *(undefined4 *)(param_1 + 0x8b8) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x8bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8c0) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x8cc) = 1;
    *(undefined *)(param_1 + 0x919) = 0;
    *(int *)(param_1 + 0x914) = param_10;
    if (param_10 != -1) {
      if (param_10 < 10000) {
        param_10 = param_10 + 10000;
      }
      *(int *)(param_1 + 0x914) = param_10;
      if ((*(int *)(param_1 + 0x910) == 1) && (iVar6 = FUN_0889d9fc(), iVar6 == 0)) {
        *(undefined4 *)(param_1 + 0x8d0) = 0x1e;
        *(undefined4 *)(param_1 + 0x90c) = 0x1e;
        *(undefined *)(param_1 + 0x919) = 1;
        FUN_0889d9c8();
      }
      iVar6 = FUN_089c2b10(1);
      if (((iVar6 != 0) && (iVar6 = FUN_089c2fbc(*(undefined4 *)(param_1 + 0x914)), iVar6 != 0)) &&
         (iVar6 = FUN_0884b248(), iVar6 != 0)) {
        uVar5 = FUN_0884b268();
        FUN_0884e004(0x3ee66666,0x3e99999a,0x3f000000,uVar5);
      }
    }
    if (local_48 != 0) {
      iVar6 = *(int *)(param_1 + 0x904) + -1;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (999 < iVar6) {
        iVar6 = 999;
      }
      *(int *)(param_1 + 0x904) = iVar6;
    }
  }
  return cVar7;
}

