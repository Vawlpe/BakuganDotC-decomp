#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08896454(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  float fVar11;
  
  puVar9 = (undefined4 *)(param_1 + 0x2d8);
  if (*(int *)(param_1 + 0x2f4) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2dc) == 0x1b) {
    puVar3 = (undefined2 *)FUN_0888fe34(param_1,puVar9,&DAT_08a803b0);
    if (puVar3 == (undefined2 *)0x0) {
      return;
    }
    uVar10 = FUN_088903e8(param_1,puVar3 + 0x18);
    FUN_08895d40(uVar10,puVar9,*(undefined *)(puVar3 + 1),*(undefined *)(puVar3 + 0x18),
                 *(undefined *)(puVar3 + 0x1e),(int)(short)puVar3[0x20]);
    *(undefined2 *)(param_1 + 0x402) = *puVar3;
  }
  iVar4 = FUN_08895df8(puVar9);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x2f8);
  }
  else {
    *(undefined4 *)(param_1 + 0x2dc) = *puVar9;
    iVar4 = FUN_08a2a2cc(param_1 + 0xa04);
    *(undefined4 *)(param_1 + 0x300) = 0;
    *(float *)(param_1 + 0x2fc) = (float)iVar4 * 0.03333334;
    *(bool *)(param_1 + 0x304) = (float)iVar4 * 0.03333334 <= 0.0;
    switch(*(int *)(param_1 + 0x2dc)) {
    case 0:
      *(undefined *)(param_1 + 0x2f0) = 0;
      *(undefined4 *)(param_1 + 0x2f8) = 3;
      break;
    case 1:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899458;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899458;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(code **)(param_1 + 0x3d4) = FUN_08899534;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899498;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0xc000;
      *(undefined4 *)(param_1 + 0x2e4) = 0xc000;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899498;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(code **)(param_1 + 0x3d4) = FUN_08899534;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0xc000;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_088994b8;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0x4000;
      *(undefined4 *)(param_1 + 0x2e4) = 0x4000;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_088994b8;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(code **)(param_1 + 0x3d4) = FUN_08899534;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0x4000;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899478;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0x8000;
      *(undefined4 *)(param_1 + 0x2e4) = 0x8000;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899478;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(code **)(param_1 + 0x3d4) = FUN_08899534;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0x8000;
      break;
    case 9:
      if (*(short *)(param_1 + 0xa26) == 0) {
        uVar5 = FUN_089bed14(4);
        if (uVar5 < 5) {
          if (uVar5 == 1) {
            *(undefined4 *)(param_1 + 0x3c8) = 0;
            *(code **)(param_1 + 0x3cc) = FUN_08899498;
          }
          else if (uVar5 == 2) {
            *(undefined4 *)(param_1 + 0x3c8) = 0;
            *(code **)(param_1 + 0x3cc) = FUN_088994b8;
          }
          else if (uVar5 == 3) {
            *(undefined4 *)(param_1 + 0x3c8) = 0;
            *(code **)(param_1 + 0x3cc) = FUN_08899478;
          }
          else if (uVar5 != 4) {
            *(undefined4 *)(param_1 + 0x3c8) = 0;
            *(code **)(param_1 + 0x3cc) = FUN_08899458;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x3c8) = 0;
        *(code **)(param_1 + 0x3cc) = FUN_08899458;
      }
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(code **)(param_1 + 0x3d4) = FUN_088994e0;
      *(undefined *)(param_1 + 0x2f0) = 0;
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      FUN_08895d40(*(undefined4 *)(param_1 + 0x318),param_1 + 0x404,
                   *(int *)(param_1 + 0x2dc) * 4 >> 2,*(undefined *)(param_1 + 0x314),
                   *(undefined4 *)(param_1 + 0x31c),0xffffffff);
      *(undefined4 *)(param_1 + 0x2f8) = 3;
      break;
    default:
      FUN_0888cfe4(puVar9);
      return;
    case 0x18:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899458;
      iVar4 = FUN_089bed14(2);
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined4 *)(param_1 + 0x3d0) = 0;
          *(code **)(param_1 + 0x3d4) = FUN_088994b8;
        }
      }
      else if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        *(code **)(param_1 + 0x3d4) = FUN_08899498;
      }
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      *(code **)(param_1 + 0x3dc) = FUN_08899534;
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(code **)(param_1 + 0x3cc) = FUN_08899458;
      iVar4 = FUN_089bed14(2);
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined4 *)(param_1 + 0x3d0) = 0;
          *(code **)(param_1 + 0x3d4) = FUN_088994b8;
        }
      }
      else if (iVar4 < 2) {
        *(undefined4 *)(param_1 + 0x3d0) = 0;
        *(code **)(param_1 + 0x3d4) = FUN_08899498;
      }
      *(undefined *)(param_1 + 0x2f0) = 1;
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      *(undefined4 *)(param_1 + 0x2e4) = 0;
      break;
    case 0x1a:
      *(undefined4 *)(param_1 + 0x2f8) = 0xd;
      *(undefined4 *)(param_1 + 0x2e0) = 2;
    }
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    iVar4 = *(int *)(param_1 + 0x2f8);
  }
  if ((iVar4 != 0) && (*(char *)(param_1 + 0x310) == '\0')) {
    fVar11 = *(float *)(param_1 + 0x30c) + 0.03333334;
    *(float *)(param_1 + 0x30c) = fVar11;
    if (*(float *)(param_1 + 0x308) <= fVar11) {
      *(float *)(param_1 + 0x30c) = *(float *)(param_1 + 0x308);
      *(undefined *)(param_1 + 0x310) = 1;
    }
  }
  iVar8 = iVar4 * 4 >> 2;
  switch(iVar4) {
  case 0:
    if (*(char *)(param_1 + 0x304) == '\0') {
      fVar11 = *(float *)(param_1 + 0x300) + 0.03333334;
      *(float *)(param_1 + 0x300) = fVar11;
      if (*(float *)(param_1 + 0x2fc) <= fVar11) {
        *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x2fc);
        *(undefined *)(param_1 + 0x304) = 1;
        cVar7 = *(char *)(param_1 + 0x304);
      }
      else {
        cVar7 = '\0';
      }
      if (cVar7 == '\0') {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2f8) = 1;
    goto LAB_08896aec;
  case 1:
LAB_08896aec:
    *(undefined *)(param_1 + 0x400) = 1;
    iVar4 = FUN_0888f880(param_1,puVar9);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    }
    break;
  case 2:
    FUN_0888f880(param_1,puVar9);
    if ((*(char *)(param_1 + 0x2f0) != '\0') &&
       (iVar4 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,
                             *(undefined4 *)(param_1 + 0x2e0)), iVar4 != 0)) {
      iVar8 = FUN_0888efc8(param_1);
      if ((iVar8 == 0) || (iVar4 != 3)) {
        iVar8 = FUN_0888f028(0x44098000,param_1);
        if (iVar8 == 0) {
          iVar8 = FUN_08893220(param_1,iVar4);
          if (iVar8 == 0) {
LAB_08896c28:
            uVar10 = 0xb;
            iVar4 = FUN_0888ef80(param_1,iVar4);
            if (iVar4 != 0) {
              uVar10 = 4;
            }
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
            iVar8 = (**(code **)(iVar8 + 0x1c))
                              (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar8 + 0x18));
            iVar6 = FUN_089bed14(99);
            if (iVar8 <= iVar6) goto LAB_08896c28;
            uVar10 = 6;
          }
          *(undefined4 *)(param_1 + 0x2f8) = uVar10;
        }
        else {
          iVar4 = FUN_0888ef80(param_1,iVar4);
          if (iVar4 == 0) {
            *(undefined4 *)(param_1 + 0x2f8) = 0x11;
            FUN_08894c1c(puVar9);
          }
          else {
            *(undefined4 *)(param_1 + 0x2f8) = 4;
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x2f8) = 0x11;
        FUN_08894c1c(puVar9);
        FUN_0888cfe4(param_1 + 0x404);
      }
    }
  case 3:
    iVar4 = FUN_08892948(param_1,puVar9);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x2f8) = 0x11;
      FUN_08894c1c(puVar9);
    }
    break;
  case 4:
    FUN_08895e0c(param_1 + 0x404);
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x2000;
    uVar10 = *(undefined4 *)(param_1 + 0x2e4);
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    goto LAB_08896c9c;
  case 5:
    uVar10 = *(undefined4 *)(param_1 + 0x2e4);
