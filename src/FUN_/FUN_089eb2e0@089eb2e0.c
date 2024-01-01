#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x089eb5b0)

int FUN_089eb2e0(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar5 = 0;
  bVar3 = true;
  cVar1 = *param_2;
  do {
    uVar6 = (uint)cVar1;
    uVar4 = 0;
    bVar2 = false;
    if (uVar6 == 0) {
      bVar2 = true;
    }
    else if ((uVar6 == 0xc0) && (param_2[1] == 0x80)) {
      bVar2 = true;
    }
    else if ((uVar6 == 0xe0) && ((param_2[1] == 0x80 && (param_2[2] == 0x80)))) {
      bVar2 = true;
    }
    else if ((uVar6 == 0xf0) &&
            (((param_2[1] == 0x80 && (param_2[2] == 0x80)) && (param_2[3] == 0x80)))) {
      bVar2 = true;
    }
    if (bVar2) {
      *param_1 = '\0';
      bVar3 = false;
      pcVar7 = param_1 + 1;
    }
    else if (uVar6 == 10) {
      *param_1 = -2;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 1;
      pcVar7 = param_1 + 1;
    }
    else {
      iVar9 = 0;
      if ((uVar6 & 0x80) == 0) {
        iVar8 = 0;
        bVar2 = true;
        do {
          uVar10 = (uint)(char)(&DAT_08aa3538)[iVar8];
          if (uVar6 == uVar10) {
            uVar4 = iVar9 + 1;
            break;
          }
          if ((uVar10 & 0x80) == 0) {
            iVar8 = iVar8 + 1;
            bVar2 = iVar8 < 0x278;
          }
          else if ((uVar10 & 0x80) != 0) {
            do {
              uVar10 = uVar10 << 1;
              iVar8 = iVar8 + 1;
            } while ((uVar10 & 0x80) != 0);
            bVar2 = iVar8 < 0x278;
          }
          iVar9 = iVar9 + 1;
        } while (bVar2);
        param_2 = param_2 + 1;
      }
      else {
        uVar10 = uVar6 & 0xf0;
        if (uVar10 == 0xc0) {
          iVar8 = 0;
          bVar2 = true;
          do {
            uVar10 = (uint)(char)(&DAT_08aa3538)[iVar8];
            if ((uVar6 == uVar10) && (param_2[1] == (&DAT_08aa3539)[iVar8])) {
              uVar4 = iVar9 + 1;
              break;
            }
            if ((uVar10 & 0x80) == 0) {
              iVar8 = iVar8 + 1;
              bVar2 = iVar8 < 0x278;
            }
            else if ((uVar10 & 0x80) != 0) {
              do {
                uVar10 = uVar10 << 1;
                iVar8 = iVar8 + 1;
              } while ((uVar10 & 0x80) != 0);
              bVar2 = iVar8 < 0x278;
            }
            iVar9 = iVar9 + 1;
          } while (bVar2);
          param_2 = param_2 + 2;
        }
        else if (uVar10 == 0xe0) {
          iVar8 = 0;
          bVar2 = true;
          do {
            uVar10 = (uint)(char)(&DAT_08aa3538)[iVar8];
            if (((((uVar10 & 0xf0) == 0xe0) && (uVar6 == uVar10)) &&
                (param_2[1] == (&DAT_08aa3539)[iVar8])) && (param_2[2] == (&DAT_08aa353a)[iVar8])) {
              uVar4 = iVar9 + 1;
              break;
            }
            if ((uVar10 & 0x80) == 0) {
              iVar8 = iVar8 + 1;
              bVar2 = iVar8 < 0x278;
            }
            else if ((uVar10 & 0x80) != 0) {
              do {
                uVar10 = uVar10 << 1;
                iVar8 = iVar8 + 1;
              } while ((uVar10 & 0x80) != 0);
              bVar2 = iVar8 < 0x278;
            }
            iVar9 = iVar9 + 1;
          } while (bVar2);
          param_2 = param_2 + 3;
        }
        else if (uVar10 == 0xf0) {
          iVar8 = 0;
          bVar2 = true;
          do {
            uVar10 = (uint)(char)(&DAT_08aa3538)[iVar8];
            if ((((uVar10 & 0xf0) == 0xf0) && (uVar6 == uVar10)) &&
               ((param_2[1] == (&DAT_08aa3539)[iVar8] &&
                ((param_2[2] == (&DAT_08aa353a)[iVar8] && (param_2[3] == (&DAT_08aa353b)[iVar8])))))
               ) {
              uVar4 = iVar9 + 1;
              break;
            }
            if ((uVar10 & 0x80) == 0) {
              iVar8 = iVar8 + 1;
              bVar2 = iVar8 < 0x278;
            }
            else if ((uVar10 & 0x80) != 0) {
              do {
                uVar10 = uVar10 << 1;
                iVar8 = iVar8 + 1;
              } while ((uVar10 & 0x80) != 0);
              bVar2 = iVar8 < 0x278;
            }
            iVar9 = iVar9 + 1;
          } while (bVar2);
          param_2 = param_2 + 4;
        }
      }
      pcVar7 = param_1;
      if (uVar4 != 0) {
        pcVar7 = param_1 + 1;
        if (uVar4 < 200) {
          *param_1 = (char)uVar4;
          iVar5 = iVar5 + 1;
        }
        else {
          *param_1 = (char)(uVar4 - 200 >> 8) + -0x38;
          *pcVar7 = (char)(uVar4 - 200);
          pcVar7 = param_1 + 2;
          iVar5 = iVar5 + 2;
        }
      }
    }
    if (!bVar3) {
      return iVar5;
    }
    cVar1 = *param_2;
    param_1 = pcVar7;
  } while( true );
}

