#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08889594(int *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((*param_1 != 0) && (*(char *)(*(int *)(*param_1 + 0x168) + 0xc) == '\0')) &&
     (iVar3 = FUN_0884c8f4(), iVar3 == 0)) {
    bVar2 = false;
    iVar3 = 0;
    piVar7 = param_1;
    do {
      if (*(char *)(piVar7 + 3) != '\0') {
        iVar4 = FUN_0885fc80(*param_1);
        if (((iVar4 == 0) || (iVar3 < 0xb)) || ((0x10 < iVar3 || (bVar2)))) {
          if ((iVar3 == 0x12) && (iVar4 = param_1[0x3e], param_1[0x3e] = iVar4 + -1, iVar4 + -1 < 1)
             ) {
            FUN_08887bac(0x41200000,param_1,0xffffffff,1);
            iVar4 = FUN_0885fc80(*param_1);
            if (iVar4 == 0) {
              param_1[0x3e] = 0x1e;
            }
            else {
              uVar6 = FUN_089c59f0();
              FUN_089c6914(uVar6,0x200073);
              param_1[0x3e] = 0x1e;
            }
          }
          if (iVar3 == 0x14) {
            iVar4 = param_1[0x3f];
            fVar8 = 1.0;
            param_1[0x3f] = iVar4 + -1;
            if (iVar4 + -1 < 1) {
              if (*(char *)param_1[0x22] == '\x04') {
                fVar8 = 1.5;
              }
              if (*(int *)(*param_1 + 8) == 0xf) {
                param_1[0x3f] = 0xf;
              }
              else {
                FUN_08887bac(fVar8 * 5.0,param_1,0xffffffff,1);
                param_1[0x3f] = 0xf;
              }
            }
            sVar1 = *(short *)((int)piVar7 + 10);
          }
          else {
            sVar1 = *(short *)((int)piVar7 + 10);
          }
          iVar4 = sVar1 + -1;
          if ((sVar1 != -1) &&
             (*(short *)((int)piVar7 + 10) = (short)iVar4, iVar4 * 0x10000 >> 0x10 < 1)) {
            FUN_088865ac(param_1,iVar3);
          }
        }
        else {
          fVar8 = (float)FUN_08887cdc(param_1);
          if ((fVar8 < 1.0) && (iVar4 = param_1[0x3d], param_1[0x3d] = iVar4 + -1, iVar4 + -1 < 1))
          {
            fVar8 = 1.0;
            iVar4 = *(int *)(*param_1 + 0x14);
            iVar4 = (**(code **)(iVar4 + 0xa4))(*param_1 + (int)*(short *)(iVar4 + 0xa0));
            if (iVar3 + -0xb == iVar4) {
              fVar8 = 1.5;
            }
            iVar4 = FUN_088243d8(DAT_08ac5c70,0x5b,*param_1 + 0x250);
            fVar9 = (float)FUN_08887b94(param_1);
            iVar5 = FUN_08887a90(param_1);
            fVar10 = (float)iVar5;
            if (iVar5 < 0) {
              fVar10 = fVar10 + 4.294967e+09;
            }
            FUN_08887ae4(fVar9 + fVar10 * fVar8 * 0.03,param_1);
            uVar6 = FUN_089c59f0();
            iVar5 = FUN_089c6914(uVar6,0x200191);
            if ((iVar5 == 0) && (iVar5 = FUN_089c59d4(), iVar5 != 0)) {
              uVar6 = FUN_089c59f0();
              FUN_089c6350(uVar6,0x200191,0,0);
            }
            param_1[0x3d] = 0x5a;
            if (iVar4 != 0) {
              iVar5 = *param_1;
              *(int *)(iVar4 + 0x1fc) = iVar5;
              if (iVar5 != 0) {
                *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(iVar5 + 0xc);
              }
            }
          }
          bVar2 = true;
        }
      }
      iVar3 = iVar3 + 1;
      piVar7 = (int *)((int)piVar7 + 6);
    } while (iVar3 < 0x15);
  }
  return;
}

