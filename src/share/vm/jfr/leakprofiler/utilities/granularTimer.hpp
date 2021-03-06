/*
 * Copyright (c) 2014, 2019, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_VM_LEAKPROFILER_UTILITIES_GRANULARTIMER_HPP
#define SHARE_VM_LEAKPROFILER_UTILITIES_GRANULARTIMER_HPP

#include "jfr/utilities/jfrTraceTime.hpp"
#include "memory/allocation.hpp"

class GranularTimer : public AllStatic {
 private:
  static JfrTraceTime _finish_time_ticks;
  static JfrTraceTime _start_time_ticks;
  static long _counter;
  static long _granularity;
  static bool _finished;
 public:
  static void start(jlong duration_ticks, long granularity);
  static void stop();
  static const JfrTraceTime& start_time();
  static const JfrTraceTime& end_time();
  static bool is_finished();
};

#endif // SHARE_VM_LEAKPROFILER_UTILITIES_GRANULARTIMER_HPP
