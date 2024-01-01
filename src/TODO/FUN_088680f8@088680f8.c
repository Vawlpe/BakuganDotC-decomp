#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088680f8(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  float fVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  fVar7 = (float)FUN_089df5dc();
  if (*(int *)(param_1 + 8) == 0xf) {
    iVar3 = *(int *)(param_1 + 0x140);
    if (iVar3 < 2) {
      if (-1 < iVar3) {
LAB_08868160:
        if (fVar7 < 0.35) {
          *(undefined4 *)(param_1 + 0x430) = 0;
        }
        else if (*(int *)(param_1 + 0x430) == 0) {
          FUN_08862a84(param_1,7,0,0);
          *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 1;
        }
        goto LAB_088681a4;
      }
      iVar3 = *(int *)(param_1 + 0x140);
    }
    else {
      if (iVar3 == 0xd) goto LAB_08868160;
      iVar3 = *(int *)(param_1 + 0x140);
    }
  }
  else {
LAB_088681a4:
    iVar3 = *(int *)(param_1 + 0x140);
  }
  if (2 < iVar3) {
    if (iVar3 != 0xd) {
      return;
    }
    if ((int)((((int)*(char *)(*(int *)(param_1 + 0x4bc) + 3) & 0xfU ^ 8) - 8) * 0x1000000) >> 0x18
        != 1) {
      return;
    }
    if (*(int *)(param_1 + 8) != 1) {
      if ((*(int *)(param_1 + 8) != 3) && (*(int *)(param_1 + 8) != 0x10)) {
        return;
      }
      if (fVar7 < 0.4) {
        *(undefined4 *)(param_1 + 0x430) = 0;
        return;
      }
      if (0.86 <= fVar7) {
        if (*(int *)(param_1 + 0x430) == 0) {
          return;
        }
        FUN_08862a84(param_1,7,0,0);
        *(undefined4 *)(param_1 + 0x430) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x430) != 0) {
        return;
      }
      FUN_08862a84(param_1,7,0,0);
      *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 1;
      return;
    }
    if (fVar7 < 0.3) {
      *(undefined4 *)(param_1 + 0x430) = 0;
      return;
    }
    if (fVar7 < 0.63) {
      if (*(int *)(param_1 + 0x430) != 0) {
        return;
      }
      FUN_08862a84(param_1,7,0,0);
      *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 1;
      return;
    }
    if (fVar7 < 0.93) {
      if (*(int *)(param_1 + 0x430) != 1) {
        return;
      }
      FUN_08862a84(param_1,7,0,0);
      *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + 1;
      return;
    }
    if (*(int *)(param_1 + 0x430) == 0) {
      return;
    }
    FUN_08862a84(param_1,7,0,0);
    *(undefined4 *)(param_1 + 0x430) = 0;
    return;
  }
  if (iVar3 < 1) {
    return;
  }
  if (iVar3 < 2) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x4bc) + 2) != '\x02') {
      return;
    }
    iVar3 = FUN_088602ec(param_1,1);
    if (iVar3 != 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
  }
  bVar1 = false;
  if (iVar3 == 10) {
    unaff_s3 = FUN_089df4b8(param_1);
    iVar3 = FUN_088608b0(param_1,4);
    if (iVar3 == 0) {
      switch(unaff_s3) {
      case 5:
        bVar1 = true;
        unaff_s3 = 2;
        unaff_s4 = 1;
        break;
      case 0xc:
        bVar1 = false;
        unaff_s3 = 3;
        unaff_s4 = 0;
        break;
      case 0x13:
        bVar1 = true;
        unaff_s3 = 3;
        unaff_s4 = 1;
        break;
      case 0x1c:
        unaff_s3 = 2;
        unaff_s4 = 0;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
        bVar1 = false;
      }
    }
    else {
      switch(unaff_s3) {
      case 5:
        bVar1 = true;
        unaff_s3 = 3;
        unaff_s4 = 1;
        break;
      case 9:
        bVar1 = false;
        unaff_s3 = 2;
        unaff_s4 = 1;
        break;
      case 0xd:
        bVar1 = true;
        unaff_s3 = 3;
        unaff_s4 = 0;
        break;
      case 0x11:
        unaff_s3 = 2;
        unaff_s4 = 0;
      case 6:
      case 7:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xe:
      case 0xf:
      case 0x10:
        bVar1 = false;
      }
    }
  }
  else {
    if ((*(int *)(param_1 + 8) == 0xe) && (iVar3 = FUN_088608b0(param_1,1), iVar3 != 0)) {
      fVar7 = fVar7 * 2.0;
      if (1.0 < fVar7) {
        fVar7 = fVar7 - 1.0;
        goto LAB_088684ec;
      }
      uVar4 = *(uint *)(param_1 + 0x430);
    }
    else {
LAB_088684ec:
      uVar4 = *(uint *)(param_1 + 0x430);
    }
    if ((uVar4 & 1) == 0) {
      if ((0.4 < fVar7) && (fVar7 < 0.9)) {
        bVar1 = true;
        *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) ^ 1;
      }
    }
    else if (0.9 < fVar7) {
      bVar1 = true;
      *(uint *)(param_1 + 0x430) = *(uint *)(param_1 + 0x430) ^ 1;
    }
  }
  if (!bVar1) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x264);
  if (iVar3 < 4) {
    if (2 < iVar3) {
      iVar6 = 0x10;
      goto LAB_088685b8;
    }
  }
  else {
    iVar6 = 0xc;
    if (iVar3 < 5) {
      iVar3 = FUN_0885fd08(param_1);
      if (iVar3 != 0) {
        iVar6 = 0x14;
      }
      goto LAB_088685b8;
    }
  }
  iVar6 = 0xc;
LAB_088685b8:
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xf:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    iVar3 = *(int *)(param_1 + 8);
    break;
  default:
    iVar3 = FUN_089bed14(4);
    FUN_08862a84(param_1,iVar6 + iVar3,0,0);
    iVar3 = *(int *)(param_1 + 8);
  }
  if (iVar3 == 10) {
    puVar2 = (undefined4 *)FUN_088606ac(param_1,unaff_s3,unaff_s4);
    local_40 = *puVar2;
    uStack_38 = puVar2[2];
    uStack_34 = puVar2[3];
    local_3c = *(undefined4 *)(param_1 + 0x344);
    FUN_08823f5c(DAT_08ac5c70,3,&local_40);
  }
  else {
    uVar5 = 3;
    if (*(float *)(*(int *)(param_1 + 0x4bc) + 0x70) == 0.0) {
      if ((*(uint *)(param_1 + 0x430) & 1) != 0) {
        uVar5 = 2;
      }
      FUN_08864e14(0,0,param_1,uVar5);
    }
  }
  return;
}

