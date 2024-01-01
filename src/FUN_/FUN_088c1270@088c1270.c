#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c1270(int param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  iVar6 = FUN_088e1948();
  bVar5 = false;
  if (iVar6 != 0) {
    iVar7 = FUN_088e1948();
    if (*(int *)(iVar7 + 0x140) == 0) {
      bVar5 = true;
    }
    else {
      iVar7 = FUN_088e1948();
      if (*(int *)(iVar7 + 0x140) == 1) {
        bVar5 = true;
      }
    }
  }
  bVar3 = false;
  if (DAT_08ac5928 != 0) {
    if (!bVar5) {
      iVar7 = *(int *)(param_1 + 0x658);
      goto LAB_088c1318;
    }
    bVar3 = (*(byte *)(DAT_08ac5928 + 5) & 0x40) != 0;
  }
  iVar7 = *(int *)(param_1 + 0x658);
LAB_088c1318:
  if (iVar7 == 0) {
    return 0;
  }
  cVar1 = *(char *)(iVar7 + 0x15e);
  do {
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
      iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x54))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x50));
      if (iVar8 == 0) {
        iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 100))
                          (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x60));
        if (iVar8 == 0) {
          iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x6c))
                            (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x68));
          if (iVar8 == 0) {
            iVar8 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x74))
                              (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x70));
            if (iVar8 == 0) {
              iVar8 = *(int *)(iVar7 + 0x168);
              if (iVar8 == 9) {
                bVar9 = *(byte *)(iVar7 + 0x15f);
              }
              else if (iVar8 == 0x10) {
                bVar9 = *(byte *)(iVar7 + 0x15f);
              }
              else {
                if (iVar8 != 0x11) {
                  iVar7 = *(int *)(iVar7 + 4);
                  goto LAB_088c14b4;
                }
                bVar9 = *(byte *)(iVar7 + 0x15f);
              }
              if ((bVar9 & 2) == 0) {
                iVar7 = *(int *)(iVar7 + 4);
              }
              else {
                if (bVar3) {
                  return iVar7;
                }
                if (bVar5) {
                  *(undefined *)(iVar6 + 0x3ae) = 1;
                  goto LAB_088c14b0;
                }
                iVar7 = *(int *)(iVar7 + 4);
              }
            }
            else {
              if ((*(byte *)(iVar7 + 0x15f) & 2) == 0) goto LAB_088c14b0;
              iVar8 = FUN_088c1120(param_1,iVar7,1);
              if (iVar8 == 0) {
                iVar7 = *(int *)(iVar7 + 4);
              }
              else {
                if (bVar3) {
                  *(undefined *)(param_1 + 0x6f9) = 0;
                  return iVar7;
                }
                if (bVar5) {
                  *(undefined *)(iVar6 + 0x3ae) = 1;
                  goto LAB_088c14b0;
                }
                iVar7 = *(int *)(iVar7 + 4);
              }
            }
          }
          else {
            if ((*(byte *)(iVar7 + 0x15f) & 1) != 0) {
              (**(code **)(*(int *)(iVar7 + 0x14) + 0x84))
                        (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x80),0);
              return iVar7;
            }
            iVar7 = *(int *)(iVar7 + 4);
          }
        }
        else {
          sVar2 = *(short *)(iVar7 + 0x142);
          bVar4 = (*(byte *)(iVar7 + 0x15f) & 2) != 0;
          if ((((sVar2 == 0x1774) || (sVar2 == 800)) || (sVar2 == 0x321)) ||
             (((sVar2 == 0x323 || (sVar2 == 0x324)) || (sVar2 == 0x327)))) {
            if (bVar4) {
              if (bVar3) {
                return iVar7;
              }
              if (bVar5) {
                *(undefined *)(iVar6 + 0x3ae) = 1;
                goto LAB_088c14b0;
              }
              iVar7 = *(int *)(iVar7 + 4);
            }
            else {
              iVar7 = *(int *)(iVar7 + 4);
            }
          }
          else {
            if (bVar4) {
              return iVar7;
            }
LAB_088c14b0:
            iVar7 = *(int *)(iVar7 + 4);
          }
        }
      }
      else {
        if ((*(byte *)(iVar7 + 0x15f) & 1) != 0) {
          *(undefined *)(param_1 + 0x6f9) = 1;
          return iVar7;
        }
        if ((*(byte *)(iVar7 + 0x15f) & 2) == 0) {
          iVar7 = *(int *)(iVar7 + 4);
        }
        else {
          iVar8 = FUN_088c1120(param_1,iVar7,0);
          if (iVar8 == 0) {
            iVar7 = *(int *)(iVar7 + 4);
          }
          else {
            if (bVar3) {
              *(undefined *)(param_1 + 0x6f9) = 0;
              return iVar7;
            }
            if (bVar5) {
              *(undefined *)(iVar6 + 0x3ae) = 1;
              goto LAB_088c14b0;
            }
            iVar7 = *(int *)(iVar7 + 4);
          }
        }
      }
    }
LAB_088c14b4:
    if (iVar7 == 0) {
      return 0;
    }
    cVar1 = *(char *)(iVar7 + 0x15e);
  } while( true );
}