LAB_08896c9c:
    FUN_08893fe4(param_1,param_1 + 0x3e0,uVar10);
    if (*(char *)(param_1 + 0x3fc) != '\0') {
      FUN_0888cfe4(param_1 + 0x404);
      *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffdfff;
      if (*(char *)(param_1 + 0x3fd) == '\0') {
        *(undefined4 *)(param_1 + 0x2f8) = 0x11;
        *(undefined4 *)(param_1 + 0x3e0) = 0;
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        *(undefined4 *)(param_1 + 1000) = 0;
        *(undefined *)(param_1 + 0x3ec) = 1;
        *(undefined4 *)(param_1 + 0x3f0) = 0;
        *(undefined4 *)(param_1 + 0x3f4) = 0;
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        *(undefined *)(param_1 + 0x3fc) = 0;
        *(undefined *)(param_1 + 0x3fd) = 0;
        FUN_08894c1c(puVar9);
      }
      else {
        *(undefined4 *)(param_1 + 0x2f8) = 0xb;
        *(undefined4 *)(param_1 + 0x3e0) = 0;
        *(undefined4 *)(param_1 + 0x3e4) = 0;
        *(undefined4 *)(param_1 + 1000) = 0;
        *(undefined *)(param_1 + 0x3ec) = 1;
        *(undefined4 *)(param_1 + 0x3f0) = 0;
        *(undefined4 *)(param_1 + 0x3f4) = 0;
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        *(undefined *)(param_1 + 0x3fc) = 0;
        *(undefined *)(param_1 + 0x3fd) = 0;
      }
    }
    break;
  case 6:
    FUN_08895e0c(param_1 + 0x530);
    FUN_08895e0c(param_1 + 0x404);
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x1000;
    FUN_0888f2c4(param_1,0);
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    uVar10 = *(undefined4 *)(param_1 + 0xa18);
    goto LAB_08896d88;
  case 7:
    uVar10 = *(undefined4 *)(param_1 + 0xa18);
