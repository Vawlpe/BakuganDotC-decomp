#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0884c63c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_0880cc48();
  iVar2 = FUN_0880d0ac(uVar1,0x1b);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (5 < iVar2) {
    iVar2 = 5;
  }
  iVar5 = 0;
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < iVar2) {
    do {
      if (*(int *)(iVar4 + 0x594) == 2) {
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < iVar2);
  }
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = param_1;
  if (0 < iVar2) {
    do {
      if (*(int *)(iVar4 + 0x594) == 1) {
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar6 < iVar2);
  }
  iVar6 = 0;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (*(int *)(param_1 + 0x594) == 3) {
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 4;
    } while (iVar6 < iVar2);
  }
  if (iVar2 < 4) {
    if (2 < iVar2) {
      if (1 < iVar3) {
        if (2 < iVar3) {
          return false;
        }
        return true;
      }
      if (iVar3 < 1) {
        return false;
      }
      if (iVar5 != 1) {
        return false;
      }
      if (iVar4 != 1) {
        return false;
      }
      return true;
    }
  }
  else if (iVar2 == 5) {
    if (1 < iVar3) {
      if (2 < iVar3) {
        if (3 < iVar3) {
          return false;
        }
        return true;
      }
      if (iVar5 != 1) {
        return false;
      }
      if (iVar4 != 1) {
        return false;
      }
      return true;
    }
    if (iVar3 < 1) {
      return false;
    }
    if (iVar5 != 2) {
      return false;
    }
    if (iVar4 != 2) {
      return false;
    }
    return true;
  }
  return iVar3 != 0;
}

