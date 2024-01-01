#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08916cf4(int param_1)

{
  undefined auVar1 [16];
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  undefined4 uVar12;
  int iVar13;
  
  iVar10 = *(int *)(param_1 + 0x2c);
  if (0x65 < iVar10) {
    if (iVar10 < 0xc9) {
      if (199 < iVar10) {
        FUN_08914a18(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (iVar10 < 0xca) {
      iVar10 = FUN_08914a24(param_1,1);
      if (iVar10 != 0) {
        if (*(int *)(param_1 + 0x16a0) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
        else {
          FUN_08914e18(param_1,*(undefined4 *)(param_1 + 0x1698));
          *(undefined4 *)(param_1 + 0x2c) = 0xca;
        }
      }
    }
    else if ((iVar10 < 0xcb) && (iVar10 = FUN_08915164(param_1), iVar10 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    goto switchD_08916d4c_caseD_9;
  }
  switch(iVar10) {
  case 0:
    FUN_0892c130(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),param_1 + 0x13bc);
    FUN_0892c25c(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),param_1 + 0x13cc);
    FUN_089130f0(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    iVar10 = FUN_0891356c(param_1,0);
    if (iVar10 != 0) {
      FUN_08914bc8(param_1);
      FUN_08913eec(param_1);
      FUN_08915754(param_1,0);
      FUN_08915c68(param_1,0);
      FUN_08916068(param_1,0);
      FUN_08913434(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar2 = FUN_089138b4(param_1,0);
    cVar3 = FUN_08913b20(param_1,0);
    cVar4 = FUN_08913c90(param_1,0);
    cVar5 = FUN_08913dc0(param_1,0);
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5) == '\x04') {
      iVar10 = 100;
      piVar6 = (int *)FUN_0880cc48();
      if ((*(ushort *)(*piVar6 + 0x82) & 0x100) != 0) {
        iVar10 = *(int *)(param_1 + 0x2c) + 1;
      }
      *(int *)(param_1 + 0x2c) = iVar10;
    }
    break;
  case 3:
    FUN_08916780(param_1);
    uVar7 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698));
    FUN_08914888(param_1,uVar7);
    FUN_08914bc8(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 4:
    iVar10 = *(int *)(param_1 + 0x1698);
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
      if (*(int *)(param_1 + 0x1698) == 6) {
        iVar13 = FUN_089c59d4();
        if (iVar13 != 0) {
          uVar7 = FUN_089c59f0(param_1);
          FUN_089c6350(uVar7,0,0,0);
        }
        FUN_0890a598(param_1,1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        iVar13 = FUN_0891502c(param_1,*(undefined4 *)(param_1 + 0x1698));
        if (iVar13 == 0) {
          iVar13 = FUN_089c59d4();
          if (iVar13 == 0) {
            iVar13 = *(int *)(param_1 + 0x1698);
          }
          else {
            uVar7 = FUN_089c59f0();
            FUN_089c6350(uVar7,3,0,0);
            iVar13 = *(int *)(param_1 + 0x1698);
          }
          goto LAB_089170e4;
        }
        iVar13 = FUN_089c59d4();
        if (iVar13 != 0) {
          uVar7 = FUN_089c59f0();
          FUN_089c6350(uVar7,0,0,0);
        }
        *(undefined4 *)(param_1 + 0x2c) = 200;
      }
      goto LAB_089170e0;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x10) != 0) {
      iVar13 = *(int *)(param_1 + 0x1698);
      goto LAB_089170e4;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
        iVar13 = *(int *)(param_1 + 0x1698) + -1;
        *(int *)(param_1 + 0x1698) = iVar13;
        if (iVar13 < 0) {
          *(undefined4 *)(param_1 + 0x1698) = 6;
        }
        goto LAB_089170e0;
      }
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) == 0) {
        iVar13 = *(int *)(param_1 + 0x1698);
      }
      else {
        iVar13 = *(int *)(param_1 + 0x1698) + 1;
        *(int *)(param_1 + 0x1698) = iVar13;
        if (6 < iVar13) {
          *(undefined4 *)(param_1 + 0x1698) = 0;
          goto LAB_089170e0;
        }
        iVar13 = *(int *)(param_1 + 0x1698);
      }
    }
    else {
      iVar13 = FUN_089c59d4();
      if (iVar13 != 0) {
        uVar7 = FUN_089c59f0(param_1);
        FUN_089c6350(uVar7,2,0,0);
      }
      FUN_0890a598(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_089170e0:
      iVar13 = *(int *)(param_1 + 0x1698);
    }
LAB_089170e4:
    if (iVar10 != iVar13) {
      iVar10 = FUN_089c59d4();
      if (iVar10 != 0) {
        uVar7 = FUN_089c59f0();
        FUN_089c6350(uVar7,1,0,0);
      }
      FUN_08914bc8(param_1);
      FUN_08916780(param_1);
      uVar7 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698));
      FUN_08914888(param_1,uVar7);
    }
    FUN_089144ac(param_1);
    FUN_08914548(param_1);
    FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x198),param_1 + 0x105c);
    break;
  case 5:
    FUN_08915754(param_1,1);
    FUN_08915c68(param_1,1);
    FUN_08916068(param_1,1);
    FUN_08913434(param_1,1);
    FUN_08914504(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    cVar2 = FUN_089138b4(param_1,1);
    cVar3 = FUN_08913b20(param_1,1);
    cVar4 = FUN_08913c90(param_1,1);
    cVar5 = FUN_08913dc0(param_1,1);
    pauVar11 = (undefined (*) [16])(param_1 + 0x1680);
    auVar1 = vsub_q(ZEXT816(0),*pauVar11);
    auVar1 = vscl_q(auVar1,0x3e4ccccd);
    auVar1 = vadd_q(*pauVar11,auVar1);
    *(int *)*pauVar11 = auVar1._0_4_;
    *(int *)(param_1 + 0x1684) = auVar1._4_4_;
    *(int *)(param_1 + 0x1688) = auVar1._8_4_;
    *(int *)(param_1 + 0x168c) = auVar1._12_4_;
    if ((char)(cVar2 + cVar3 + cVar4 + cVar5) == '\x04') {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 7:
    iVar10 = FUN_089edb80();
    *(undefined4 *)(iVar10 + 0x30) = 0;
    *(undefined4 *)(iVar10 + 0x34) = 0;
    *(undefined4 *)(iVar10 + 0x38) = 0;
    *(undefined4 *)(iVar10 + 0x3c) = 0;
    iVar10 = FUN_089edb80();
    *(undefined4 *)(iVar10 + 0x40) = 0;
    *(undefined4 *)(iVar10 + 0x44) = 0;
    *(undefined4 *)(iVar10 + 0x48) = 0;
    *(undefined4 *)(iVar10 + 0x4c) = 0x3f800000;
    uVar7 = FUN_089edb80();
    FUN_089edf24(uVar7,10);
    FUN_089130f0(param_1,1);
    FUN_089de940(*(undefined4 *)(param_1 + 0x13dc),0);
    *(undefined4 *)(param_1 + 0x13dc) = 0;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    FUN_0891356c(param_1,1);
    uVar7 = FUN_089edb80();
    iVar10 = FUN_089edf70(uVar7);
    if (iVar10 != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    break;
  default:
    if (99 < iVar10) {
      if (iVar10 < 0x65) {
        FUN_08914a18(param_1);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        iVar10 = FUN_08914a24(param_1,0);
        if (iVar10 != 0) {
          piVar6 = (int *)FUN_0880cc48();
          *(ushort *)(*piVar6 + 0x82) = *(ushort *)(*piVar6 + 0x82) | 0x100;
          *(undefined4 *)(param_1 + 0x2c) = 3;
        }
      }
    }
    break;
  case -0x452e541f:
    break;
  }
switchD_08916d4c_caseD_9:
  FUN_0892c180(param_1 + 0x13bc);
  FUN_0892c2d8(param_1 + 0x13cc);
  if (*(int *)(param_1 + 0x13dc) == 0) {
    iVar10 = *(int *)(param_1 + 0x50);
  }
  else {
    uVar12 = *(undefined4 *)(param_1 + 0x13dc);
    uVar7 = FUN_089d9674();
    uVar7 = FUN_089d9c84(uVar7,param_1 + 0x1628);
    iVar10 = FUN_089e0004(uVar12,uVar7);
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x50);
    }
    else if (*(char *)(*(int *)(param_1 + 0x13dc) + 0xb0) == '\0') {
      iVar10 = *(int *)(param_1 + 0x50);
    }
    else {
      uVar12 = *(undefined4 *)(param_1 + 0x13dc);
      uVar7 = FUN_089d9674();
      uVar7 = FUN_089d9c84(uVar7,param_1 + 0x15e8);
      FUN_089df400(0x3e4ccccd,uVar12,uVar7,1);
      iVar10 = *(int *)(param_1 + 0x50);
    }
  }
  iVar13 = 0;
  if (iVar10 != 0) {
    iVar10 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x50) + iVar10) != 0) {
        iVar8 = FUN_089f8880(*(undefined4 *)(*(int *)(param_1 + 0x50) + iVar10));
        iVar9 = FUN_089f889c(*(undefined4 *)(*(int *)(param_1 + 0x50) + iVar10));
        if (iVar8 != iVar9) {
          FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0x50) + iVar10));
        }
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar13 < 1);
  }
  return;
}

