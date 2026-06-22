class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourPos = (hour % 12) * 5 + minutes / 12.0;
        double minutePos = minutes;

        double angle = abs(hourPos - minutePos) * 6; // 1 mint = 6 degree

        return min(angle, 360 - angle);
    }
};