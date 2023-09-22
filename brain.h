struct brain {
  int fitness,
  int inputc,
  int outputc
}

float calculate(struct brain b, float *inputs);

int mutate(struct brain b, int type);