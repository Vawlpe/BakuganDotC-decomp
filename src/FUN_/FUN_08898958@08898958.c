#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08898958(int param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  
  puVar6 = (undefined4 *)(param_1 + 0x404);
  if (*(char *)(param_1 + 0x944) == '\0') {
    FUN_08895e0c(puVar6);
  }
  if (*(int *)(param_1 + 0x420) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x408) == 0x1b) {
    if (*(int *)(param_1 + 0x96c) == 0) {
      return;
    }
    puVar2 = (undefined2 *)FUN_0888fe34(param_1,puVar6,&DAT_08a80e20);
    if (puVar2 == (undefined2 *)0x0) {
      return;
    }
    uVar7 = FUN_088903e8(param_1,puVar2 + 0x18);
    FUN_08895d40(uVar7,puVar6,*(undefined *)(puVar2 + 1),*(undefined *)(puVar2 + 0x18),
                 *(undefined *)(puVar2 + 0x1e),(int)(short)puVar2[0x20]);
    *(undefined2 *)(param_1 + 0x52e) = *puVar2;
  }
  iVar3 = FUN_08895df8(puVar6);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_1 + 0x424);
  }
  else {
    *(undefined4 *)(param_1 + 0x408) = *puVar6;
    iVar3 = FUN_08a2a2cc(param_1 + 0x9f4);
    *(undefined4 *)(param_1 + 0x42c) = 0;
    *(float *)(param_1 + 0x428) = (float)iVar3 * 0.03333334;
    *(bool *)(param_1 + 0x430) = (float)iVar3 * 0.03333334 <= 0.0;
    iVar3 = *(int *)(param_1 + 0x408) * 4 >> 2;
    switch(*(int *)(param_1 + 0x408)) {
    case 0:
      *(undefined4 *)(param_1 + 0x424) = 0;
      break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x18:
    case 0x19:
      FUN_08895d40(*(undefined4 *)(param_1 + 0x444),param_1 + 0x2d8,iVar3,
                   *(undefined *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x448),0xffffffff);
      *(undefined4 *)(param_1 + 0x424) = 0;
      break;
    case 10:
      if ((*(int *)(*(int *)(param_1 + 0x1a0) + 8) == 0x19) ||
         (*(int *)(*(int *)(param_1 + 0x1a0) + 8) == 0x1a)) {
        *(undefined4 *)(param_1 + 0x424) = 2;
        *(undefined4 *)(param_1 + 0x40c) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x424) = 6;
        *(undefined4 *)(param_1 + 0x4f4) = 0;
        *(undefined **)(param_1 + 0x4f8) = &LAB_08899548;
      }
      break;
    case 0xb:
    case 0x10:
      *(undefined4 *)(param_1 + 0x424) = 10;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      *(undefined **)(param_1 + 0x4f8) = &LAB_08899564;
      FUN_0886004c(0x42c80000,*(undefined4 *)(param_1 + 0x1a0));
      *(int *)(param_1 + 0x948) =
           (int)(*(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 0xcc) * 3.0);
      break;
    case 0xc:
      *(undefined4 *)(param_1 + 0x424) = 2;
      *(undefined4 *)(param_1 + 0x40c) = 0;
      break;
    case 0xd:
      *(undefined4 *)(param_1 + 0x424) = 2;
      *(undefined4 *)(param_1 + 0x40c) = 1;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x424) = 2;
      *(undefined4 *)(param_1 + 0x40c) = 2;
      break;
    default:
      FUN_0888cfe4(puVar6);
      return;
    case 0x11:
      *(undefined4 *)(param_1 + 0x424) = 0x14;
      *(undefined4 *)(param_1 + 0x4f4) = 0;
      *(code **)(param_1 + 0x4f8) = FUN_08899620;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      *(undefined4 *)(param_1 + 0x424) = 0xf;
      iVar3 = FUN_08893280(param_1,iVar3 + -0x12);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x4f4) = 0;
        *(undefined **)(param_1 + 0x4f8) = &LAB_088995f8;
      }
      else {
        *(undefined4 *)(param_1 + 0x4f4) = 0;
        *(undefined **)(param_1 + 0x4f8) = &LAB_0889960c;
      }
      break;
    case 0x1a:
      *(undefined4 *)(param_1 + 0x424) = 2;
      *(undefined4 *)(param_1 + 0x40c) = 2;
    }
    uVar4 = *(uint *)(param_1 + 0x424);
  }
  if (0x18 < uVar4) {
    return;
  }
  iVar3 = (int)(uVar4 * 4) >> 2;
  switch(uVar4) {
  case 0:
    if (*(char *)(param_1 + 0x43c) == '\0') {
      fVar8 = *(float *)(param_1 + 0x438) + 0.03333334;
      *(float *)(param_1 + 0x438) = fVar8;
      if (*(float *)(param_1 + 0x434) <= fVar8) {
        *(float *)(param_1 + 0x438) = *(float *)(param_1 + 0x434);
        *(undefined *)(param_1 + 0x43c) = 1;
      }
    }
    iVar3 = FUN_08892948(param_1,puVar6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 1:
    FUN_08894c1c(puVar6);
    return;
  case 2:
    FUN_08895e0c(param_1 + 0x2d8);
    *(undefined *)(param_1 + 0x52c) = 1;
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    break;
  case 3:
    if (*(char *)(param_1 + 0x430) == '\0') {
      fVar8 = *(float *)(param_1 + 0x42c) + 0.03333334;
      *(float *)(param_1 + 0x42c) = fVar8;
      if (*(float *)(param_1 + 0x428) <= fVar8) {
        *(float *)(param_1 + 0x42c) = *(float *)(param_1 + 0x428);
        *(undefined *)(param_1 + 0x430) = 1;
        cVar5 = *(char *)(param_1 + 0x430);
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x424) = iVar3 + 1;
    uVar7 = *(undefined4 *)(param_1 + 0x40c);
    goto LAB_08898d70;
  case 4:
    uVar7 = *(undefined4 *)(param_1 + 0x40c);
LAB_08898d70:
    FUN_08897ee4(param_1,param_1 + 0x50c,uVar7);
    if (*(char *)(param_1 + 0x528) != '\0') {
      *(undefined4 *)(param_1 + 0x50c) = 0;
      *(undefined4 *)(param_1 + 0x510) = 0;
      *(undefined4 *)(param_1 + 0x514) = 0;
      *(undefined *)(param_1 + 0x518) = 1;
      *(undefined4 *)(param_1 + 0x51c) = 0;
      *(undefined4 *)(param_1 + 0x520) = 0;
      *(undefined *)(param_1 + 0x529) = 0;
      *(undefined4 *)(param_1 + 0x524) = 0;
      *(undefined *)(param_1 + 0x528) = 0;
      uVar7 = 5;
      if (*(char *)(param_1 + 0x529) != '\0') {
        uVar7 = 1;
      }
      *(undefined4 *)(param_1 + 0x424) = uVar7;
    }
    break;
  case 5:
    FUN_0888cfe4(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x424) = 0;
    break;
  case 6:
    *(undefined *)(param_1 + 0x52c) = 1;
    *(int *)(param_1 + 0x424) = iVar3 + 1;
    cVar5 = *(char *)(param_1 + 0x430);
    goto LAB_08898df8;
  case 7:
    cVar5 = *(char *)(param_1 + 0x430);
LAB_08898df8:
    if (cVar5 == '\0') {
      fVar8 = *(float *)(param_1 + 0x42c) + 0.03333334;
      *(float *)(param_1 + 0x42c) = fVar8;
      if (*(float *)(param_1 + 0x428) <= fVar8) {
        *(float *)(param_1 + 0x42c) = *(float *)(param_1 + 0x428);
        *(undefined *)(param_1 + 0x430) = 1;
        cVar5 = *(char *)(param_1 + 0x430);
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
switchD_08898c60_caseD_8:
    iVar3 = FUN_0888f880(param_1,puVar6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 8:
    goto switchD_08898c60_caseD_8;
  case 9:
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x140);
    bVar1 = false;
    if ((iVar3 == 8) || (iVar3 == 10)) {
      bVar1 = true;
    }
    if (!bVar1) {
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    break;
  case 10:
    FUN_08895e0c(param_1 + 0x65c);
    *(undefined *)(param_1 + 0x52c) = 1;
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    cVar5 = *(char *)(param_1 + 0x430);
    goto LAB_08898ed8;
  case 0xb:
    cVar5 = *(char *)(param_1 + 0x430);
LAB_08898ed8:
    if (cVar5 == '\0') {
      fVar8 = *(float *)(param_1 + 0x42c) + 0.03333334;
      *(float *)(param_1 + 0x42c) = fVar8;
      if (*(float *)(param_1 + 0x428) <= fVar8) {
        *(float *)(param_1 + 0x42c) = *(float *)(param_1 + 0x428);
        *(undefined *)(param_1 + 0x430) = 1;
        cVar5 = *(char *)(param_1 + 0x430);
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
switchD_08898c60_caseD_c:
    iVar3 = FUN_0888f880(param_1,puVar6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 0xc:
    goto switchD_08898c60_caseD_c;
  case 0xd:
    FUN_0888f880(param_1,puVar6);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x140);
    bVar1 = false;
    if ((iVar3 == 8) || (iVar3 == 10)) {
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 0xe:
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x140);
    bVar1 = false;
    if ((iVar3 == 8) || (iVar3 == 10)) {
      bVar1 = true;
    }
    if (!bVar1) {
      FUN_0888cfe4(param_1 + 0x65c);
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    break;
  case 0xf:
    FUN_08895e0c(param_1 + 0x2d8);
    FUN_08895e0c(param_1 + 0x65c);
    *(undefined *)(param_1 + 0x52c) = 1;
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    cVar5 = *(char *)(param_1 + 0x430);
    goto LAB_08899020;
  case 0x10:
    cVar5 = *(char *)(param_1 + 0x430);
LAB_08899020:
    if (cVar5 == '\0') {
      fVar8 = *(float *)(param_1 + 0x42c) + 0.03333334;
      *(float *)(param_1 + 0x42c) = fVar8;
      if (*(float *)(param_1 + 0x428) <= fVar8) {
        *(float *)(param_1 + 0x42c) = *(float *)(param_1 + 0x428);
        *(undefined *)(param_1 + 0x430) = 1;
        cVar5 = *(char *)(param_1 + 0x430);
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
switchD_08898c60_caseD_11:
    iVar3 = FUN_0888f880(param_1,puVar6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 0x11:
    goto switchD_08898c60_caseD_11;
  case 0x12:
    FUN_0888f880(param_1,puVar6);
    if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) != 0) {
      *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
    }
    break;
  case 0x13:
    if ((*(uint *)(*(int *)(param_1 + 0x1a0) + 0x144) & 0x100) == 0) {
      FUN_0888cfe4(param_1 + 0x2d8);
      FUN_0888cfe4(param_1 + 0x65c);
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    break;
  case 0x14:
    *(undefined *)(param_1 + 0x52c) = 1;
    *(int *)(param_1 + 0x424) = iVar3 + 1;
    cVar5 = *(char *)(param_1 + 0x430);
    goto LAB_0889911c;
  case 0x15:
    cVar5 = *(char *)(param_1 + 0x430);
LAB_0889911c:
    if (cVar5 == '\0') {
      fVar8 = *(float *)(param_1 + 0x42c) + 0.03333334;
      *(float *)(param_1 + 0x42c) = fVar8;
      if (*(float *)(param_1 + 0x428) <= fVar8) {
        *(float *)(param_1 + 0x42c) = *(float *)(param_1 + 0x428);
        *(undefined *)(param_1 + 0x430) = 1;
        cVar5 = *(char *)(param_1 + 0x430);
      }
      else {
        cVar5 = '\0';
      }
      if (cVar5 == '\0') {
        return;
      }
    }
    *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
switchD_08898c60_caseD_16:
    FUN_0888f880(param_1,puVar6);
    cVar5 = *(char *)(param_1 + 0x43c);
LAB_08899184:
    if (cVar5 == '\0') {
      fVar8 = *(float *)(param_1 + 0x438) + 0.03333334;
      *(float *)(param_1 + 0x438) = fVar8;
      if (*(float *)(param_1 + 0x434) <= fVar8) {
        *(float *)(param_1 + 0x438) = *(float *)(param_1 + 0x434);
        *(undefined *)(param_1 + 0x43c) = 1;
      }
    }
    iVar3 = FUN_08892948(param_1,puVar6);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x424) = 0x18;
    }
    break;
  case 0x16:
    goto switchD_08898c60_caseD_16;
  case 0x17:
    cVar5 = *(char *)(param_1 + 0x43c);
    goto LAB_08899184;
  case 0x18:
    FUN_08894c1c(puVar6);
  }
  return;
}

