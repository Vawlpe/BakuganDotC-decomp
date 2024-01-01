#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089079cc(int param_1,ushort *param_2,int param_3)

{
  undefined **ppuVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar2 = *param_2;
  uVar10 = 0;
  iVar7 = 0;
  uVar11 = 0xffffffff;
  iVar8 = 0;
  if (uVar2 != 0) {
    uVar12 = param_3 - 1;
    bVar3 = uVar12 < 8;
    do {
      iVar9 = (int)param_2 + iVar8 + 0xc;
      uVar6 = (uint)*(ushort *)(iVar9 + 2);
      if (uVar6 != uVar11) {
        uVar11 = uVar6;
      }
      if (bVar3) {
        ppuVar1 = &switchD_08907a68::switchdataD_08a9b050 + uVar12;
        uVar12 = (int)(uVar12 * 4) >> 2;
        switch(*ppuVar1) {
        case (undefined *)0x8907a70:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x34,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_08909678(iVar5,*(undefined4 *)(param_1 + 0x24));
            iVar7 = iVar5;
          }
          break;
        case (undefined *)0x8907adc:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x28,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_089092dc(iVar5,*(undefined4 *)(param_1 + 0x28));
            iVar7 = iVar5;
          }
          break;
        case (undefined *)0x8907b48:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x3c,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_089093dc(iVar5,*(undefined4 *)(param_1 + 0x2c));
            iVar7 = iVar5;
          }
          break;
        case (undefined *)0x8907bb4:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x2c,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_08909318(iVar5,*(undefined4 *)(param_1 + 0x30));
            iVar7 = iVar5;
          }
          break;
        case (undefined *)0x8907c20:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x34,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_08909580(iVar5,*(undefined4 *)(param_1 + 0x34));
            iVar7 = iVar5;
          }
          break;
        case (undefined *)0x8907c8c:
          FUN_089d8634();
          uVar4 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar5 = FUN_089d7d74(0x28,0,0);
          FUN_089d816c(uVar4);
          FUN_089d866c();
          iVar7 = 0;
          if (iVar5 != 0) {
            FUN_0890963c(iVar5,*(undefined4 *)(param_1 + 0x38));
            iVar7 = iVar5;
          }
        }
      }
      if (iVar7 == 0) {
        iVar8 = iVar8 + 4;
      }
      else {
        iVar9 = FUN_0890929c(iVar7,iVar9);
        iVar8 = iVar8 + iVar9;
        *(int *)(iVar7 + 0x1c) = param_3;
        *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(param_2 + 2);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  return;
}

