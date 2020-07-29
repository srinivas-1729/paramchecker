
typedef struct {
 float vitalVal;
 float vitalMinVal;
 float vitalMaxVal;
}vital_config_s;

typedef struct {
  vital_config_s *vitalValList;
  int numSensors;
}vital_param_s;

bool bpmIsOk(float bpm);
bool spo2IsOk(float spo2);
bool respRateIsOk(float respRate);
bool isReadingsOk(float val, float min_lim, float max_lim);

bool vitalsAreOk(vital_param_s *vitalList);
