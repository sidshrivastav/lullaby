/*
Copyright 2017-2019 Google Inc. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS-IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef LULLABY_MODULES_DISPATCHER_DISPATCHER_BINDER_H_
#define LULLABY_MODULES_DISPATCHER_DISPATCHER_BINDER_H_

#include "lullaby/modules/dispatcher/dispatcher.h"
#include "lullaby/util/registry.h"
#include "lullaby/util/typeid.h"

namespace lull {

/// A simple utility class that adds some function bindings for Dispatcher, and
/// removes them when destroyed.
class DispatcherBinder {
 public:
  explicit DispatcherBinder(Registry* registry);
  ~DispatcherBinder();

  /// Create and register a new QueuedDispatcher and this binder in the
  /// Registry.
  static Dispatcher* CreateQueuedDispatcher(Registry* registry);

 private:
  Registry* registry_;
};

}  // namespace lull

LULLABY_SETUP_TYPEID(lull::DispatcherBinder);

#endif  // LULLABY_MODULES_DISPATCHER_DISPATCHER_BINDER_H_
