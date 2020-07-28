#include "paramchecker.h"

// struct vital_config_s {
//  float vitalVal;
//  float vitalMinVal;
//  float vitalMaxVal;
// };

float vitalList[][3] = {
 {0, 70, 150},
 {0, 80, 150},
 {0, 30, 60}
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
  
  vitalList[0][0] = bpm;
  vitalList[1][0] = spo2;
  vitalList[2][0] = respRate; 
 
  for (int i = 0; i < 3; i++)
  {
   retVal &= isReadingsOk(vitalList[i][0], vitalList[i][1], vitalList[i][2]);
  }
   return retVal;
}
