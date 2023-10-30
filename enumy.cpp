#include <iostream>

enum class Color {
    green,
    orange,
    red
};

enum class TrafficLights {
    green,
    orange,
    red
};

void stop() {
    std::cout << "stop" << std::endl;
}

void go() {
    std::cout << "go" << std::endl;
}

TrafficLights getColor() {
    return TrafficLights::red;
}

void TrafficJam() {
    auto TrafficColor = getColor();
    if(TrafficColor == TrafficLights::red) {
        stop();
    } else {
        go();
    }
}

int main() {
    TrafficJam();
    return 0;
}