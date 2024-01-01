#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088acecc(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_088a94b4(param_1);
  if (*(int *)(DAT_08ac58c4 + 4) < 8) {
    uVar5 = 1;
  }
  else {
    uVar5 = 1;
    if (*(int *)(DAT_08ac58c4 + 4) < 0xc) {
      uVar5 = 0;
    }
  }
  if (param_1 < 0x2e) {
    if (0x2c < param_1) {
      param_2[1] = param_2[1] - 38.0;
      if (*(int *)(DAT_08ac58c4 + 4) == 4) {
        if (*param_2 == 1467.0) {
          *param_2 = *param_2 - 3.0;
          param_2[3] = param_2[3] - 1.2;
        }
        else if (*param_2 == 1389.0) {
          param_2[3] = param_2[3] + 0.5;
        }
        else if (*param_2 == 1325.0) {
          param_2[3] = param_2[3] - 1.0;
          param_2[1] = param_2[1] + 2.3;
        }
        else if (*param_2 == 1277.0) {
          *param_2 = *param_2 - 2.0;
        }
      }
      else if (*(int *)(DAT_08ac58c4 + 4) == 7) {
        if (*param_2 == 1453.0) {
          *param_2 = *param_2 + 6.0;
        }
        else if (*param_2 == 1364.0) {
          *param_2 = *param_2 + 6.0;
          param_2[3] = param_2[3] - 1.0;
        }
        else if (*param_2 == 1301.0) {
          *param_2 = *param_2 + 6.0;
          param_2[1] = param_2[1] + 3.0;
          param_2[3] = param_2[3] - 0.5;
        }
        else if (*param_2 == 1266.0) {
          *param_2 = *param_2 + 3.0;
          param_2[1] = param_2[1] + 1.0;
          param_2[3] = param_2[3] - 1.5;
        }
      }
    }
  }
  else if (param_1 == 0x7c) {
    param_2[1] = param_2[1] - 120.0;
  }
  iVar2 = FUN_088a93a4();
  if ((iVar2 == 0) || ((&PTR_DAT_08a8fe48)[param_1 * 3] == (undefined *)0x0)) {
    return 0;
  }
  DAT_08abd5b8 = DAT_08abd5b8 + 1;
  if (iVar1 < 0xc) {
    if (iVar1 == 9) goto LAB_088ad308;
  }
  else {
    if (iVar1 < 0xe) {
      if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
        uVar4 = _DONE_Get_DAT_08AAC9E0();
        iVar2 = FUN_0880d0ac(uVar4,7);
        if (iVar2 != 1) {
          return 0;
        }
      }
      goto LAB_088ad308;
    }
    if (iVar1 < 0xf) goto LAB_088ad308;
  }
  uVar3 = FUN_088a9020();
  if (((uVar3 | uVar5) == 0) ||
     (iVar2 = FUN_089be148(DAT_08ac520c,(&PTR_DAT_08a8fe48)[param_1 * 3]), iVar2 == 0)) {
    return 0;
  }
LAB_088ad308:
  local_3c = 0;
  switch(iVar1) {
  case 3:
  case 7:
    if ((*(int *)(DAT_08ac58c4 + 0x20) == 2) && (param_1 == 0xb2)) {
      return 0;
    }
    iVar1 = FUN_0880d354();
    if (iVar1 != 0) {
      if ((int)DAT_08abd5b8 < 0) {
        uVar5 = -(DAT_08abd5b8 & 1);
      }
      else {
        uVar5 = DAT_08abd5b8 & 1;
      }
      if (uVar5 == 0) {
        return 0;
      }
    }
    local_34 = 0;
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(0x380,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    local_3c = local_34;
    if (iVar1 != 0) {
      FUN_088b0a00(iVar1,param_1,param_2);
      local_3c = iVar1;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 8:
  case 0xb:
  default:
    local_40 = 0;
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(800,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    local_3c = local_40;
    if (iVar1 != 0) {
      FUN_088ab2d0(iVar1,param_1,param_2);
      local_3c = iVar1;
    }
    break;
  case 9:
    if (param_1 - 0xa9U < 9) {
      local_44 = (int)((param_1 - 0xa9U) * 4) >> 2;
      switch(param_1) {
      default:
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar1 = FUN_089d7d74(0x3a0,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        local_3c = 0;
        if (iVar1 != 0) {
          local_80 = *param_2;
          fStack_7c = param_2[1];
          fStack_78 = param_2[2];
          fStack_74 = param_2[3];
          FUN_088b4088(iVar1,&local_80,local_44,0xffff);
          local_3c = iVar1;
        }
        break;
      case 0xb0:
        FUN_089d8634();
        uVar4 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar1 = FUN_089d7d74(0x390,0,0);
        FUN_089d816c(uVar4);
        FUN_089d866c();
        local_3c = 0;
        if (iVar1 != 0) {
          local_80 = *param_2;
          fStack_7c = param_2[1];
          fStack_78 = param_2[2];
          fStack_74 = param_2[3];
          FUN_088a3b10(iVar1);
          local_3c = iVar1;
        }
        break;
      case 0xb1:
        local_80 = *param_2;
        fStack_7c = param_2[1];
        fStack_78 = param_2[2];
        fStack_74 = param_2[3];
        local_3c = FUN_088a1e90(0x442f0000);
      }
    }
    break;
  case 10:
    local_48 = 0;
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(0x340,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    local_3c = local_48;
    if (iVar1 != 0) {
      FUN_088b062c(iVar1,param_1,param_2);
      local_3c = iVar1;
    }
    break;
  case 0xc:
    local_38 = 0;
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(0x340,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    local_3c = local_38;
    if (iVar1 != 0) {
      FUN_088a5ba4(iVar1,param_1,param_2);
      local_3c = iVar1;
    }
    break;
  case 0xd:
    local_3c = 0;
    FUN_089d8634();
    uVar4 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar1 = FUN_089d7d74(0x340,0,0);
    FUN_089d816c(uVar4);
    FUN_089d866c();
    if (iVar1 != 0) {
      FUN_088a65a4(iVar1,param_1,param_2);
      local_3c = iVar1;
    }
    break;
  case 0xe:
  }
  return local_3c;
}

