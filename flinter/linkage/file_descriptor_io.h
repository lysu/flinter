/* Copyright 2015 yiyuanzhong@gmail.com (Yiyuan Zhong)
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

#ifndef __FLINTER_LINKAGE_FILE_DESCRIPTOR_IO_H__
#define __FLINTER_LINKAGE_FILE_DESCRIPTOR_IO_H__

#include <stdint.h>

#include <string>

#include <flinter/linkage/abstract_io.h>

namespace flinter {

class Interface;

class FileDescriptorIo : public AbstractIo {
public:
    /// @param i life span TAKEN.
    FileDescriptorIo(Interface *i, bool connecting);
    virtual ~FileDescriptorIo();

    virtual bool Initialize(Action *action,
                            Action *next_action,
                            bool *wanna_read,
                            bool *wanna_write);

    virtual Status Read(void *buffer, size_t length, size_t *retlen, bool *more);
    virtual Status Write(const void *buffer, size_t length, size_t *retlen);
    virtual Status Shutdown();
    virtual Status Connect();
    virtual Status Accept();

private:
    Interface *const _i;
    bool _connecting;

}; // class FileDescriptorIo

} // namespace flinter

#endif // __FLINTER_LINKAGE_FILE_DESCRIPTOR_IO_H__

