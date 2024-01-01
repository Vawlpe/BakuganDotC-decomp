#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089059cc(int param_1,int param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0;
  *(undefined *)(param_1 + 0x55) = 0;
  if (param_2 < 0xfb) {
    switch(param_2) {
    case 0x93:
      *(undefined *)(param_1 + 0x55) = 1;
      return 0x20;
    case 0x94:
    case 0x95:
    case 0x96:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa4:
    case 0xa6:
      break;
    case 0x97:
      *(undefined *)(param_1 + 0x55) = 1;
      return 0x22;
    case 0xa5:
      *param_3 = 1;
      return 0x70;
    case 0xa7:
      *param_3 = 1;
      return 0x71;
    case 0xa8:
      *param_3 = 1;
      return 0x75;
    case 0xa9:
      *param_3 = 1;
      return 0x72;
    case 0xaa:
      *param_3 = 1;
      return 0x73;
    case 0xab:
      *param_3 = 1;
      return 0x74;
    case -0x452e541f:
      if (0xdf < param_2) {
                    // WARNING: Could not recover jumptable at 0x08905a48. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar1 = (*(code *)(&PTR_LAB_08a9ac40)[param_2 + -0xe0])();
        return uVar1;
      }
      break;
    default:
      if (param_2 < 0x10) {
        if (0xe < param_2) goto LAB_08905a08;
      }
      else if (param_2 == 0x37) {
        return 0x37;
      }
    }
  }
  else {
    if (param_2 == 0x2b2) {
      *(undefined *)(param_1 + 0x55) = 1;
      return 0x14c;
    }
    if (param_2 == 0x2b1) {
      *(undefined *)(param_1 + 0x55) = 1;
      return 0x150;
    }
    if (param_2 == 0x150) {
      *(undefined *)(param_1 + 0x55) = 1;
      return 0x21;
    }
    if (param_2 == 0x124) {
LAB_08905a08:
      *(undefined *)(param_1 + 0x55) = 1;
      return 5;
    }
  }
  return 0xffffffff;
}