LAB_08896d88:
    uVar10 = FUN_088930c0(uVar10,param_1,0);
    iVar4 = FUN_08893220(param_1,uVar10);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x2f8) = 10;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1a0);
      bVar2 = false;
      if ((*(uint *)(iVar4 + 0x144) & 0x400000) == 0) {
        bVar1 = false;
        if ((*(int *)(iVar4 + 0x140) == 8) || (*(int *)(iVar4 + 0x140) == 10)) {
          bVar1 = true;
        }
        if (((!bVar1) && ((*(uint *)(iVar4 + 0x16c) & 0xc00) == 0)) &&
           ((*(uint *)(iVar4 + 0x144) & 0x100) == 0)) {
          bVar2 = true;
        }
      }
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
    }
    break;
  case 8:
    iVar4 = FUN_0888f028(0x44bb8000,param_1);
    if (iVar4 != 0) {
      FUN_08897ec4(param_1,param_1 + 0x3e0);
      FUN_088601c8(*(undefined4 *)(param_1 + 0x1a0));
      *(undefined4 *)(param_1 + 0x2f8) = 10;
      return;
    }
    goto LAB_08896e7c;
  case 9:
LAB_08896e7c:
    FUN_08897ee4(param_1,param_1 + 0x3e0,0);
    uVar10 = FUN_088930c0(*(undefined4 *)(param_1 + 0xa18),param_1,0);
    iVar4 = FUN_08893220(param_1,uVar10);
    if (iVar4 == 0) {
      FUN_08897ec4(param_1,param_1 + 0x3e0);
      FUN_088601c8(*(undefined4 *)(param_1 + 0x1a0));
      *(undefined4 *)(param_1 + 0x2f8) = 10;
    }
    else if (*(char *)(param_1 + 0x3fc) != '\0') {
      if (*(char *)(param_1 + 0x3fd) == '\0') {
        *(undefined4 *)(param_1 + 0x2f8) = 8;
      }
      else {
        FUN_0888f304(param_1);
        FUN_0888cfe4(param_1 + 0x530);
        FUN_0888cfe4(param_1 + 0x404);
        *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffefff;
        *(undefined4 *)(param_1 + 0x2f8) = 0xb;
      }
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined *)(param_1 + 0x3ec) = 1;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined *)(param_1 + 0x3fc) = 0;
      *(undefined *)(param_1 + 0x3fd) = 0;
    }
    break;
  case 10:
    FUN_0888f304(param_1);
    FUN_0888cfe4(param_1 + 0x530);
    FUN_0888cfe4(param_1 + 0x404);
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) & 0xffffefff;
    *(undefined4 *)(param_1 + 0x2f8) = 0x11;
    FUN_08894c1c(puVar9);
    break;
  case 0xb:
    FUN_08895e0c(param_1 + 0x530);
    FUN_08895e0c(param_1 + 0x404);
    FUN_0888f2c4(param_1,0);
    *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
    goto LAB_08897004;
  case 0xc:
