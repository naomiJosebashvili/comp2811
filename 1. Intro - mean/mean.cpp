#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void read_data(istream& input, vector<float>& data) {
    float value;
    while (input >> value) {
        data.push_back(value);
    }
}

float mean_value(const vector<float> data) {
    float total = 0.0;
    for (float value : data) {
        total += value;
    }
    float mean = total / data.size();
    return mean;
}

int main(int argc, char* argv[1]) {
    
    if (argc != 2) {
        cerr << "Usage: ./mean <filename>" << endl;
        return 1;
    }

    ifstream infile(argv[1]);
    if (not infile) {
        cerr << "Error: cannot access " << argv[1] << endl;
        return 2;
    }

    vector<float> data;

    read_data(infile, data);

    cout << data.size() << " values read from file" << endl;
    cout << "Mean value = " << mean_value(data) << endl;

    return 0;

}