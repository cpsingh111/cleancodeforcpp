
bool bpmokfun(float bpm){
  return(bpm<70|| bpm>150);
}

bool spo2fun(float spo2){
  return(spo2<80);
}

bool respRatefun(float respRate){
  return(respRate<30|| respRate>60); 
}


bool vitalsAreOk(float bpm, float spo2, float respRate) {
/*  if(bpm < 70 || bpm > 150) {
    return false;
  } 
  if(spo2 < 80) {
    return false;
  } 
  if(respRate < 30 || respRate > 60) {
    return false;
  }*/
  return (bpmokfun(bpm)||spo2fun(spo2)||respRatefun(respRate));
}
