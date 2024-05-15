#pragma once
#include<vector>
#include<functional>
#include<cstdlib>
using namespace std;

inline float RELU (float x){if(x > 0){return x;}else{return float(0);}}
inline float D_RELU (float x){if(x > 0){return float(1);}else{return float(0);}}

#define RANDOMNUMBER float(rand()%100)/100
#define INPUT 1
#define OUTPUT 1

class BPNN
{
public:
	BPNN(int flnn);
	void Init();

	void Tnit();

	void Train();

	void TEST();

	void AddLayer(int layerNeuronNumber);

	void Forward();

	void Train(float Delta,float r);
private:
	vector<vector<float>> m_layers;
	vector<vector<float>> m_bias;
	vector<vector<vector<float>>> m_weights;
	vector<float> m_target;
};

