class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> sol;
        return {celsius+273.15,celsius*1.8+32};
    }
};