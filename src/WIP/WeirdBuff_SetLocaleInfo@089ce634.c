#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int WIP_WeirdBuff_SetLocaleInfo(config_buffer *param_1)

{
  int err;
  int failed_set;
  int lang;
  int btn_assignments;
  
  failed_set = 0;
  err = zz_sceImposeGetLanguageMode(&lang,&btn_assignments);
  if (err == 0) {
    if (param_1->locale2 == -1) {
      param_1->locale2 = lang;
    }
    if (lang == 2) {
      param_1->locale = 2;
      lang = 2;
    }
    else {
      param_1->locale = 1;
      lang = 1;
    }
                    // Force button assignment mode to 1
    err = zz_sceImposeSetLanguageMode(lang,1);
    if (err == 0) {
      failed_set = 1;
    }
  }
  return failed_set;
}

