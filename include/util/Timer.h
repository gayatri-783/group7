//
// Created by Patrick Martin on 12/12/25.
//

#ifndef GROUP7_TIMER_H
#define GROUP7_TIMER_H

#pragma once

#include <chrono>

class Timer {

public:
    Timer() : elapsed_seconds(0.0), running_(false) {}

    void start() {
        start_time_ = std::chrono::steady_clock::now();
        running_ = true;
    }

    void stop() {
        if (running_) {
            const auto now = std::chrono::steady_clock::now();
            elapsed_seconds += std::chrono::duration_cast<std::chrono::duration<double>>(now - start_time_).count();
            running_ = false;
        }
    }

    [[nodiscard]] double elapsed() const { return elapsed_seconds; }

    void reset() {
        running_ = false;
        elapsed_seconds = 0.0;
    }

    [[nodiscard]] bool is_running() const { return running_; }
private:
    std::chrono::steady_clock::time_point start_time_;
    double elapsed_seconds;
    bool running_;
};

#endif //GROUP7_TIMER_H