#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892a78c(int param_1)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = 0;
  iVar7 = 0;
  do {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    if (uVar5 == 0) {
      FUN_0892983c(param_1,iVar2,*(ushort *)(param_1 + 0x4ba) & 0xff);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
    }
    if (uVar5 < 0x1a) {
      uVar6 = (int)(uVar5 * 4) >> 2;
      switch(uVar5) {
      case 0:
      case 0x12:
      case 0x13:
      case 0x18:
      case 0x19:
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        sVar1 = *(short *)(param_1 + 0x4ba);
        break;
      default:
        uVar4 = *(uint *)(iVar2 + 0xd0);
        goto LAB_0892a880;
      }
    }
    else {
      uVar4 = *(uint *)(iVar2 + 0xd0);
      uVar6 = uVar5;
LAB_0892a880:
      *(uint *)(iVar2 + 0xd0) = uVar4 & 0xfffffffe;
      sVar1 = *(short *)(param_1 + 0x4ba);
    }
    if (sVar1 == 1) {
      if ((int)uVar6 < 0xf) {
        if (0xc < (int)uVar6) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
          if ((int)uVar6 < 0xe) {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            sVar1 = *(short *)(param_1 + 0x4ba);
          }
          else {
            *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
            sVar1 = *(short *)(param_1 + 0x4ba);
          }
        }
      }
      else if (uVar6 == 0x10) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        sVar1 = *(short *)(param_1 + 0x4ba);
      }
    }
    if ((sVar1 == 2) && (uVar6 == 0x11)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      sVar1 = *(short *)(param_1 + 0x4ba);
    }
    if (((sVar1 == 4) && (0 < (int)uVar6)) && ((int)uVar6 < 0xd)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      FUN_089a51fc(0x3f4ccccd,0x3f4ccccd,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
      pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0x60);
      *pfVar3 = *pfVar3 - 8.0;
      sVar1 = *(short *)(param_1 + 0x4ba);
    }
    if ((sVar1 == 5) && (uVar6 == 0xf)) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    }
    uVar5 = uVar6 + 1;
    iVar7 = iVar7 + 4;
    if (0x19 < (int)uVar5) {
      return;
    }
  } while( true );
}

