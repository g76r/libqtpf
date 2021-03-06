/* Copyright 2012-2017 Hallowyn and others.
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

#include "pfoptions.h"
#include <QRegularExpression>

static QRegularExpression _dupcolons { "::+" },
_illegalsAndUseless { "\\A:+|[^a-zA-Z0-9:]*|:+\\z" },
_nulls { "\\Anull\\z|null:|:null" };

QString PfOptions::normalizeSurface(const QString &surface) {
  QString s = surface;
  s.remove(_illegalsAndUseless)
      .replace(_dupcolons, QStringLiteral(":"))
      .remove(_nulls);
  return s;
}
