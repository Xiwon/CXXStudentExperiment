#pragma once
#include <string>

namespace adas
{
    struct Pose
    {
        int x;
        int y;
        char heading;
    };

    class Executor
    {
    public:
        static Executor *NewExecutor(const Pose &pose = {0, 0, 'N'}) noexcept;

    public:
        Executor() = default;
        virtual ~Executor() = default;

        Executor(const Executor &) = delete;
        Executor &operator=(const Executor &) = delete;

    public:
        virtual Pose Query() const noexcept = 0;
    };
}