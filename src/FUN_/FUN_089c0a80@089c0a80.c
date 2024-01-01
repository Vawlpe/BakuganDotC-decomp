#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c0a80(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  FUN_089c8fd4(*param_1);
  FUN_089c07dc(param_1);
  bVar1 = false;
  if (DAT_08ac525c != 0) {
    FUN_08a2e348(DAT_08ac525c);
    while (puVar2 = (undefined4 *)FUN_08a2df18(DAT_08ac525c), puVar2 != (undefined4 *)0x0) {
      iVar3 = FUN_089c59d4();
      if (iVar3 == 0) {
        puVar2[1] = 0xffffffff;
      }
      if ((int)puVar2[1] < 0) {
        cVar5 = *(char *)(puVar2 + 0xc);
      }
      else {
        uVar4 = FUN_089c59f0();
        iVar3 = FUN_089c6890(uVar4,puVar2[1]);
        if (iVar3 == 0) {
          puVar2[1] = 0xffffffff;
          cVar5 = *(char *)(puVar2 + 0xc);
        }
        else {
          cVar5 = *(char *)(puVar2 + 0xc);
        }
      }
      if (cVar5 == '\0') {
        if (*(char *)((int)puVar2 + 0x31) != '\0') {
          iVar3 = puVar2[0xe];
          goto LAB_089c0b7c;
        }
        iVar3 = FUN_089c057c(param_1);
        if (iVar3 != 0) {
          iVar3 = puVar2[0xe];
          goto LAB_089c0b7c;
        }
      }
      else {
        iVar3 = puVar2[0xe];
LAB_089c0b7c:
        if (iVar3 < 1) {
          puVar2[0xe] = 0;
        }
        bVar1 = true;
        if (-1 < (int)puVar2[1]) {
          if (0 < (int)puVar2[0xd]) {
            puVar2[0xd] = puVar2[0xd] + -1;
          }
          iVar7 = 0;
          iVar3 = FUN_089c59d4();
          if (iVar3 != 0) {
            uVar4 = FUN_089c59f0();
            iVar7 = FUN_089c6588(uVar4,puVar2[1]);
          }
          bVar1 = true;
          if (iVar7 != 0) {
            iVar3 = FUN_089c1254();
            if (iVar3 == 0) {
              puVar2[1] = 0xffffffff;
            }
            else {
              uVar4 = FUN_089c127c();
              FUN_089c17cc(uVar4,*puVar2,puVar2[1]);
              puVar2[1] = 0xffffffff;
            }
            bVar1 = true;
          }
        }
      }
      if (bVar1) {
        iVar3 = puVar2[1];
LAB_089c1054:
        if (iVar3 < 0) {
          bVar1 = false;
          if (puVar2[2] == 0) {
            bVar1 = true;
          }
          else if ((*(char *)((int)puVar2 + 0x32) != '\0') && (puVar2[0xd] == 0)) {
            bVar1 = true;
          }
          if ((bVar1) && (FUN_08a2e148(DAT_08ac525c,puVar2), *(char *)((int)puVar2 + 0x32) != '\0'))
          {
            if ((DAT_08ac5260 != 0) && (iVar3 = FUN_089d774c(DAT_08ac5260,puVar2), iVar3 != 0)) {
              puVar2 = (undefined4 *)0x0;
            }
            if (puVar2 != (undefined4 *)0x0) {
              FUN_089d8634();
              FUN_089d7fd8(puVar2,0,0);
              FUN_089d866c();
            }
          }
        }
      }
      else {
        if ((undefined4 *)puVar2[2] == (undefined4 *)0x0) {
          iVar3 = puVar2[1];
        }
        else {
          puVar2[4] = *(undefined4 *)puVar2[2];
          puVar2[5] = *(undefined4 *)(puVar2[2] + 4);
          puVar2[6] = *(undefined4 *)(puVar2[2] + 8);
          if (*(int *)(puVar2[3] + 8) == 2) {
            puVar2[7] = *(undefined4 *)(puVar2[2] + 0xc);
            puVar2[8] = *(undefined4 *)(puVar2[2] + 0x10);
            puVar2[9] = *(undefined4 *)(puVar2[2] + 0x14);
            iVar3 = puVar2[1];
          }
          else {
            iVar3 = puVar2[1];
          }
        }
        if (iVar3 < 0) {
          if (puVar2[2] == 0) {
            iVar3 = puVar2[1];
            goto LAB_089c1054;
          }
          iVar3 = puVar2[3];
        }
        else {
          iVar3 = puVar2[3];
        }
        iVar7 = *(int *)(iVar3 + 8);
        if (iVar7 < 2) {
          if (iVar7 < 1) goto LAB_089c0d68;
          local_60 = (float)FUN_089c0698(param_1,puVar2 + 4);
          local_58 = (float)puVar2[4];
          local_54 = (float)puVar2[5];
          local_50 = (float)puVar2[6];
          fVar10 = *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18);
        }
        else if (iVar7 < 3) {
          local_60 = (float)FUN_089bfc18(*param_1,puVar2 + 4,puVar2 + 7,&local_4c);
          local_58 = (float)puVar2[4] + ((float)puVar2[7] - (float)puVar2[4]) * local_4c;
          local_54 = (float)puVar2[5] + ((float)puVar2[8] - (float)puVar2[5]) * local_4c;
          local_50 = (float)puVar2[6] + ((float)puVar2[9] - (float)puVar2[6]) * local_4c;
          fVar10 = *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18);
        }
        else {
LAB_089c0d68:
          local_60 = 0.0;
          fVar10 = *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18);
        }
        if (fVar10 < local_60) {
          iVar3 = FUN_089c1254();
          if (iVar3 == 0) {
            iVar3 = puVar2[1];
          }
          else {
            uVar4 = FUN_089c127c();
            FUN_089c17cc(uVar4,*puVar2,puVar2[1]);
            iVar3 = puVar2[1];
          }
          if (iVar3 < 0) {
            iVar3 = puVar2[0xd];
          }
          else {
            iVar7 = 0;
            iVar3 = FUN_089c59d4();
            if (iVar3 != 0) {
              uVar4 = FUN_089c59f0();
              iVar7 = FUN_089c6588(uVar4,puVar2[1]);
            }
            if (iVar7 == 0) {
              iVar3 = puVar2[0xd];
            }
            else {
              puVar2[1] = 0xffffffff;
              iVar3 = puVar2[0xd];
            }
          }
          if (iVar3 == 0) {
            puVar2[2] = 0;
          }
          else {
            puVar2[0xd] = iVar3 + -1;
          }
          iVar3 = puVar2[1];
          goto LAB_089c1054;
        }
        iVar7 = puVar2[0xe];
        if ((int)puVar2[1] < 0) {
          iVar8 = 0;
          if (puVar2[0xd] == 0) {
            if (iVar7 < 1) {
              puVar2[2] = 0;
            }
            else {
              puVar2[2] = 0;
            }
          }
          else {
            iVar6 = 0;
            if (-1 < iVar7) {
              iVar6 = iVar7;
            }
            puVar2[0xe] = iVar6;
            iVar7 = FUN_089c59d4();
            if (iVar7 != 0) {
              uVar4 = FUN_089c59f0();
              iVar8 = FUN_089c6350(uVar4,*puVar2,0,1);
            }
            if (-1 < iVar8) {
              if (puVar2[0xd] != -1) {
                puVar2[0xd] = puVar2[0xd] + -1;
              }
              puVar2[1] = iVar8;
              puVar2[10] = 0;
              puVar2[0xb] = 0;
              goto LAB_089c0e20;
            }
          }
        }
        else {
          puVar2[0xe] = iVar7 + 1;
LAB_089c0e20:
          iVar7 = FUN_089c1254();
          if (iVar7 == 0) {
            iVar7 = *(int *)(iVar3 + 8);
          }
          else {
            uVar4 = FUN_089c127c();
            FUN_089c151c(uVar4,*puVar2,puVar2[1]);
            iVar7 = *(int *)(iVar3 + 8);
          }
          if (iVar7 != 0) {
            fVar9 = (float)FUN_089bfd1c(local_60 / fVar10,*(undefined4 *)(iVar3 + 0xc));
            fVar9 = fVar9 * (*(float *)(iVar3 + 0x14) - *(float *)(iVar3 + 0x10)) +
                    *(float *)(iVar3 + 0x10);
            puVar2[0x10] = fVar9;
            if (1 < (int)puVar2[0xf]) {
              fVar9 = fVar9 * 0.5 + (fVar9 * 0.5) / (float)puVar2[0xf];
            }
            if ((float)puVar2[10] == fVar9) {
              iVar3 = *(int *)(iVar3 + 8);
            }
            else {
              iVar7 = FUN_089c59d4();
              if (iVar7 == 0) {
                puVar2[10] = fVar9;
              }
              else {
                uVar4 = FUN_089c59f0();
                FUN_089c661c(fVar9,uVar4,puVar2[1]);
                puVar2[10] = fVar9;
              }
              iVar3 = *(int *)(iVar3 + 8);
            }
            if (iVar3 == 2) {
              FUN_089bfc18(param_1[1],puVar2 + 4,puVar2 + 7,&local_48);
              local_58 = (float)puVar2[4] + ((float)puVar2[7] - (float)puVar2[4]) * local_48;
              local_54 = (float)puVar2[5] + ((float)puVar2[8] - (float)puVar2[5]) * local_48;
              local_50 = (float)puVar2[6] + ((float)puVar2[9] - (float)puVar2[6]) * local_48;
            }
            fVar9 = (float)FUN_089c0778(param_1,&local_58);
            fVar10 = (float)FUN_089bfd1c(local_60 / fVar10,1);
            if ((float)puVar2[0xb] == fVar9 * fVar10) {
              iVar3 = puVar2[1];
            }
            else {
              puVar2[0xb] = fVar9 * fVar10;
              iVar3 = FUN_089c59d4();
              if (iVar3 == 0) {
                iVar3 = puVar2[1];
              }
              else {
                uVar4 = FUN_089c59f0();
                FUN_089c670c(puVar2[0xb],uVar4,puVar2[1]);
                iVar3 = puVar2[1];
              }
            }
            goto LAB_089c1054;
          }
        }
      }
    }
    FUN_08a2e348(DAT_08ac525c);
  }
  iVar3 = FUN_089c1254();
  if (iVar3 != 0) {
    uVar4 = FUN_089c127c();
    FUN_089c1960(uVar4);
  }
  return;
}

