/* Copyright 2012-2013 Hallowyn and others.
See the NOTICE file distributed with this work for additional information
regarding copyright ownership.  The ASF licenses this file to you under
the Apache License, Version 2.0 (the "License"); you may not use this
file except in compliance with the License. You may obtain a copy of the
License at http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
License for the specific language governing permissions and limitations
under the License.
*/

#ifndef LIBQTPF_GLOBAL_H
#define LIBQTPF_GLOBAL_H

#if defined(LIBQTPF_LIBRARY)
#  define LIBQTPFSHARED_EXPORT Q_DECL_EXPORT
#else
#  define LIBQTPFSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBQTPF_GLOBAL_H
