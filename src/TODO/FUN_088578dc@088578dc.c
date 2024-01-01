#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088578dc(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac [3];
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_7c;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  
  if (*(char *)(param_1 + 0x4c1) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xa38) == '\0') {
    if (*(char *)(param_1 + 0xa39) == '\0') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0xa3a);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa3a);
  }
  if (cVar1 != '\0') {
    return;
  }
  iVar2 = FUN_0884df98();
  if (iVar2 != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x900)) {
  case 0:
    *(undefined4 *)(param_1 + 0x904) = 600;
    *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
  case 1:
    iVar2 = *(int *)(param_1 + 0x904) + -1;
    *(int *)(param_1 + 0x904) = iVar2;
    if (iVar2 < 1) {
      *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
switchD_08857980_caseD_2:
      iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xb4))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb0));
      if ((iVar2 == 0) && (fVar11 = (float)FUN_08887b94(param_1 + 0x434), 1.0 < fVar11)) {
        iVar2 = FUN_088b3134();
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x900) = 10;
        }
        else {
          *(undefined4 *)(param_1 + 0x904) = 0x3c;
          *(undefined4 *)(param_1 + 0x900) = 1;
        }
      }
    }
    break;
  case 2:
    goto switchD_08857980_caseD_2;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  default:
    *(undefined4 *)(param_1 + 0x900) = 1;
    break;
  case 10:
    puVar8 = (undefined4 *)(param_1 + 0x8b0);
    *puVar8 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x8b4) =
         *(float *)(*(int *)(*(int *)(param_1 + 0x130) + 0x38) + 0x14) * *(float *)(param_1 + 0x44)
         + 10.0 + *(float *)(param_1 + 0x8b4);
    if ((*(char *)(param_1 + 0xa41) == '\0') || (iVar2 = FUN_089c9b48(5,DAT_08ac58c8), iVar2 == 0))
    {
      iVar2 = _DONE_NotZero_DAT_08AC5258();
      if (iVar2 != 0) {
        uVar3 = _DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar3,0x20025a,puVar8,0,1);
      }
    }
    else {
      iVar2 = _DONE_NotZero_DAT_08AC5874();
      if (iVar2 != 0) {
        uVar3 = _DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,0x20025a,0,0);
      }
    }
    iVar2 = FUN_08823f5c(DAT_08abd5b0,0x31,puVar8);
    *(undefined4 **)(iVar2 + 0x160) = puVar8;
    *(undefined4 *)(param_1 + 0x904) = 0x32;
    *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
  case 0xb:
    iVar2 = *(int *)(param_1 + 0x904) + -1;
    *(int *)(param_1 + 0x904) = iVar2;
    if (iVar2 < 1) {
      FUN_08823f5c(DAT_08abd5b0,0x32,param_1 + 0x8b0);
      if ((*(char *)(param_1 + 0xa41) == '\0') || (iVar2 = FUN_089c9b48(5,DAT_08ac58c8), iVar2 == 0)
         ) {
        iVar2 = _DONE_NotZero_DAT_08AC5258();
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x900);
        }
        else {
          uVar3 = _DONE_Get_DAT_08AC5258();
          FUN_089c00c4(uVar3,0x20025b,param_1 + 0x8b0,0,1);
          iVar2 = *(int *)(param_1 + 0x900);
        }
      }
      else {
        iVar2 = _DONE_NotZero_DAT_08AC5874();
        if (iVar2 == 0) {
          iVar2 = *(int *)(param_1 + 0x900);
        }
        else {
          uVar3 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,0x20025b,0,0);
          iVar2 = *(int *)(param_1 + 0x900);
        }
      }
      *(undefined4 *)(param_1 + 0x904) = 0x28;
      *(int *)(param_1 + 0x900) = iVar2 + 1;
