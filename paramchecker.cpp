bool iswithinrange(float arg, float min, float max){
   return(arg<min||arg>max); 
}
  
bool bpmokfun(float bpm){
  return(iswithinrange(bpm, 70,150);
}

bool spo2fun(float spo2){
  return(spo2<80);
}

bool respRatefun(float respRate){
  return(iswithinrange(respRate, 30,60);
}


bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (bpmokfun(bpm)||spo2fun(spo2)||respRatefun(respRate));
}
