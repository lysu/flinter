/* Copyright 2014 yiyuanzhong@gmail.com (Yiyuan Zhong)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __FLINTER_MKDIRS_H__
#define __FLINTER_MKDIRS_H__

#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** Same function as "mkdir -p" */
extern int mkdirs(const char *pathname, mode_t mode);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __FLINTER_MKDIRS_H__ */
