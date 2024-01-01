#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a03920(int *param_1,int param_2,byte param_3,undefined4 param_4,undefined4 param_5,
                undefined4 param_6,undefined4 *param_7,int **param_8)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int **local_38;
  
  local_3c = 0;
  *param_8 = (int *)0x0;
  local_48 = &DAT_08b03aa4;
  iVar8 = 0;
  bVar7 = param_3 & 1;
  local_44 = param_6;
  local_40 = param_5;
  local_38 = param_8;
  do {
    bVar3 = false;
    local_4c = local_40;
    bVar2 = *(byte *)(param_1 + 1);
    iVar8 = iVar8 + 1;
    bVar4 = bVar2 & 1;
    if ((bVar2 & 0x10) == 0) {
      if ((bVar4 == bVar7) &&
         ((*param_1 == param_2 ||
          ((iVar5 = *(int *)(*param_1 + 8), iVar5 == *(int *)(param_2 + 8) && (iVar5 != 0)))))) {
        if (bVar7 == 0) {
          bVar3 = true;
        }
        else if (((bVar4 == bVar7) && (bVar7 != 0)) && ((~(bVar2 & 6) & param_3 & 6) == 0)) {
          bVar3 = true;
        }
      }
    }
    else {
      bVar3 = true;
    }
    if (((!bVar3) && (bVar4 == bVar7)) && ((bVar7 == 0 || ((bVar2 & param_3 & 6) == (param_3 & 6))))
       ) {
      puVar6 = *(undefined **)(*param_1 + 8);
      if (((puVar6 == (undefined *)0x0) || (puVar6 != local_48)) ||
         ((bVar4 != bVar7 || ((bVar2 & 1) == 0)))) {
        if (bVar7 == 0) {
          iVar5 = *(int *)(param_2 + 0x10);
        }
        else {
          if ((bVar7 == 0) || ((bVar2 & 1) == 0)) goto LAB_08a03ac8;
          iVar5 = *(int *)(param_2 + 0x10);
        }
        if (((iVar5 != 0) &&
            (iVar5 = FUN_08a045bc(param_7,&local_50,param_2,*param_1,&local_4c,local_44), iVar5 != 0
            )) && (bVar3 = true, param_7 != (undefined4 *)0x0)) {
          *param_7 = local_50;
        }
      }
      else {
        bVar3 = true;
      }
    }
LAB_08a03ac8:
    if (bVar3) {
      *local_38 = param_1;
      return iVar8;
    }
    piVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    if ((*(byte *)piVar1 & 0x20) != 0) {
      return local_3c;
    }
  } while( true );
}

