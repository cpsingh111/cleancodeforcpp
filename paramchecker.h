bool vitalsAreOk(float *arr, int n);

class Vitals
{
 float upperbound=100;
 float lowerbound=0;

 public: virtual bool iswithinrange(float vital){
 
  return(vital>upperbound&&vital<lowerbound);
 }
 
};

class bpm:public Vitals
{
 float upperbound= 150;
 float lowerbound=70;
 
 public: virtual bool iswithinrange(float bpm){
  return(bpm>upperbound&&bpm<lowerbound);
 }

};

class spo2:public Vitals
{
 float upperbound= 101;
 float lowerbound=80;
 
 public: virtual bool iswithinrange(float spo2){
  return(spo2>upperbound&&spo2<lowerbound);
 }
 
};
 class respRate:public Vitals
{
 float upperbound= 60;
 float lowerbound=30;
 
 public: virtual bool iswithinrange(float respRate){
  return(respRate>upperbound&&respRate<lowerbound);
 }

};
