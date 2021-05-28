/*
 * Tencent is pleased to support the open source community by making wechat-matrix available.
 * Copyright (C) 2018 THL A29 Limited, a Tencent company. All rights reserved.
 * Licensed under the BSD 3-Clause License (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _LIBWECHATBACKTRACE_FP_UNWINDER_H
#define _LIBWECHATBACKTRACE_FP_UNWINDER_H

#include "BacktraceDefine.h"

namespace wechat_backtrace {

    void
    FpUnwind(uptr *regs, Frame *backtrace, const size_t frame_max_size, size_t &frame_size);

}  // namespace wechat_backtrace

#endif  // _LIBWECHATBACKTRACE_FP_UNWINDER_H
