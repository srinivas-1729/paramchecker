#include "paramchecker.h"

struct vital_config_s {
 float vitalVal;
 float vitalMinVal;
 float vitalMaxVal;
};

vital_config_s vitalList[][] = {
 {bpm, 70, 150},
 {spo2, 80, 150},
 {respRate, 30, 60}
};

bool isReadingsOk(float val, float min_lim, float max_lim)
{
 bool retVal = true;
 if((val < min_lim) || (val > max_lim))
 {
   retVal = false;
 }
  return retVal;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool retVal = true;
  for (int i = 0; i < 3; i++)
  {
   retVal &= isReadingsOk(vitalList[i][1], vitalList[i][2], vitalList[i][3]);
  }
   return retVal;
}