LAB_08897004:
    FUN_08894554(param_1,param_1 + 0x3e0);
    if (*(char *)(param_1 + 0x3fc) != '\0') {
      FUN_0888f304(param_1);
      FUN_0888cfe4(param_1 + 0x530);
      FUN_0888cfe4(param_1 + 0x404);
      *(undefined4 *)(param_1 + 0x2f8) = 0x11;
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined *)(param_1 + 0x3ec) = 1;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined *)(param_1 + 0x3fc) = 0;
      *(undefined *)(param_1 + 0x3fd) = 0;
      FUN_08894c1c(puVar9);
    }
    break;
  case 0xd:
    *(undefined *)(param_1 + 0x400) = 1;
    *(int *)(param_1 + 0x2f8) = iVar8 + 1;
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x304) == '\0') {
      fVar11 = *(float *)(param_1 + 0x300) + 0.03333334;
      *(float *)(param_1 + 0x300) = fVar11;
      if (*(float *)(param_1 + 0x2fc) <= fVar11) {
        *(float *)(param_1 + 0x300) = *(float *)(param_1 + 0x2fc);
        *(undefined *)(param_1 + 0x304) = 1;
        cVar7 = *(char *)(param_1 + 0x304);
      }
      else {
        cVar7 = '\0';
      }
      if (cVar7 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x2f8) = iVar8 + 1;
    uVar10 = *(undefined4 *)(param_1 + 0x2e0);
    goto LAB_088970f0;
  case 0xf:
    uVar10 = *(undefined4 *)(param_1 + 0x2e0);
LAB_088970f0:
    FUN_08897ee4(param_1,param_1 + 0x3e0,uVar10);
    if (*(char *)(param_1 + 0x3fc) != '\0') {
      *(undefined4 *)(param_1 + 0x3e0) = 0;
      *(undefined4 *)(param_1 + 0x3e4) = 0;
      *(undefined4 *)(param_1 + 1000) = 0;
      *(undefined *)(param_1 + 0x3ec) = 1;
      *(undefined4 *)(param_1 + 0x3f0) = 0;
      *(undefined4 *)(param_1 + 0x3f4) = 0;
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      *(undefined *)(param_1 + 0x3fc) = 0;
      *(undefined *)(param_1 + 0x3fd) = 0;
      *(undefined4 *)(param_1 + 0x2f8) = 0x10;
    }
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 0x2f8) = 3;
  }
  return;
}

