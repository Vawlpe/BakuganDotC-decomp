#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089227dc(int param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  
  if (param_2 == '\0') {
    uVar1 = FUN_0892c394(*(undefined *)(param_1 + 0x2178));
    cVar8 = '\0';
    uVar9 = uVar1 >> 8 & 0xff;
    uVar1 = uVar1 >> 0x10 & 0xff;
    while( true ) {
      uVar2 = FUN_0891f980(param_1,cVar8);
      uVar7 = uVar2 & 0xffff;
      if (uVar7 == 0xff) break;
      iVar6 = uVar7 * 4;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      if (uVar7 < 0x83) {
        switch(uVar7) {
        case 0x35:
          FUN_0892c8e0(iVar5,*(undefined *)(param_1 + 0x2177));
          FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6));
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        case 0x36:
          FUN_0892c920(iVar5,*(undefined *)(param_1 + 0x2177));
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
               *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x60) +
               *(float *)(param_1 + 0x2184);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
               (*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 100) +
               *(float *)(param_1 + 0x2188)) - -32.0;
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        case 0x37:
          FUN_0892c8a0(iVar5,*(undefined *)(param_1 + 0x2177));
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x60) =
               *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 0x60) +
               *(float *)(param_1 + 0x217c);
          *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 100) =
               (*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xd4) + 100) +
               *(float *)(param_1 + 0x2180)) - -32.0;
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
          break;
        case 0x3f:
          FUN_089f4a90((float)(uVar9 / 3),(float)(uVar9 % 3),iVar5);
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        case 0x40:
          FUN_089f4a90((float)(uVar1 / 3),(float)(uVar1 % 3),iVar5);
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        default:
          if (uVar7 < 0x82) {
            uVar4 = *(uint *)(iVar5 + 0xd0);
          }
          else {
            if ((*(byte *)(param_1 + 0x218c) & 4) != 0) {
              *(undefined4 *)(iVar5 + 0xb0) = 0x3f000000;
              *(undefined4 *)(iVar5 + 0xb4) = 0x3f000000;
              *(undefined4 *)(iVar5 + 0xb8) = 0x3f000000;
              *(undefined4 *)(iVar5 + 0xbc) = 0;
              iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
              break;
            }
            uVar4 = *(uint *)(iVar5 + 0xd0);
          }
          goto LAB_08922bb8;
        }
        goto switchD_089228d4_caseD_38;
      }
      switch(uVar7) {
      case 0xb3:
        FUN_0891faf4(param_1,iVar5,*(undefined *)(param_1 + 0x2177));
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        break;
      case 0xb4:
      case 0xb5:
      case 0xb6:
        break;
      case 0xb7:
      case 0xb9:
        if ((*(byte *)(param_1 + 0x218c) & 1) != 0) {
          *(undefined4 *)(iVar5 + 0xb0) = 0x3f000000;
          *(undefined4 *)(iVar5 + 0xb4) = 0x3f000000;
          *(undefined4 *)(iVar5 + 0xb8) = 0x3f000000;
          *(undefined4 *)(iVar5 + 0xbc) = 0;
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
          break;
        }
        uVar4 = *(uint *)(iVar5 + 0xd0);
        goto LAB_08922bb8;
      case 0xb8:
      case 0xba:
        if ((*(byte *)(param_1 + 0x218c) & 2) == 0) {
          uVar4 = *(uint *)(iVar5 + 0xd0);
          goto LAB_08922bb8;
        }
        *(undefined4 *)(iVar5 + 0xb0) = 0x3f000000;
        *(undefined4 *)(iVar5 + 0xb4) = 0x3f000000;
        *(undefined4 *)(iVar5 + 0xb8) = 0x3f000000;
        *(undefined4 *)(iVar5 + 0xbc) = 0;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        break;
      case 0xbb:
        FUN_0891fb34(param_1,iVar5,*(undefined *)(param_1 + 0x2174),*(undefined *)(param_1 + 0x2175)
                    );
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        break;
      default:
        if (uVar7 == 0x84) {
          iVar3 = FUN_0891fab0(param_1,*(uint *)(DAT_08ac58c4 + 4) & 0xff);
          FUN_089f4a90(0,(float)iVar3,iVar5);
          iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
        }
      }
switchD_089228d4_caseD_38:
      uVar4 = *(uint *)(iVar5 + 0xd0);
LAB_08922bb8:
      *(uint *)(iVar5 + 0xd0) = uVar4 | 1;
      *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0x128) = 1 << (uVar2 >> 0x10 & 0x1f);
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6),
                   param_1 + uVar7 * 0x28 + 0x7c,9);
      cVar8 = cVar8 + '\x01';
    }
  }
  else {
    cVar8 = '\0';
    while( true ) {
      uVar1 = FUN_0891f980(param_1,cVar8);
      uVar1 = uVar1 & 0xffff;
      if (uVar1 == 0xff) break;
      FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar1 * 4),
                   param_1 + uVar1 * 0x28 + 0x7c,9);
      cVar8 = cVar8 + '\x01';
    }
  }
  return;
}