switchD_08857980_caseD_c:
      iVar2 = *(int *)(param_1 + 0x904) + -1;
      *(int *)(param_1 + 0x904) = iVar2;
      if (iVar2 < 1) {
        *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
LAB_08857c60:
        local_50 = param_1 + 0x434;
        local_54 = param_1 + 0x434;
        iVar2 = 0;
        local_7c = vrndi_s();
        if (*(char *)(param_1 + 0xa39) == '\0') {
          iVar10 = *(int *)(param_1 + 0xa30);
        }
        else {
          iVar10 = *(int *)(param_1 + 0xa2c);
        }
        iVar6 = 0;
        puVar8 = (undefined4 *)(param_1 + 0x9c0);
        iVar7 = param_1;
        iVar9 = param_1;
        do {
          if (*(char *)(param_1 + 0xa39) == '\0') {
            iVar5 = FUN_088b3134();
            if (iVar5 + iVar2 < iVar10) {
              iVar5 = *(int *)(iVar9 + 0x7f0);
              goto LAB_08857cd0;
            }
          }
          else if (iVar2 < iVar10) {
            iVar5 = *(int *)(iVar9 + 0x7f0);
LAB_08857cd0:
            if (iVar5 == 0) {
              local_d8 = 0;
              local_e0 = 0;
              local_d4 = 0;
              local_d0 = *puVar8;
              local_c8 = puVar8[2];
              local_c4 = puVar8[3];
              local_cc = (float)puVar8[1] + *(float *)(param_1 + 0x44) * 1500.0;
              uVar13 = *(undefined4 *)(iVar7 + 0x9cc);
              local_dc = 0xbf800000;
              local_4c = 0;
              local_48 = puVar8;
              FUN_089d8634();
              uVar3 = FUN_089d81a4();
              FUN_089d816c(1);
              iVar4 = FUN_089d7d74(0x160,0,0);
              FUN_089d816c(uVar3);
              FUN_089d866c();
              puVar8 = local_48;
              iVar5 = local_4c;
              if (iVar4 != 0) {
                FUN_08876d00(iVar4,param_1,0x80);
                iVar5 = iVar4;
              }
              FUN_0887799c(iVar5,&local_d0,&local_e0,0);
              if (((iVar2 == 0) && (*(char *)(param_1 + 0xa41) != '\0')) &&
                 (iVar4 = FUN_089c9b48(5,DAT_08ac58c8), iVar4 != 0)) {
                uVar3 = FUN_0884b268();
                FUN_0884dcb0(0x44a28000,0xc3160000,0x42200000,uVar3,iVar5,0,1,0);
              }
              FUN_08887bac(0x42480000,local_54,0,1);
              iVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 0xb4))
                                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xb0));
              if (iVar4 != 0) {
                fVar12 = *(float *)(param_1 + 0x590);
                iVar4 = FUN_08887a90(local_50);
                fVar11 = (float)iVar4;
                if (iVar4 < 0) {
                  fVar11 = fVar11 + 4.294967e+09;
                }
                FUN_08887ae4(fVar11 * fVar12,local_54);
              }
              local_c0 = 0;
              local_bc = 0;
              local_b8 = 0x437a0000;
              local_b4 = 0;
              local_b0 = 0;
              local_ac[0] = 0;
              FUN_088577e4(param_1,&local_c0,&local_bc,iVar2,&local_b8,&local_b4,&local_b0,local_ac)
              ;
              *(undefined4 *)(iVar5 + 0xfc) = local_c0;
              *(undefined4 *)(iVar5 + 0x100) = *(undefined4 *)(param_1 + 0x938);
              local_a0 = (float)local_bc;
              local_9c = (float)*(int *)(param_1 + 0x908);
              local_98 = (float)iVar6;
              *(float *)(iVar5 + 0x90) = local_a0;
              *(float *)(iVar5 + 0x94) = local_9c;
              *(float *)(iVar5 + 0x98) = local_98;
              *(undefined4 *)(iVar5 + 0x9c) = uVar13;
              local_90 = local_b8;
              local_8c = (float)local_b4;
              local_88 = (float)local_b0;
              local_84 = (float)local_ac[0];
              *(undefined4 *)(iVar5 + 0xa0) = local_b8;
              *(float *)(iVar5 + 0xa4) = local_8c;
              *(float *)(iVar5 + 0xa8) = local_88;
              *(float *)(iVar5 + 0xac) = local_84;
              iVar2 = iVar2 + 1;
              local_94 = uVar13;
            }
          }
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 4;
          iVar7 = iVar7 + 0x10;
          puVar8 = puVar8 + 4;
        } while (iVar6 < 3);
        *(undefined4 *)(param_1 + 0xa2c) = 0;
        if (*(char *)(param_1 + 0xa39) == '\0') {
          *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
switchD_08857980_caseD_e:
          uVar14 = vrndi_s();
          *(uint *)(param_1 + 0x904) = ((uVar14 >> 0x10) * 0x4b0 >> 0x10) + 0x4b0;
          *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
switchD_08857980_caseD_f:
          iVar2 = *(int *)(param_1 + 0x904) + -1;
          *(int *)(param_1 + 0x904) = iVar2;
          if (iVar2 < 1) {
            *(undefined4 *)(param_1 + 0x900) = 99;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x904) = 0x14;
          *(undefined4 *)(param_1 + 0x900) = 0x1e;
        }
      }
    }
    break;
  case 0xc:
    goto switchD_08857980_caseD_c;
  case 0xd:
    goto LAB_08857c60;
  case 0xe:
    goto switchD_08857980_caseD_e;
  case 0xf:
    goto switchD_08857980_caseD_f;
  case 0x1e:
    iVar2 = *(int *)(param_1 + 0x904) + -1;
    *(int *)(param_1 + 0x904) = iVar2;
    if (0 < iVar2) {
      return;
    }
    *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
    goto LAB_08858014;
  case 0x1f:
LAB_08858014:
    if (*(char *)(param_1 + 0xa41) != '\0') {
      FUN_089c9b48(5,DAT_08ac58c8);
    }
    *(undefined4 *)(param_1 + 0x904) = 0x708;
    *(undefined *)(param_1 + 0xa39) = 0;
    *(int *)(param_1 + 0x900) = *(int *)(param_1 + 0x900) + 1;
  }
  return;
}

