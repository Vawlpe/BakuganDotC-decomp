#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08890620(float param_1,int param_2,undefined param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  iVar12 = 0;
  if ((*(int *)(param_2 + 0x1a0) != 0) && (*(int *)(param_2 + 0x96c) != 0)) {
    iVar5 = FUN_0888efc8(param_2);
    iVar11 = *(int *)(param_2 + 0x96c);
    iVar10 = *(int *)(iVar11 + 0x14);
    if (iVar5 == 0) {
      uVar6 = (**(code **)(iVar10 + 0x54))(iVar11 + *(short *)(iVar10 + 0x50));
      iVar5 = *(int *)(*(int *)(param_2 + 0x96c) + 0x14);
      uVar7 = (**(code **)(iVar5 + 0x7c))(*(int *)(param_2 + 0x96c) + (int)*(short *)(iVar5 + 0x78))
      ;
      iVar5 = *(int *)(*(int *)(param_2 + 0x96c) + 0x14);
      uVar8 = (**(code **)(iVar5 + 0x84))(*(int *)(param_2 + 0x96c) + (int)*(short *)(iVar5 + 0x80))
      ;
      if ((uVar6 | uVar7 | uVar8) != 0) {
        iVar12 = *(int *)(param_2 + 0x96c);
      }
    }
    else {
      uVar6 = (**(code **)(iVar10 + 0x54))(iVar11 + *(short *)(iVar10 + 0x50));
      iVar5 = *(int *)(*(int *)(param_2 + 0x96c) + 0x14);
      uVar7 = (**(code **)(iVar5 + 0x5c))(*(int *)(param_2 + 0x96c) + (int)*(short *)(iVar5 + 0x58))
      ;
      if ((uVar6 | uVar7) != 0) {
        iVar12 = *(int *)(param_2 + 0x96c);
      }
    }
  }
  switch(param_3) {
  case 0:
    bVar4 = false;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = false;
      break;
    case 2:
      bVar4 = true;
      break;
    case 3:
      bVar4 = true;
      break;
    case 4:
      bVar4 = false;
      break;
    case 5:
      bVar4 = true;
      break;
    case 6:
      bVar4 = false;
      break;
    case 7:
      bVar4 = false;
    }
    return bVar4;
  case 1:
    fVar13 = (float)FUN_0888eb14(param_2,0);
    param_1 = param_1 * 10.0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = fVar13 < param_1;
      break;
    case 2:
      bVar4 = fVar13 <= param_1;
      break;
    case 3:
      bVar4 = fVar13 == param_1;
      break;
    case 4:
      bVar4 = fVar13 != param_1;
      break;
    case 5:
      bVar4 = param_1 <= fVar13;
      break;
    case 6:
      bVar4 = param_1 < fVar13;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 2:
    fVar13 = *(float *)(param_2 + 0x9a0);
    param_1 = param_1 * 10.0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = fVar13 < param_1;
      break;
    case 2:
      bVar4 = fVar13 <= param_1;
      break;
    case 3:
      bVar4 = fVar13 == param_1;
      break;
    case 4:
      bVar4 = fVar13 != param_1;
      break;
    case 5:
      bVar4 = param_1 <= fVar13;
      break;
    case 6:
      bVar4 = param_1 < fVar13;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 3:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x27:
  default:
    bVar4 = false;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = 0.0 < param_1;
      break;
    case 2:
      bVar4 = 0.0 <= param_1;
      break;
    case 3:
      bVar4 = param_1 == 0.0;
      break;
    case 4:
      bVar4 = param_1 != 0.0;
      break;
    case 5:
      bVar4 = param_1 <= 0.0;
      break;
    case 6:
      bVar4 = param_1 < 0.0;
      break;
    case 7:
      bVar4 = false;
    }
    return bVar4;
  case 4:
    if (iVar12 != 0) {
      bVar4 = (*(uint *)(iVar12 + 0x144) & 0x100000) != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 5:
    uVar6 = *(uint *)(*(int *)(param_2 + 0x1a0) + 0x144);
    bVar1 = (uVar6 & 0x800000) != 0;
    bVar2 = (uVar6 & 0x40000000) != 0;
    bVar4 = bVar1 || bVar2;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar1 && !bVar2;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar1 && !bVar2;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 6:
    iVar12 = FUN_08889298(*(int *)(param_2 + 0x1a0) + 0x434);
    iVar5 = (int)param_1;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = iVar12 < iVar5;
      break;
    case 2:
      bVar4 = iVar12 <= iVar5;
      break;
    case 3:
      bVar4 = iVar12 == iVar5;
      break;
    case 4:
      bVar4 = iVar12 != iVar5;
      break;
    case 5:
      bVar4 = iVar5 <= iVar12;
      break;
    case 6:
      bVar4 = iVar5 < iVar12;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 7:
    iVar12 = *(int *)(param_2 + 0x1a0) + 0x434;
    fVar13 = (float)FUN_08887b94(iVar12);
    iVar12 = FUN_08887a90(iVar12);
    fVar14 = (float)iVar12;
    if (iVar12 < 0) {
      fVar14 = fVar14 + 4.294967e+09;
    }
    fVar13 = (fVar13 / fVar14) * 100.0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = fVar13 < param_1;
      break;
    case 2:
      bVar4 = fVar13 <= param_1;
      break;
    case 3:
      bVar4 = fVar13 == param_1;
      break;
    case 4:
      bVar4 = fVar13 != param_1;
      break;
    case 5:
      bVar4 = param_1 <= fVar13;
      break;
    case 6:
      bVar4 = param_1 < fVar13;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 8:
    iVar12 = *(int *)(param_2 + 0x96c) + 0x434;
    if (*(int *)(param_2 + 0x96c) != 0) {
      fVar13 = (float)FUN_08887b94(iVar12);
      iVar12 = FUN_08887a90(iVar12);
      fVar14 = (float)iVar12;
      if (iVar12 < 0) {
        fVar14 = fVar14 + 4.294967e+09;
      }
      fVar13 = (fVar13 / fVar14) * 100.0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = fVar13 < param_1;
        break;
      case 2:
        bVar4 = fVar13 <= param_1;
        break;
      case 3:
        bVar4 = fVar13 == param_1;
        break;
      case 4:
        bVar4 = fVar13 != param_1;
        break;
      case 5:
        bVar4 = param_1 <= fVar13;
        break;
      case 6:
        bVar4 = param_1 < fVar13;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 9:
    fVar13 = (float)FUN_08887d20(*(int *)(param_2 + 0x1a0) + 0x434);
    fVar13 = fVar13 * 0.001 * 100.0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = fVar13 < param_1;
      break;
    case 2:
      bVar4 = fVar13 <= param_1;
      break;
    case 3:
      bVar4 = fVar13 == param_1;
      break;
    case 4:
      bVar4 = fVar13 != param_1;
      break;
    case 5:
      bVar4 = param_1 <= fVar13;
      break;
    case 6:
      bVar4 = param_1 < fVar13;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 10:
    if (iVar12 != 0) {
      fVar13 = (float)FUN_08887d20(iVar12 + 0x434);
      fVar13 = fVar13 * 0.001 * 100.0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = fVar13 < param_1;
        break;
      case 2:
        bVar4 = fVar13 <= param_1;
        break;
      case 3:
        bVar4 = fVar13 == param_1;
        break;
      case 4:
        bVar4 = fVar13 != param_1;
        break;
      case 5:
        bVar4 = param_1 <= fVar13;
        break;
      case 6:
        bVar4 = param_1 < fVar13;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x10:
    if (*(int *)(param_2 + 0x96c) != 0) {
      fVar13 = (float)FUN_08890598(param_2,*(undefined4 *)(param_2 + 0x1a0),
                                   *(int *)(param_2 + 0x96c));
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = fVar13 < param_1;
        break;
      case 2:
        bVar4 = fVar13 <= param_1;
        break;
      case 3:
        bVar4 = fVar13 == param_1;
        break;
      case 4:
        bVar4 = fVar13 != param_1;
        break;
      case 5:
        bVar4 = param_1 <= fVar13;
        break;
      case 6:
        bVar4 = param_1 < fVar13;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
  case 0x16:
    if (iVar12 != 0) {
      fVar13 = (float)FUN_08890598(param_2,iVar12,*(undefined4 *)(param_2 + 0x1a0));
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = fVar13 < param_1;
        break;
      case 2:
        bVar4 = fVar13 <= param_1;
        break;
      case 3:
        bVar4 = fVar13 == param_1;
        break;
      case 4:
        bVar4 = fVar13 != param_1;
        break;
      case 5:
        bVar4 = param_1 <= fVar13;
        break;
      case 6:
        bVar4 = param_1 < fVar13;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x12:
    if (iVar12 != 0) {
      iVar12 = *(int *)(param_2 + 0x1a0);
      if ((((*(uint *)(iVar12 + 0x144) & 0x30000000) != 0) || (*(int *)(iVar12 + 0x140) == 4)) ||
         (bVar3 = 0, *(int *)(iVar12 + 0x140) == 5)) {
        bVar3 = 1;
      }
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = bVar3 == 0;
        break;
      case 2:
        bVar4 = bVar3 < 2;
        break;
      case 3:
        bVar4 = bVar3 == 1;
        break;
      case 4:
        bVar4 = bVar3 != 1;
        break;
      case 5:
        bVar4 = bVar3 != 0;
        break;
      case 6:
        bVar4 = 1 < bVar3;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x13:
    if (iVar12 != 0) {
      uVar7 = (uint)param_1;
      uVar6 = *(uint *)(iVar12 + 8);
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = uVar6 < uVar7;
        break;
      case 2:
        bVar4 = uVar6 <= uVar7;
        break;
      case 3:
        bVar4 = uVar6 == uVar7;
        break;
      case 4:
        bVar4 = uVar6 != uVar7;
        break;
      case 5:
        bVar4 = uVar7 <= uVar6;
        break;
      case 6:
        bVar4 = uVar7 < uVar6;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x14:
    if (iVar12 != 0) {
      bVar4 = (*(uint *)(iVar12 + 0x144) & 0x200000) != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x15:
    bVar4 = (*(uint *)(*(int *)(param_2 + 0x1a0) + 0x144) & 0x1000000) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x17:
    if (*(int *)(param_2 + 0x9dc) != 0) {
      bVar4 = *(char *)(*(int *)(param_2 + 0x9dc) + 0x126) == '\x01';
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x18:
    bVar4 = (*(uint *)(param_2 + 0x9d4) & 0x80) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x19:
    bVar4 = *(int *)(param_2 + 0x9dc) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x1a:
    bVar4 = (*(uint *)(param_2 + 0x9d4) & 0x100) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x1b:
    bVar4 = (*(uint *)(param_2 + 0x9d4) & 0x200) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x1c:
    bVar4 = (*(uint *)(*(int *)(param_2 + 0x1a0) + 0x144) & 0x200000) != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x1d:
    if (iVar12 != 0) {
      bVar4 = (*(uint *)(iVar12 + 0x144) & 0x800000) != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x1e:
    if ((((iVar12 != 0) && (iVar5 = FUN_08860344(iVar12), iVar5 != 0)) &&
        (*(int *)(param_2 + 0x924) != 0)) &&
       ((iVar5 = FUN_08860188(*(undefined4 *)(*(int *)(param_2 + 0x924) + 0x4c)), iVar5 != 0 &&
        (*(int *)(iVar5 + 0xc) == *(int *)(iVar12 + 0x15c))))) {
      fVar13 = *(float *)(iVar12 + 0x180);
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = fVar13 < param_1;
        break;
      case 2:
        bVar4 = fVar13 <= param_1;
        break;
      case 3:
        bVar4 = fVar13 == param_1;
        break;
      case 4:
        bVar4 = fVar13 != param_1;
        break;
      case 5:
        bVar4 = param_1 <= fVar13;
        break;
      case 6:
        bVar4 = param_1 < fVar13;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x1f:
    if (iVar12 != 0) {
      bVar4 = (*(uint *)(iVar12 + 0x144) & 0x40000) != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x20:
    if (iVar12 != 0) {
      iVar12 = FUN_08888968(iVar12 + 0x434);
      bVar4 = iVar12 != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x21:
    bVar4 = *(int *)(*(int *)(param_2 + 0x1a0) + 0x140) == 0x13;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x22:
    iVar12 = *(int *)(param_2 + 0x96c);
    if ((iVar12 != 0) &&
       ((iVar12 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x7c))
                            (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x78)), iVar12 != 0 ||
        (iVar12 = *(int *)(*(int *)(param_2 + 0x96c) + 0x14),
        iVar12 = (**(code **)(iVar12 + 0x84))
                           (*(int *)(param_2 + 0x96c) + (int)*(short *)(iVar12 + 0x80)), iVar12 != 0
        )))) {
      return true;
    }
    break;
  case 0x23:
    if (iVar12 != 0) {
      iVar12 = (**(code **)(*(int *)(iVar12 + 0x14) + 0x54))
                         (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x50));
      bVar4 = iVar12 != 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
    break;
  case 0x24:
    iVar12 = FUN_0885fd08(*(undefined4 *)(param_2 + 0x1a0));
    bVar4 = iVar12 != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x25:
    iVar12 = FUN_0885fd90(*(undefined4 *)(param_2 + 0x1a0));
    bVar4 = iVar12 != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x26:
    iVar12 = FUN_0885fd54(*(undefined4 *)(param_2 + 0x1a0));
    bVar4 = iVar12 != 0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x28:
    bVar4 = *(char *)(param_2 + 0x915) != '\0';
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = !bVar4;
      break;
    case 2:
      bVar4 = bVar4 < 2;
      break;
    case 3:
      break;
    case 4:
      bVar4 = !bVar4;
      break;
    case 5:
      break;
    case 6:
      bVar4 = true < bVar4;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x29:
    fVar13 = *(float *)(param_2 + 0x97c);
    param_1 = param_1 * 10.0;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = fVar13 < param_1;
      break;
    case 2:
      bVar4 = fVar13 <= param_1;
      break;
    case 3:
      bVar4 = fVar13 == param_1;
      break;
    case 4:
      bVar4 = fVar13 != param_1;
      break;
    case 5:
      bVar4 = param_1 <= fVar13;
      break;
    case 6:
      bVar4 = param_1 < fVar13;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x2a:
    if (*(int *)(param_2 + 0x1a0) == 0) {
      uVar6 = 0;
    }
    else {
      fVar13 = (float)FUN_0888e3a8(0x44fa0000,0x41f00000,param_2,*(int *)(param_2 + 0x1a0));
      uVar6 = 0;
      if (fVar13 != 0.0) {
        uVar6 = 1;
      }
    }
    bVar4 = false;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = uVar6 == 0;
      break;
    case 2:
      bVar4 = uVar6 < 2;
      break;
    case 3:
      bVar4 = uVar6 == 1;
      break;
    case 4:
      bVar4 = uVar6 != 1;
      break;
    case 5:
      bVar4 = uVar6 != 0;
      break;
    case 6:
      bVar4 = 1 < uVar6;
      break;
    case 7:
      bVar4 = false;
    }
    return bVar4;
  case 0x2b:
    piVar9 = (int *)FUN_088660c8();
    if (piVar9 == (int *)0x0) {
      iVar12 = 0;
    }
    else {
      iVar5 = *piVar9;
      iVar12 = 0;
      if (iVar5 != 0) {
        iVar10 = *(int *)(param_2 + 0x1a0);
        do {
          if (iVar10 == iVar5) {
            iVar5 = *(int *)(iVar5 + 4);
          }
          else {
            if (*(char *)(iVar5 + 0x4c1) == '\0') {
              iVar10 = FUN_0888e104(param_2,iVar5);
              if (iVar10 != 0) {
                iVar5 = *(int *)(iVar5 + 4);
                goto LAB_0889257c;
              }
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(iVar5 + 4);
          }
LAB_0889257c:
          if (iVar5 == 0) goto LAB_08892584;
          iVar10 = *(int *)(param_2 + 0x1a0);
        } while( true );
      }
      iVar12 = 0;
    }
LAB_08892584:
    iVar5 = (int)param_1;
    switch(param_4) {
    case 0:
      bVar4 = true;
      break;
    case 1:
      bVar4 = iVar12 < iVar5;
      break;
    case 2:
      bVar4 = iVar12 <= iVar5;
      break;
    case 3:
      bVar4 = iVar12 == iVar5;
      break;
    case 4:
      bVar4 = iVar12 != iVar5;
      break;
    case 5:
      bVar4 = iVar5 <= iVar12;
      break;
    case 6:
      bVar4 = iVar5 < iVar12;
      break;
    case 7:
      bVar4 = false;
      break;
    default:
      bVar4 = false;
    }
    return bVar4;
  case 0x2c:
    if (iVar12 != 0) {
      bVar4 = *(int *)(iVar12 + 0x140) == 0;
      switch(param_4) {
      case 0:
        bVar4 = true;
        break;
      case 1:
        bVar4 = !bVar4;
        break;
      case 2:
        bVar4 = bVar4 < 2;
        break;
      case 3:
        break;
      case 4:
        bVar4 = !bVar4;
        break;
      case 5:
        break;
      case 6:
        bVar4 = true < bVar4;
        break;
      case 7:
        bVar4 = false;
        break;
      default:
        bVar4 = false;
      }
      return bVar4;
    }
  }
  return false;
}

