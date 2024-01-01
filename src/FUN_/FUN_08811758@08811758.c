#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08811758(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  sVar1 = FUN_089c9d1c();
  uVar2 = FUN_08855008((int)sVar1);
  uVar3 = FUN_089c9da8(param_1);
  fVar7 = (float)FUN_089c9e3c(param_1);
  fVar8 = (float)FUN_089c9e3c(param_1);
  fVar9 = (float)FUN_089c9e3c(param_1);
  fVar10 = (float)FUN_089c9e3c(param_1);
  iVar11 = (int)fVar7;
  fVar12 = fVar10 * 0.01745329;
  iVar4 = FUN_08860188(uVar2);
  if (iVar4 != 0) {
    switch(uVar3) {
    case 0:
      (**(code **)(*(int *)(iVar4 + 0x14) + 0xac))
                (fVar7 * 0.01,iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0xa8));
      break;
    case 1:
      if (fVar7 <= 1.0) {
        if (fVar7 <= 0.0) {
          *(undefined *)(iVar4 + 0xa38) = 0;
        }
        else {
          *(undefined *)(iVar4 + 0xa38) = 1;
        }
      }
      else if (fVar7 <= 2.0) {
        FUN_088598f4(iVar4,(int)fVar8,(int)fVar9,(int)fVar10,1);
      }
      else {
        FUN_088598f4(iVar4,(int)fVar8,(int)fVar9,(int)fVar10,0);
      }
      break;
    case 2:
      FUN_08859950(iVar4,(int)fVar8,(int)fVar9,(int)fVar10);
      break;
    case 3:
      if (fVar7 < 2.0) {
        if (fVar7 <= 0.0) {
          FUN_08859994(iVar4,0);
        }
        else {
          FUN_08859994(iVar4,1);
        }
      }
      else {
        FUN_08859994(iVar4,1);
        *(undefined *)(iVar4 + 0xa40) = 1;
      }
      break;
    case 4:
      if (fVar7 <= 0.0) {
        *(undefined *)(iVar4 + 0xa3b) = 0;
      }
      else {
        *(undefined *)(iVar4 + 0xa3b) = 1;
      }
      break;
    case 5:
      if (fVar7 <= 0.0) {
        *(undefined *)(iVar4 + 0xa3d) = 0;
      }
      else {
        *(undefined *)(iVar4 + 0xa3d) = 1;
      }
      break;
    case 6:
      if (fVar7 <= 0.0) {
        FUN_08859c54(iVar4);
      }
      else {
        FUN_08859a84(iVar4);
      }
      break;
    case 7:
      FUN_08859984(iVar4,(int)fVar8,(int)fVar9,(int)fVar10);
      break;
    case 8:
      *(float *)(iVar4 + 0x9c0) = fVar7;
      *(float *)(iVar4 + 0x9c4) = fVar8;
      *(float *)(iVar4 + 0x9c8) = fVar9;
      *(float *)(iVar4 + 0x9cc) = fVar12;
      break;
    case 9:
      *(float *)(iVar4 + 0x9d0) = fVar7;
      *(float *)(iVar4 + 0x9d4) = fVar8;
      *(float *)(iVar4 + 0x9d8) = fVar9;
      *(float *)(iVar4 + 0x9dc) = fVar12;
      break;
    case 10:
      *(float *)(iVar4 + 0x9e0) = fVar7;
      *(float *)(iVar4 + 0x9e4) = fVar8;
      *(float *)(iVar4 + 0x9e8) = fVar9;
      *(float *)(iVar4 + 0x9ec) = fVar12;
      break;
    case 0xb:
      *(float *)(iVar4 + 0xa50) = fVar7;
      *(float *)(iVar4 + 0xa54) = fVar8;
      *(float *)(iVar4 + 0xa58) = fVar9;
      *(float *)(iVar4 + 0xa5c) = fVar12;
      break;
    case 0xc:
      if (fVar7 < 2.0) {
        if (fVar7 <= 0.0) {
          FUN_08859e08(iVar4);
        }
        else {
          FUN_08859ea0(iVar4);
        }
      }
      else {
        FUN_08859e1c(iVar4);
      }
      break;
    case 0xd:
      iVar5 = FUN_088b3224();
      iVar6 = 0;
      if (fVar7 < (float)iVar5) {
        iVar6 = iVar11;
      }
      FUN_088b31b4(&local_70,iVar6);
      *(undefined4 *)(iVar4 + 0xa50) = local_70;
      *(undefined4 *)(iVar4 + 0xa54) = uStack_6c;
      *(undefined4 *)(iVar4 + 0xa58) = uStack_68;
      *(undefined4 *)(iVar4 + 0xa5c) = uStack_64;
      break;
    case 0xe:
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (9.0 < fVar7) {
        fVar7 = 9.0;
      }
      FUN_08888a64(iVar4 + 0x434,(int)fVar7);
      break;
    case 0xf:
      if (fVar7 < 1.0) {
        fVar7 = 1.0;
      }
      else if (2000.0 < fVar7) {
        fVar7 = 2000.0;
      }
      FUN_08886c58(fVar7,iVar4 + 0x434);
      break;
    case 0x10:
      if (fVar7 < 1.0) {
        fVar7 = 1.0;
      }
      else if (10000.0 < fVar7) {
        fVar7 = 10000.0;
      }
      *(float *)(iVar4 + 0x9f0) = fVar7;
      break;
    case 0x11:
      if (fVar7 < 1.0) {
        fVar7 = 1.0;
      }
      else if (10000.0 < fVar7) {
        fVar7 = 10000.0;
      }
      *(float *)(iVar4 + 0x9f4) = fVar7;
      break;
    case 0x12:
      fVar7 = fVar7 - 1.0;
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      else if (9.0 < fVar7) {
        fVar7 = 9.0;
      }
      *(float *)(iVar4 + 0x9f8) = fVar7;
      break;
    case 0x13:
      if (fVar8 < 1.0) {
        fVar8 = 1.0;
      }
      else if (10.0 < fVar8) {
        fVar8 = 10.0;
      }
      FUN_08859f1c(iVar4,iVar11,(int)fVar8);
      break;
    case 0x14:
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (2000.0 < fVar8) {
        fVar8 = 2000.0;
      }
      FUN_08859f8c(fVar8,iVar4,iVar11);
      break;
    case 0x15:
      fVar8 = fVar8 - 1.0;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (9.0 < fVar8) {
        fVar8 = 9.0;
      }
      FUN_0885a010(iVar4,iVar11,(int)fVar8);
      break;
    case 0x16:
      fVar8 = fVar8 - 1.0;
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (9.0 < fVar8) {
        fVar8 = 9.0;
      }
      FUN_0885a070(iVar4,iVar11,(int)fVar8);
      break;
    case 0x17:
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      else if (9.0 < fVar8) {
        fVar8 = 9.0;
      }
      FUN_0885a0d0(iVar4,iVar11,(int)fVar8);
      break;
    case 0x18:
      if (fVar7 < 1.0) {
        fVar7 = 1.0;
      }
      else if (360.0 < fVar7) {
        fVar7 = 360.0;
      }
      *(int *)(iVar4 + 0xa88) = (int)fVar7;
      break;
    case 0x19:
      if (fVar7 < 1.0) {
        fVar7 = 1.0;
      }
      else if (1000.0 < fVar7) {
        fVar7 = 1000.0;
      }
      *(int *)(iVar4 + 0xa8c) = (int)fVar7;
    }
  }
  return 0;
}

