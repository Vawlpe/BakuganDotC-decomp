#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886fd24(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  
  uVar8 = 0;
  iVar6 = 0;
  uVar4 = 0;
  piVar5 = &DAT_08a67d3c;
  do {
    uVar4 = uVar4 + 1;
    if (*piVar5 == param_1) {
      iVar6 = piVar5[1];
      break;
    }
    piVar5 = piVar5 + 2;
  } while (uVar4 < 0x20);
  switch(DAT_08aba928) {
  case 0:
    FUN_0886f654(param_1,&DAT_08af7c84);
    uVar2 = FUN_089fce94();
    iVar6 = FUN_089fd350(uVar2,&DAT_08af7c84);
    if (iVar6 == 0) {
      iVar6 = *param_2;
      if (iVar6 == 0) {
        FUN_089d8634(0,&DAT_08af7c84);
        uVar2 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar1 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        iVar6 = 0;
        if (iVar1 != 0) {
          FUN_089bd9b4(iVar1);
          iVar6 = iVar1;
        }
        *param_2 = iVar6;
      }
      iVar6 = FUN_089bda88(iVar6,&DAT_08af7c84,10,1,1);
      if (iVar6 != 0) {
        DAT_08aba928 = 1;
      }
    }
    else {
      puVar7 = *(undefined4 **)(&DAT_08ab9c2c + param_1 * 4);
      uVar2 = FUN_089d9674();
      iVar6 = FUN_089d9c84(uVar2,*puVar7);
      if (iVar6 == -1) {
        DAT_08aba928 = 2;
      }
      else {
        DAT_08aba928 = 0;
        uVar8 = 1;
      }
    }
    break;
  case 1:
    iVar6 = FUN_089bdb90(*param_2,1);
    if (iVar6 == 0) {
      return 0;
    }
    DAT_08aba928 = 2;
    goto LAB_0886ff0c;
  case 2:
LAB_0886ff0c:
    FUN_0886f5d4(param_1,&DAT_08af7c84);
    puVar7 = *(undefined4 **)(&DAT_08ab9c2c + param_1 * 4);
    uVar2 = FUN_089d9674();
    iVar6 = FUN_089d9c84(uVar2,*puVar7);
    if (iVar6 == -1) {
      iVar6 = *param_3;
      if (iVar6 == 0) {
        FUN_089d8634(0,&DAT_08af7c84);
        uVar2 = FUN_089d81a4();
        FUN_089d816c(0);
        iVar1 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar2);
        FUN_089d866c();
        iVar6 = 0;
        if (iVar1 != 0) {
          FUN_089bd9b4(iVar1);
          iVar6 = iVar1;
        }
        *param_3 = iVar6;
      }
      iVar6 = FUN_089bda88(iVar6,&DAT_08af7c84,10,0,1);
      if (iVar6 != 0) {
        DAT_08aba928 = 3;
      }
    }
    else {
      DAT_08aba928 = 0;
      uVar8 = 1;
    }
    break;
  case 3:
    iVar6 = FUN_089bdb90(*param_3,0);
    if (iVar6 != 0) {
      DAT_08aba928 = 4;
    }
    break;
  case 4:
    iVar1 = FUN_0886fc9c(*param_2,iVar6);
    if (iVar1 == 0) {
      return 0;
    }
    DAT_08aba928 = DAT_08aba928 + 1;
  case 5:
    uVar2 = FUN_089c59f0();
    iVar6 = FUN_089c5e0c(uVar2,iVar6);
    if (iVar6 != 0) {
      uVar2 = FUN_0880cc48();
      iVar6 = FUN_0880e078(uVar2,param_1);
      if (iVar6 == -1) {
        DAT_08aba928 = 8;
      }
      else {
        DAT_08aba928 = DAT_08aba928 + 1;
switchD_0886fdb4_caseD_6:
        uVar2 = FUN_0880cc48();
        uVar2 = FUN_0880e078(uVar2,param_1);
        iVar6 = FUN_0886fc9c(*param_2,uVar2);
        if (iVar6 != 0) {
          DAT_08aba928 = DAT_08aba928 + 1;
switchD_0886fdb4_caseD_7:
          uVar2 = FUN_0880cc48();
          uVar2 = FUN_0880e078(uVar2,param_1);
          uVar3 = FUN_089c59f0();
          iVar6 = FUN_089c5e0c(uVar3,uVar2);
          if (iVar6 != 0) {
switchD_0886fdb4_caseD_8:
            DAT_08aba928 = 0;
            uVar8 = 1;
          }
        }
      }
    }
    break;
  case 6:
    goto switchD_0886fdb4_caseD_6;
  case 7:
    goto switchD_0886fdb4_caseD_7;
  case 8:
    goto switchD_0886fdb4_caseD_8;
  }
  return uVar8;
}

