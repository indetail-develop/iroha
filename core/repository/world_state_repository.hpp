/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __WORLD_STATE_REPOSITORY_HPP_
#define __WORLD_STATE_REPOSITORY_HPP_

#include <vector>
#include <memory>
#include <string>

namespace repository {

  // I don't know model.

  namespace world_state_repository {

      bool add(const std::string &key, const std::string &value);

      bool update(const std::string &key, const std::string &value);

      bool remove(const std::string &key);

      std::string find(const std::string &key);

      std::string findOrElse(
          const std::string &key,
          const std::string &defaultValue
      );

      bool isExist(const std::string &key);

  };

}; // namespace repository

#endif // __WORLD_STATE_REPOSITORY_HPP_
