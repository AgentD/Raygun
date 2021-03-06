// The MIT License (MIT)
//
// Copyright (c) 2019,2020 The Raygun Authors.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.

#pragma once

#include "raygun/utils/fmt_utils.hpp"
#include "raygun/utils/macros.hpp"

#define RAYGUN_TRACE ::raygun::logger->trace
#define RAYGUN_DEBUG ::raygun::logger->debug
#define RAYGUN_INFO ::raygun::logger->info
#define RAYGUN_WARN ::raygun::logger->warn
#define RAYGUN_ERROR ::raygun::logger->error
#define RAYGUN_CRITICAL ::raygun::logger->critical

#define RAYGUN_FATAL(_fmt, ...) \
    do { \
        RAYGUN_CRITICAL(_fmt, __VA_ARGS__); \
        RAYGUN_BREAK; \
        abort(); \
    } while(0)

namespace raygun {

extern std::shared_ptr<spdlog::logger> logger;

} // namespace raygun
